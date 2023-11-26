//
//  humanPlayer.cpp
//  WarProject
//

#include "humanPlayer.hpp"


    // Function to play a card, it overrides the function from the base class Player
Card humanPlayer::playCard() {
    //display the players hand
        std::cout << "Your cards:";
            for (const auto& card : cards) {
                std::cout << " " << card.rank << " of " << card.suit << ", \n";
            }
            std::cout << std::endl;

            //create variable to store user's choice of card to play
            int choice;
            std::set<int> proper_Ranks;

               // Populate proper Ranks with the ranks of the player's cards
               for (const auto &card : cards) {
                   proper_Ranks.insert(card.rank);
               }

               do {
                   std::cout << "Choose a card to play (enter the rank): ";
                   std::cin >> choice;
                   //Check for invalid user input for card
                   if (proper_Ranks.find(choice) == proper_Ranks.end()) {
                       std::cout << "Invalid choice. Please enter a rank that is in your hand." << std::endl;}
                   
               } while (proper_Ranks.find(choice) == proper_Ranks.end());

            //lambda function to check if rank of card equals players choice
            //chosen card stored in it
            auto it = std::find_if(cards.begin(), cards.end(), [choice](const Card& card) { return card.rank == choice; });
            Card chosenCard = *it;
            //chosen card (it) erased from vector since it was played out of hand
            cards.erase(it);
            //display the card the user played
            std::cout << "You played: " << chosenCard.rank << " of " << chosenCard.suit << std::endl;

            return chosenCard;
    }

