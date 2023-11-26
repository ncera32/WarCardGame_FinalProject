//
//  Player.hpp
//  WarProject
//

#ifndef Player_hpp
#define Player_hpp

#include <stdio.h>
#include <vector>
#include "Card.hpp"

class Player {
protected:
    std::vector<Card> cards;

public:
    // Constructor
    Player();

    // Function to deal a card to the player
    void dealCard(Card card);

    // Function to check if the player has cards
    bool hasCards() const;
    
    //Function that gets top card
    Card getTopCard() const;

    // Function to play card
    virtual Card playCard();
    
    //Function to add cards to a player's hand
    void addCards(const std::vector<Card>& newCards);

    // Function that checks if the player's deck is empty
    bool isEmpty() const;
};


#endif /* Player_hpp */
