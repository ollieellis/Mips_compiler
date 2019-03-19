CXXFLAGS += -std=c++11 -w -Wall -g
CXXFLAGS += -I include



src/test_parser.tab.cpp src/test_parser.tab.hpp : src/test_parser.y
	bison -v -d src/test_parser.y -o src/test_parser.tab.cpp

src/complete_lex.yy.cpp : src/complete_lex.flex src/complete_parser.tab.hpp
	flex -o src/complete_lex.yy.cpp  src/complete_lex.flex

bin/% : src/%.cpp
	mkdir -p bin
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -o $@ $^ $(LDFLAGS) $(LDLIBS)

bin/c_translator : src/c_translator.o src/abstsyntree_translate.o src/test_parser.tab.o src/complete_lexer.yy.o src/test_parser.tab.o

bin/c_compiler : src/c_compiler.o src/abstsyntree_compile.o src/test_parser.tab.o src/complete_lexer.yy.o src/test_parser.tab.o

clean :
	rm src/*.o
	rm bin/*
	rm src/*.tab.cpp
	rm src/*.yy.cpp
