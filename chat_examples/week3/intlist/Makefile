CC=g++

CXXFLAGS=-Wall -pedantic -std=c++14
LXXFLAGS=

all:intlist

intlist:main.o intlist.o
	$(CC) $(LXXFLAGS) main.o intlist.o -o intlist

main.o:main.cpp intlist.h
	$(CC) $(CXXFLAGS) -c main.cpp

intlist.o: intlist.cpp intlist.h
	$(CC) $(CXXFLAGS) -c intlist.cpp

