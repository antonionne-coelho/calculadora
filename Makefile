PROG = calculadora
CC = g++
CPPFLAGS = -O0 -g -Wall -pedantic

OBJS = main.o media.o

$(PROG): $(OBJS)
	$(CC) -o $(PROG) $(OBJS)

main.o: main.cpp
	$(CC) $(CPPFLAGS) -c main.cpp

media.o: media.cpp
	$(CC) $(CPPFLAGS) -c media.cpp

clean:
	rm -f *.o calculadora	