#include <iostream>

#include "horse.h"
#include "race.h"

Race::Race(){
	Horse horses[] = {};
}
/*
void addHorse(Horse horses, int horseIndex){
	horses[horseIndex] = Horse(horseIndex, 0);
}
*/
void Race::printLane(Horse horse){
	int horseNum = horse.getNumber();
	int position = horse.getPosition();
	std::string nums = "01234";
	std::string lane = "...............";
	lane[position] = nums[horseNum];
	std::cout << lane << std::endl;
}

bool Race::checkWin(Horse horse){
	if(horse.getPosition() == 15) {
		std::cout << "Horse number " << horse.getNumber() << " is the winner!" << std::endl;
		return false;
	} else {
		return true;
	}
}

void Race::runRace(){
	/*
	for(int i = 0; i<5; i++) {
		addHorse(horses, i);
	}
	*/
	
	Horse horses[5] = {Horse(0, 0), Horse(1, 0), Horse(2, 0), Horse(3, 0), Horse(4, 0)};

	bool keepGoing = true;

	while(keepGoing) {
		for(int i=0; i<5; i++) {
			horses[i].advance();
			printLane(horses[i]);
			if(keepGoing) {
				keepGoing = checkWin(horses[i]);
			}
		}
		std::cout << "Press ENTER for next round:";
		std::string temp;
		std::cin.ignore();
	}
}
