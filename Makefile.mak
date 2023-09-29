project1: main.o fraction.o point.o
	g++ -o project1 main.o fraction.o point.o

main.o: main.cpp fraction.h point.h
	g++ -c main.cpp

fraction.o: fraction.cc fraction.h
	g++ -c fraction.cc 

point.o: point.cpp point.h
	g++ -c point.cpp

