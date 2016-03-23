#include "Card.h"
#include<string>
#include <iostream>

using namespace std;

Card::Card(int num , string col)
{
	number = num;
	colour = col;
}
 Card::Card()
 {
 }
Card::~Card()
{
}

int Card::CardNumber(){ return number; }
string Card::CardColour(){ return colour; }
//output to screen
void Card::print(){
	cout << colour << " " << number << endl;
}
