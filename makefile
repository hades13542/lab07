lab07.out:lab07.o Motorbike.o Vehicle.o Yamaha.o Car.o Ferrari.o
	g++ -Wall -g -o lab07.out *.o
	rm -f *.o
lab07.o: Lab7.cpp funkcje.cpp
	g++ -Wall -g -c Lab7.cpp funkcje.cpp
Motorbike.o: Motorbike.cpp Motorbike.h
	g++ -Wall -g -c Motorbike.cpp
Vehicle.o: Vehicle.cpp Vehicle.h
	g++ -Wall -g -c Vehicle.cpp
Yamaha.o: Yamaha.cpp Yamaha.h
	g++ -Wall -g -c Yamaha.cpp
Car.o: Car.cpp Car.h
	g++ -Wall -g -c Car.cpp
Ferrari.o: Ferrari.cpp Ferrari.h
	g++ -Wall -g -c Ferrari.cpp

clean:
	rm -f *.o

