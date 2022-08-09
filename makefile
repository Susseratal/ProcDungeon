# Variables to control makefile operation
SOURCES:=$(wildcard *.cpp)
DEPS:=$(SOURCES:.cpp=.d)
OBJS:=$(SOURCES:.cpp=.o)
CXX = g++
CFLAGS = -g -Wall
EXE = dungeon

# Targets
default: $(EXE)

$(EXE): $(OBJS)
	$(CXX) -o $@ $^

%.d: %.cpp
	$(CXX) -MM -MF $@ $<

%.o: %.cpp
	$(CXX) -c $<

include $(DEPS)
