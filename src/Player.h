/*
 * Player.h
 *
 *  Created on: 7 Jun 2012
 *      Author: mikey
 */

#ifndef PLAYER_H_

#include <string>
#include "Constants.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>

#define PLAYER_H_

class Player {
public:
	Player();
	virtual ~Player();
	void setStat(int stat, int value);
	bool incrementStat(int stat);
	bool decrementStat(int stat);
	int getStat(int stat);

private:
	std::string surname;
	int stats[5];
	int dob[3]; // [16/01/1989]
};

#endif /* PLAYER_H_ */
