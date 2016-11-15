/*
 * Card.cpp
 *
 *  Created on: Nov 9, 2016
 *      Author: arkohanim
 */
//#include <algorithm>
#include <cctype>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <iterator>
//#include <random>
#include <string>
#include <utility>
#include <vector>
#include "Card.h"

using namespace std;

Card::Card(pair<int, int> singleCard) {
	Value = singleCard.first;
	Suit = singleCard.second;


}

