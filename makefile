CXXFLAGS += -std=c++11 -w -Wall -g
CXXFLAGS += -I include

bin/% : src/%.cpp
	mkdir -p bin
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -o $@ $^ $(LDFLAGS) $(LDLIBS)

bin/translator :

bin/compiler : 

clean :
	-rm bin/*
	-rm src/*.o
	-rm working/*/*.txt
