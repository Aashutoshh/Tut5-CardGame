#include"DeckOfCards2.h"
#include <iostream>
using namespace std;


	int main(){
		DeckOfCards2 deck =  DeckOfCards2();
		deck.printDeck();

		cout << "Shuuffling cards" << endl;
		deck.shuffle();
			deck.printDeck();

			cout << "Drawing a card" << endl;
			deck.draw().print();

			cout << "After draw" << endl;
			deck.printDeck();

			cout << "Peek " << endl;
			deck.peek();



	}
