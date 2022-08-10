# Variables to control makefile operation
SOURCES:=$(wildcard *.cpp)
DEPS:=$(SOURCES:.cpp=.d)
OBJS:=$(SOURCES:.cpp=.o)
CXX = g++
# CXXFLAGS = -Ilibs
CXXFLAGS = -g -Wall
EXE = dungeon

# Targets
default: $(EXE)
	@ls --color

$(EXE): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.d: %.cpp
	$(CXX) $(CXXFLAGS) -MM -MF $@ $<

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<

clean:
	rm *.d *.o $(EXE)
	@ls --color

install:
	@echo compiling...
	make
	sudo mv dungeon /usr/bin
	@rm *.o *.d
	@ls --color

uninstall:
	@echo uninstalling...
	sudo rm /usr/bin/dungeon
	@ls --color

include $(DEPS)
