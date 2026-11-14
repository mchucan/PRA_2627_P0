all: bin/brazo

bin/brazo: main.o RoboticArm.o
	mkdir -p bin
	g++ -o bin/brazo main.o RoboticArm.o

main.o: main.cpp RoboticArm.h
	g++ -c main.cpp

RoboticArm.o: RoboticArm.cpp RoboticArm.h
	g++ -c RoboticArm.cpp

test: bin/brazo
	./bin/brazo 

clean: 
	rm -rf *.o *.gch bin

.PHONY: all test clean
