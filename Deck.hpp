//
//  Deck.hpp
//  WarProject
//

#ifndef Deck_hpp
#define Deck_hpp

#include <stdio.h>
#include <vector>
#include <chrono>
#include <algorithm>
#include <random>
#include "Card.hpp"

class Deck {
private:
    std::vector<Card> cards;

public:
    // Constructor to initialize the deck with 52 cards
    Deck();

    // Function to deal a card from the deck
    Card dealCard();

    // Function to check if the deck is empty
    bool isEmpty() const;
};

#endif /* Deck_hpp */
