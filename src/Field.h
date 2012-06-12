/*
 * Field.h
 *
 *  Created on: 12 Jun 2012
 *      Author: mikey
 */

#ifndef FIELD_H_

#include "Player.h"

#define FIELD_H_

class Field {

private:
	Player * fielders[11];

public:
	Field();
	virtual ~Field();
};

#endif /* FIELD_H_ */
