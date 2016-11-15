/*
 * Draw.h
 *
 *  Created on: Nov 14, 2016
 *      Author: arkohanim
 */
/**
 * Specific to Five card draw, rules go here
 * hand rank determination goes here
 * User determining to throw away cards and get new ones goes here
 * Look for other things
 * Determine Number of Players in Game class
 *
 *
 */


#ifndef DRAW_H_
#define DRAW_H_

#include <algorithm>
#include <cctype>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <iterator>
#include <random>
#include <string>
#include <utility>
#include <vector>
#include "card.h"
#include "deck.h"
#include "hand.h"
#include "player.h"
using namespace std;
class Draw {
private:
	vector<Player> players;
	//string name;
	//bool won;

	vector<Card> PlayingDeck;
	void determinHandRank(Hand hand);
	void discard(int nCard);
	void setUp();
public:
	Draw(vector<Player> players);

	enum Suits {
		CLUBS, DIAMONDS, HEARTS, SPADES
	};

	enum Values {
		TWO,
		THREE,
		FOUR,
		FIVE,
		SIX,
		SEVEN,
		EIGHT,
		NINE,
		TEN,
		JACK,
		QUEEN,
		KING,
		ACE

	};

	enum HandRank{
		NoPairs,
		OnePair,
		TwoPairs,
		ThreeOFAKind,
		Straight,
		Flush,
		FullHouse,
		FourOFAKind,
		StraightFlush,
		RoyalFLush

	};

};

#endif



