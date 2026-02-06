#ifndef RACE_H_EXISTS
#define RACE_H_EXISTS

#include <string>
#include "horse.h"

class Race{
	public:
		bool keepGoing;
		Horse horses[];
		Race();
		void runRace();
		void addHorse(Horse horse, int horseIndex);
		void printLane(Horse horse);
		bool checkWin(Horse horse);
};
#endif
