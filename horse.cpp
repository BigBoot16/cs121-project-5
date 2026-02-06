#include <iostream>
#include <random>

#include "horse.h"

Horse::Horse(){
	Horse::horseNum = 0;
	Horse::position = 0;
}

Horse::Horse(int number, int position){
	Horse::horseNum = number;
	Horse::position = position;
}

void Horse::setNumber(int number){
	Horse::horseNum = number;
}

void Horse::setPosition(int position){
	Horse::position = position;
}

int Horse::getNumber(){
	return horseNum;
}

int Horse::getPosition(){
	return position;
}

void Horse::advance(){
	std::random_device rd;
	std::uniform_int_distribution<int> dist(0,1);

	int coin = dist(rd);
	if(coin == 1) {
		Horse::position += 1;
	}
}
