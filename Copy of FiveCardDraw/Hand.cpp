/*
 * Hand.cpp
 * put the Hand Rank enum in the Hand header
 *
 *  Created on: Nov 9, 2016
 *      Author: arkohanim
 */
#include <vector>

#include <algorithm>
#include <cctype>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <iterator>
#include <random>
#include <string>
#include <utility>
#include "hand.h"
using namespace std;
// testing

Hand::Hand(){

	this->HandRank = 0;
	
	//The follow is just for testing and will be replaced by dealing from the deck
	for (int i=0; i<2;i++){
		hand.push_back(Card(make_pair(8,1)));
	}
	for (int i=0; i<2;i++){
		hand.push_back(Card(make_pair(12,2)));
	}

}

Hand::Hand(int HandRank, vector<Card> hand) {

	this->HandRank = HandRank;
	this->hand = hand;
	


}

//could possibly done with a vector or other data type
//keys are card values, mapped with how many times they occur in the hand
map<int,int> Hand::countMatches(){
	//vector <int> count;
	map <int,int> matches;
	for(size_t i = 0; i < hand.size(); i++){
		//count[i]++;
		int cardRank = hand[i].Value;
		matches[cardRank]++;

	}
	//cout << matches.size() << endl;
//	for(size_t j = 0; j < matches.size(); j++){
//		//cout << "\n"<<matches[j] << " \n";
//	}
	return matches;
}

vector <int> Hand::countMatchesVector(){
	vector <int> count(13,0);
	for(unsigned int i = 0; i < hand.size(); i++){
		count[hand[i].Value]++;
	}
	return count;
}

int Hand::getMaxMatches(){
	int max = 0;
	for(size_t i = 0; i < matches.size(); i++){
		int n = matches[i];
		if ( n > max)
			max = n;
	}
	return max;
}

int Hand::getMaxMatchesFromMap(){
	cout << "INSIDE getMaxMatches" << endl;
	int max = 0;
	matchHolder = countMatches();
	map<int,int>::iterator it;
	for (it = matchHolder.begin(); it != matchHolder.end() ; it++){
		int occurences = it->second ;
		if (max < occurences)
			max = occurences;
	}
//	for(size_t i = 0; i < matches.size(); i++){
//		int n = matches[i];
//		if ( n > max)
//			max = n;
//	}
	return max;
}

bool Hand::has1pair(){
	if (getMaxMatchesFromMap() >= 2 )
		return true;
	return false;
}

/*
there is a run time error that needs to be fixed, but the function will do the following:
	if there is a pair in the hand:
		remove the pair
		if there is another pair remaining:
			return true
*/
bool Hand::has2pairs(){
//	if(has1pair()){
//		vector <int> matches = countMatchesVector();
//
//	}
	int numMatches = 0;
	for(size_t i = 0; i < matches.size(); i++){
		if(matches[i] == 2){
			numMatches++;
		}

	}


	return numMatches == 2;
}
/**
 * for full house remove a three of a kind then see if remainder is a pair
 */

