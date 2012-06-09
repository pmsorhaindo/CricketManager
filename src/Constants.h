/*
 * Constants.h
 *
 *  Created on: 7 Jun 2012
 *      Author: mikey
 */

#ifndef CONSTANTS_H_
#define CONSTANTS_H_

class Constants {
public:

	enum EndOfInnings {
		AllOut,
		ScoreReached,
		OverLimit,
		CaptainDeclared
	};

	 enum Score {
		  NoScore,
	      Runs,
	      NoBall,
	      Bye,
	      LegBye,
	      Wide
	   };

	 enum Out {
		 Bowled,
		 Caught,
		 LBW,
		 RunOut,
		 Stumped,
		 HitWicket,
		 DoubleHit,
		 ObstructingTheField,
		 HandledTheBall,
		 TimedOut
	 };

	enum Stats {
		CATCH_STAT,
		THROW_STAT,
		RUN_SPEED_STAT,
		BOWL_SPEED_STAT,
		BAT_STAT,
		SPIN_STAT,
		AWARENESS_STAT,
		ENDURANCE_STAT,
		DEXTERITY_STAT,
		STRENGTH_STAT,
		FITNESS_STAT,
		NUM_STATS
	};
	/*static const int CATCH_STAT = 0;
	static const int THROW_STAT = 1;
	static const int RUN_SPEED_STAT = 2;
	static const int BOWL_SPEED_STAT = 3;
	static const int BAT_STAT = 4;
	static const int SPIN_STAT = 5;
	static const int AWARENESS_STAT = 6;
	static const int ENDURANCE_STAT = 7;
	static const int DEXTERITY_STAT = 8;
	static const int STRENGTH_STAT = 9;
	static const int FITNESS_STAT = 10;
	static const int NUM_STATS = 11;*/

	Constants();
	virtual ~Constants();
};

#endif /* CONSTANTS_H_ */
