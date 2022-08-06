# Variables to control makefile operation
CC = g++
CFLAGS = -g -Wall
TARGET = dungeon

# Targets
all: $(TARGET)

$(TARGET): main.o item.o
	$(CC) $(CFLAGS) -o $(TARGET) main.o item.o

main.o: main.cpp item.h
	$(CC) $(CFLAGS) -c main.cpp

item.o: item.h

clean:
	@rm *.o $(TARGET)
