/*
 * Player.cpp
 *
 *  Created on: 7 Jun 2012
 *      Author: mikey
 */

#include "Player.h"

Player::Player() {

	/*initialize random number seed*/
	srand ( time(NULL) );
	//std::cout << "rand() test " << rand() << "\n";

	surname = "Test";
	dob[0] = 16;
	dob[1] = 1;
	dob[2] = 1989;

	for (int i = 0; i < Constants::NUM_STATS; i++)
			stats[i] = rand() % 100 + 1;

	std::cout << "Player created\n";
}

int Player::getStat(int stat) {
	if (stat < 0 || stat >= Constants::NUM_STATS)
	{
		std::cerr << "Trying to access non-existent player statistic\n";
		return 0;
	}

	return stats[stat];
}

Player::~Player() {
	// TODO Auto-generated destructor stub
}
