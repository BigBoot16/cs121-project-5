#include <iostream>

#include "horse.h"
#include "race.h"

Race::Race(){
	keepGoing = true;
	Horse horses[5] = {};
}

void addHorse(Horse horses, int horseIndex){
	horses[horseIndex] = Horse(horseIndex, 0);
}

void printLane(Horse horse){
	int horseNum = Horse.getNumber(horse);
	int position = Horse.getPosition(horse);
	std::string nums = "01234";
	std::string lane = "...............";
	lane[position] = nums[horseNum];
	std::cout << lane << std::endl;
}

bool checkWin(Horse horse){
	if(Horse.getPosition(horse) == 15) {
		std::cout << "Horse number " << Horse.getNumber(horse) << " is the winner!" << std::endl;
		return false;
	} else {
		return true;
	}
}

void runRace(){
	for(int i = 0; i<5; i++) {
		addHorse(horses, i);
	}

	while(keepGoing) {
		for(int i=0; i<5; i++) {
			Horse.advance(horses[i]);
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
