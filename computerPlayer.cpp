//
//  computerPlayer.cpp
//  WarProject
//

#include "computerPlayer.hpp"

    // Function to play a card, it overrides the function from the base class Player
    Card computerPlayer::playCard() {
        // ensure it doesn't play the same card consecutively after winning a round
        if (cards.size() > 1) {
            Card new_Card;
            do {
                new_Card = Player::playCard();
            } while (new_Card == lastCard);
            lastCard = new_Card;
            std::cout << "Computer's card: " << new_Card.rank << " of " << new_Card.suit << std::endl;
            return new_Card;
        } else {
            // If the computer has only one card, play it
            lastCard = Player::playCard();
            std::cout << "Computer's card: " << lastCard.rank << " of " << lastCard.suit << std::endl;
            return lastCard;
        }
    }
