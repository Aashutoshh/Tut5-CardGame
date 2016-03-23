#include "DeckOfCards2.h"
#include "Card.h"



DeckOfCards2::DeckOfCards2()
{
	noOfCardsLeft = 20;
	deck = new Card[20];

	//initialize array of cards object	
	for (int i = 0; i < 10; i++)
	{
		deck[i] = Card(i+1, "Red");

		deck[10 + i] = Card(i + 1, "Black");

	}

}

 DeckOfCards2 DeckOfCards2::reset(){

	return DeckOfCards2();  
}

 void DeckOfCards2::shuffle(){
	 int rnd1, rnd2;
	 Card temp;
	 if (noOfCardsLeft>=2)
	 {
		 for (int i = 0; i < 50; i++) {
			 rnd1 = rand() % noOfCardsLeft;
			 rnd2 = rand() % noOfCardsLeft;
			 temp = deck[rnd1];
			 deck[rnd1] = deck[rnd2];
			 deck[rnd2] = temp;
		 }
	 }
 }

DeckOfCards2::~DeckOfCards2()
{
}

