/*
 * Player.h
 *
 *  Created on: Nov 10, 2016
 *      Author: arkohanim
 */

#ifndef PLAYER_H_
#define PLAYER_H_

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
using namespace std;
class Player {
private:
	Hand PlayerHand;
	string name;
	bool won;// test

	vector<Card> PlayingDeck;
	void draw(int nCard);
	void discard(int nCard);
public:
	Player(string PlayerName);

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

};

#endif
