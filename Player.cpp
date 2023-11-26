//
//  Player.cpp
//  WarProject
//

#include "Player.hpp"

    // Constructor
    Player::Player() {}

    // Function to deal a card to the player
    void Player::dealCard(Card card) {
        cards.push_back(card);
    }

    // Function to check if the player has cards
    bool Player::hasCards() const {
        return !cards.empty();
    }
    
    //Function that returns the top card
    Card Player::getTopCard() const
    {
        return cards.back();
    }

    // Function to play a card
    // virtual only needed in definition (header file)
    Card Player::playCard() {
        Card topCard = cards.back();
        cards.pop_back();
        return topCard;
    }
    
    //Function to add cards to a player's hand
    void Player::addCards(const std::vector<Card>& newCards) {
            cards.insert(cards.end(), newCards.begin(), newCards.end());
        }

    // Function to check if the player's deck is empty
    bool Player::isEmpty() const {
        return cards.empty();
    }

