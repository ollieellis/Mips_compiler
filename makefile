LINK_TARGET = bin/c_compiler
CC =g++

CXXFLAGS += -std=c++11 -w -Wall -g
CXXFLAGS += -I include -I src

HPPFILES = abstsyntree.hpp abstsyntree_expr.hpp abstsyntree_stmts.hpp abstsyntree_dcls.hpp test_parser.tab.hpp
CPPFILES = $(wildcard src/*.cpp)
OBJS = $(patsubst %.cpp, %.o, $(CPPFILES))

all : $(LINK_TARGET)

run : $(LINK_TARGET)
	bin/c_compiler --translate test_program.c -o out.py

go : $(LINK_TARGET)
	bin/c_compiler -S test_program.c -o test_program.s

debug : $(LINK_TARGET)
	gdb --args bin/c_compiler --translate test_program.c d -o out.py

$(LINK_TARGET) : src/complete_lexer.yy.o src/test_parser.tab.o $(OBJS)
								 $(CC) $(CPPFLAGS) $^ -o $@

bin/% : src/%.cpp
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -o $@ $^ $(LDFLAGS) $(LDLIBS)

src/%.o : src/%.cpp $(HPPFILES)
					$(CC) $(CPPFLAGS) -c -o $@ $<

src/test_parser.tab.cpp src/test_parser.tab.hpp: src/test_parser.y
	bison -v -d src/test_parser.y -o src/test_parser.tab.cpp
	mkdir -p bin;

src/complete_lexer.yy.cpp: src/complete_lexer.flex src/test_parser.tab.hpp
	flex -o src/complete_lexer.yy.cpp  src/complete_lexer.flex

makeobj:
				$(CC) $(CPPFLAGS) -o bin/testout

lexer: src/complete_lexer.yy.cpp

parser: src/test_parser.tab.cpp src/test_parser.tab.hpp

.PHONY : clean

clean :
	-rm -f src/*.tab.c
	-rm -f bin/*
	-rm -f src/*.o
	-rm -f src/*.tab.hpp
	-rm -f src/*.tab.cpp
	-rm -f src/*.yy.cpp
	-rm -f src/*.output
	-rm -f *.py
	-rm -f *.s
