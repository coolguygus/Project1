project1: main.o fraction.o point.o
	g++ -o project1 main.o fraction.o point.o

main.o: main.cpp fraction.h point.h
	g++ -c main.cpp

fraction.o: fraction.cpp fraction.h
	g++ -c fraction.cpp

point.o: point.cpp point.h
	g++ -c point.cpp