game: main.o horse.o race.o
	g++ -g main.o horse.o race.o -o game

main.o: main.cpp horse.h
	g++ -g -c main.cpp

horse.o: horse.h horse.cpp
	g++ -g -c horse.cpp

race.o: race.h race.cpp
	g++ -g -c race.cpp

clean:
	rm *.o
	rm game

run: game
	./game
