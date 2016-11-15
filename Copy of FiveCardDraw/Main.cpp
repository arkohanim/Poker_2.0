
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
#include "Deck.h"
#include "hand.h"

using namespace std;
enum Suits {
	CLUBS = 1, DIAMONDS = 2, HEARTS = 3, SPADES = 4
};

enum Values {
	ONE = 0,
	ACE = 1,
	TWO = 2,
	THREE = 3,
	FOUR = 4,
	FIVE = 5,
	SIX = 6,
	SEVEN = 7,
	EIGHT = 8,
	NINE = 9,
	TEN = 10,
	JACK = 11,
	QUEEN = 12,
	KING = 13

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

int main(){
	//Deck deck(52, "");
	Hand hand;
	//hand.countMatches();
	int max = hand.getMaxMatchesFromMap();
	cout << max <<endl;
	if(hand.has2pairs()){
		cout << "working" << endl;
	}
	//cout << hand.has2pairs() << endl;

	//cout <<"committing"<<endl;
	//cout << "committing again"<<endl;
	return EXIT_SUCCESS;
}
