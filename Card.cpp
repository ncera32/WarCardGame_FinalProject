//
//  Card.cpp
//  WarProject
//

#include "Card.hpp"

    //default constructor
    Card::Card() : rank(0), suit(' '){}
    // Constructor
    Card::Card(int r, char s) : rank(r), suit(s) {}

    // Overloaded comparison operators for sorting
    bool Card::operator<(const Card& other) const {
        return rank < other.rank;
    }

    bool Card::operator>(const Card& other) const {
        return rank > other.rank;
    }
    
    // Equality operator
    bool Card::operator==(const Card& other) const {
        return rank == other.rank && suit == other.suit;
    }
