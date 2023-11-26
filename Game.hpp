//
//  Game.hpp
//  WarProject
//

#ifndef Game_hpp
#define Game_hpp

#include <stdio.h>
#include <vector>
#include "Deck.hpp"
#include "humanPlayer.hpp"
#include "computerPlayer.hpp"

class Game {
private:
    Deck deck;
    humanPlayer user; 
    computerPlayer computer;
    Card userCard;
    Card computerCard;

public:
    // Function to play the card game
    void play();

private:
    // Function to handle a War scenario (round resulting in a tie)
    void war();
};

#endif /* Game_hpp */
