/*
 * Ball.h
 *
 *  Created on: 7 Jun 2012
 *      Author: mikey
 */

#ifndef BALL_H_

#include "Constants.h"
#include "Player.h"
#include "Field.h"

#define BALL_H_

class Ball {

private:

	Constants::Score ballScore;
	int runs;
	Player * bowler;
	Player * batter;
	Field * fieldState;

public:
	Ball(Player * bow, Player * bat, Field * fld);
	virtual ~Ball();
	int getRuns();

};

#endif /* BALL_H_ */
