#include "DeckOfCards2.h"
#include "Card.h"


DeckOfCards2::DeckOfCards2()
{
	Card* deck[20];
	//initialize array of cards object
	for (int i = 0; i < 10; i++)
	{
		deck[i] = new Card(i+1, "Red");

		deck[10 + i] = new Card(i + 1, "Black");

	}

}


DeckOfCards2::~DeckOfCards2()
{
}

