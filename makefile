CXXFLAGS += -std=c++11 -w -Wall -g
CXXFLAGS += -I include



src/complete_parser.tab.cpp src/basic_parser.tab.hpp : src/test_parser.y
	bison -v -d src/basic_parser.y -o src/basic_parser.tab.cpp

src/basic_lex.yy.cpp : src/basic_lex.flex src/basic_parser.tab.hpp
	flex -o src/basic_lex.yy.cpp  src/basic_lex.flex


bin/% : src/%.cpp
	mkdir -p bin
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -o $@ $^ $(LDFLAGS) $(LDLIBS)

bin/translator : src/c_translator.o src/abstsyntree_translate.o

bin/compiler : src/c_compiler.o src/abstsyntree_compile.o

clean :
	-rm bin/*
	-rm src/*.o
