# include <iostream>
# include <stdlib.h>
# include <time.h>

using namespace std;

	int playercard1, playercard2, playercard3, playercard4;
	int dealercard1, dealercard2, dealercard3;
	int cardtotal;
	int dealercardtotal;
	string hitstick;
	
int main() {
	
	void dealcards();
	void youlose();
	void youwin();
	
	
	
	dealcards();
	cout << "Card 1:" << playercard1 << endl;
	cout << "Card 2:" << playercard2 << endl;
	cout << "Dealer card 1:" << dealercard1 << endl;
		cardtotal = playercard1 + playercard2;
	cout << "Your card total is:" << cardtotal << endl;
	cin.get();
		if (cardtotal > 21) {
							youlose();
		}
		if (cardtotal == 21) {
							youwin();
		}
	cout << "Do you want to 'Hit' or 'Stick'" << endl;
	cin >> hitstick;
		if (hitstick == "Hit") {
								cout <<"Card 3:" << playercard3 << endl;
		}
		if (hitstick == "Stick") {
								cout << "Dealer card 2" << dealercard2 << endl;
		}
	
	cout << "Card 1:" << playercard1 << endl;
	cout << "Card 2:" << playercard2 << endl;
	cout << "Card 3:" << playercard3 << endl;
		cardtotal = cardtotal + playercard3;
	cout << "Your card total is:" << cardtotal << endl;
	cin.get();
		if (cardtotal > 21) {
							youlose();
		}
		if (cardtotal == 21) {
							youwin();
		}
	cout << "Do you want to 'Hit' or 'Stick'" << endl;
	cin >> hitstick;
		if (hitstick == "Hit") {
								cout <<"Card 4:"  << playercard4 << endl;
		}
		if (hitstick == "Stick") {
								cout << "Dealer card 2" << dealercard2 << endl;
		}
	cout << "Card 1:" << playercard1 << endl;
	cout << "Card 2:" << playercard2 << endl;
	cout << "Card 3:" << playercard3 << endl;
	cout << "Card 4:" << playercard4 << endl;
		cardtotal = cardtotal + playercard4;
	cout << "Your card total is:"  << cardtotal << endl;
	cin.get();
		if (cardtotal > 21) {
							youlose();
		}
		if (cardtotal == 21) {
							youwin();
		}
	cout << "Dealer card 1:" << dealercard1 << endl;
	cout << "Dealer card 2:" << dealercard2 << endl;
		dealercardtotal = dealercard1 + dealercard2;
	cout << "Dealer card total:" << dealercardtotal << endl;
		
	
	
		if (dealercardtotal > cardtotal) {
											cout << "Dealer wins" << endl;
											
		}
		if (dealercardtotal < cardtotal) {
											cout << "Player wins" << endl;
		}
	
									
		
			
			
									
			
							
	
	
	
	return 0;
}


void dealcards() {

	srand(time(NULL));
	playercard1 = rand() % 10 + 1;
	playercard2 = rand() % 10 + 1;
	playercard3 = rand() % 10 + 1;
	playercard4 = rand() % 10 + 1;
	dealercard1 = rand() % 10 + 1;
	dealercard2 = rand() % 10 + 1;
}

void youlose() {
	cout << "Sorry you have bust!" << endl;
	return;
}

void youwin() {
	cout << "Congratulations you have blackjack!" << endl;
	return;
}



