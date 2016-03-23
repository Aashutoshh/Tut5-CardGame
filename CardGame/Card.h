#pragma once
#include <string>
using namespace std;
class Card
{

private: 
	int number;
	string colour;
public:
	Card();
	Card(int num , string colour);
	int CardNumber();
	string CardColour();
	void print();
	~Card();
};

