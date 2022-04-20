CC = g++
OBJ = main.o
HEADER = include/travel.h 
CFLAGS = -c -Wall -Iinclude

sess8: $(OBJ) 
	$(CC) $(OBJ) -o $@

main.o: src/sess8.cpp $(HEADER)
	$(CC) $(CFLAGS) $< -o $@

clean: 
	rm -rf *o sess8

