//
//  Deck.cpp
//  WarProject
//

#include "Deck.hpp"

    // Constructor to initialize the deck with 52 cards
    Deck::Deck() {
        const std::vector<char> suits = {'H', 'D', 'C', 'S'};
        
        for (int i = 2; i <= 14; ++i) {
            for (const char suit : suits) {
                cards.push_back(Card(i, suit));
            }
        }
        // Shuffle the deck
        auto seed = std::chrono::duration_cast<std::chrono::seconds>(
                    std::chrono::system_clock::now().time_since_epoch()
                ).count();
        
        std::shuffle(cards.begin(), cards.end(), std::default_random_engine(static_cast<unsigned>(seed)));
    }

    // Function to deal a card from the deck
    Card Deck::dealCard() {
        Card topCard = cards.back();
        cards.pop_back();
        return topCard;
    }

    // Function to check if the deck is empty
    bool Deck::isEmpty() const {
        return cards.empty();
    }
