/*
 * Deck.cpp
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
#include <random>
#include <string>
#include <utility>
#include <vector>
#include "Deck.h"
//#include "Card.h"
using namespace std;

Deck::Deck(int NCards, string deckType) {
	this->NCards = NCards;
	this->deckType = deckType;
	buildDeck();
	printDeck();
}

void Deck::shuffleDeck(vector<Card> deck) {
	this->deck = deck;
	srand(time(0));
	auto engine = std::default_random_engine(time(0));
	std::shuffle(std::begin(deck), std::end(deck), engine); // shuffle the deck
}

void Deck::buildDeck() {
	deck.clear();
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 13; j++) {
			deck.push_back(Card(make_pair(i,j)));
		}
	}


}

void Deck::printDeck(){
	for(vector<Card>::iterator it=deck.begin(); it!=deck.end(); it++){
		cout << it->Suit << " " << it->Value << endl;
	}
}

