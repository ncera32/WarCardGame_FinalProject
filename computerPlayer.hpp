//
//  computerPlayer.hpp
//  WarProject
//

#ifndef computerPlayer_hpp
#define computerPlayer_hpp

#include <stdio.h>
#include "Player.hpp"
#include <iostream>

class computerPlayer : public Player {
private:
    Card lastCard; //stores and keeps track of card played in previous round
public:
    // Function to play a card, it overrides the function from base class Player
    Card playCard() override;
};


#endif /* computerPlayer_hpp */
