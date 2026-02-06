#ifndef RACE_H_EXISTS
#define RACE_H_EXISTS

#include <string>
#include "horse.h"

class Race{
	private:
		Horse horses[5];
	public:
		Race();
		void runRace();
		void addHorse(Horse horse, int horseIndex);
		void printLane(Horse horse);
		bool checkWin(Horse horse);
};
#endif
