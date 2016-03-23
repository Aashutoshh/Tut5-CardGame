#pragma once
#include "Card.h"
class DeckOfCards2
{
private:
	Card *deck= NULL;
	int noOfCardsLeft;
public:
	DeckOfCards2();
	~DeckOfCards2();
	DeckOfCards2 reset();
	void shuffle();
	Card draw();
	void printDeck();
};

