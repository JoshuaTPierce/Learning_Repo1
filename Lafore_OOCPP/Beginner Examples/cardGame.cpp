//cardGame.cpp
//Demonstrates nested structs with decision structures.
//Also demonstrates constants outside of a struct.

#include <iostream>
using namespace std;

const int clubs = 0;
const int diamonds = 1;
const int hearts = 2;
const int spades = 3;
const int jack = 11;
const int queen = 12;
const int king = 13;
const int ace = 14;

////////////////////////////////////
struct card {
    int number; //0-3 as seen in the constants
    int suit; //11-14 as seen in the constants
}
////////////////////////////////////
int main(){
    card temp, chosen, prize; //create cards based on struct
    int position;

    card card1 = { 7, clubs};
    cout << "Card 1 is the 7 of clubs.\n";

    card card2 = {jack, hearts};
    cout << "Card 2 is the jack of hearts.\n";
    
    card card3 = { ace, spades }; 
    cout << "Card 3 is the ace of spades\n";

    prize = card3; //copy 

    cout << "I’m swapping card 1 and card 3\n";
    temp = card3; card3 = card1; card1 = temp;
    
    cout << "I’m swapping card 2 and card 3\n";
    temp = card3; card3 = card2; card2 = temp;
    
    cout << "I’m swapping card 1 and card 2\n";
    temp = card2; card2 = card1; card1 = temp;

    cout << "Now, where (1, 2, or 3) is the ace of spades?";
    cin >> position;

    switch (position) {
        case 1: chosen = card1; break;
        case 2: chosen = card2; break;
        case 3: chosen = card3; break;
        }
    if (chosen.number == prize.number && chosen.suit == prize.suit){
        cout << "That's right! You win!\n";
    }
    else{
        cout << "Sorry, better luck next time.\n"
    }
    return 0;
}
