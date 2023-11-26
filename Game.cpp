//
//  Game.cpp
//  WarProject
//

#include "Game.hpp"
#include <iostream>


    // Function to play the card game
    void Game::play() {
        // Deal the cards to players
        while (!deck.isEmpty()) {
            user.dealCard(deck.dealCard());
            computer.dealCard(deck.dealCard());
        }

        while (user.hasCards() && computer.hasCards()) {
            userCard = user.playCard();
            computerCard = computer.playCard();

            std::cout << std::endl;

            if (userCard > computerCard) {
                std::cout << "Player wins this round!" << std::endl;
                user.addCards({userCard, computerCard});
            } else if (userCard < computerCard) {
                std::cout << "Computer wins this round!" << std::endl;
                computer.addCards({userCard, computerCard});
            } else {
                std::cout << "It's a War!" << std::endl;
                war();
            }
        }

        if (user.isEmpty()) {
            std::cout << "Computer wins the game!" << std::endl;
        } else {
            std::cout << "User wins the game!" << std::endl;
        }
    }

    // Function to handle a War scenario (round that results in a tie)
    void Game::war() {
        std::vector<Card> warPot;
        
        //Add initial cards that tied into the war pile to be won by winner
        warPot.push_back(userCard);
        warPot.push_back(computerCard);

        // Each player places one card face down
        warPot.push_back(user.getTopCard());
        warPot.push_back(computer.getTopCard());
        
        // Each player places two cards face up
        warPot.push_back(user.playCard());
        warPot.push_back(user.playCard());
        warPot.push_back(computer.playCard());
        warPot.push_back(computer.playCard());

        // Each player places one card face up
        Card userWarCard = user.getTopCard();
        Card computerWarCard = computer.getTopCard();

        std::cout << "Player's face-up war card: " << userWarCard.rank << " of " << userWarCard.suit << "\tComputer's face-up war card: " << computerWarCard.rank << " of " << computerWarCard.suit << std::endl << std::flush;

        warPot.insert(warPot.end(), {userWarCard, computerWarCard});

        // Compare the face-up war cards
        if (userWarCard > computerWarCard) {
            std::cout << "User wins the War!" << std::endl;
            user.addCards(warPot);
        } else if (userWarCard < computerWarCard) {
            std::cout << "Computer wins the War!" << std::endl;
            computer.addCards(warPot);
        } else {
            // If there's another tie, recurse (another War)
            std::cout << "Another War!" << std::endl;
            war();
        }
    }
