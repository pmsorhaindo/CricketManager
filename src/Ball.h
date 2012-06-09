/*
 * Ball.h
 *
 *  Created on: 7 Jun 2012
 *      Author: mikey
 */

#ifndef BALL_H_

#include "Constants.h"

#define BALL_H_

class Ball {
public:
	Ball();
	virtual ~Ball();

private:

	Constants::Score ballScore;
	int playerID;
	int bowlerID;



};

#endif /* BALL_H_ */
