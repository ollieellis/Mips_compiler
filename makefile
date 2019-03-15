CXXFLAGS += -std=c++11 -w -Wall -g
CXXFLAGS += -I include


src/basic_parser.tab.cpp src/basic_parser.tab.hpp : src/basic_parser.y
	bison -v -d src/basic_parser.y -o src/basic_parser.tab.cpp

src/basic_lexer.yy.cpp : src/basic_lexer.flex src/basic_parser.tab.hpp
	flex -o src/basic_lexer.yy.cpp  src/basic_lexer.flex


bin/% : src/%.cpp
	mkdir -p bin
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -o $@ $^ $(LDFLAGS) $(LDLIBS)

bin/translator :

bin/compiler : 

clean :
	-rm bin/*
	-rm src/*.o
	-rm working/*/*.txt
