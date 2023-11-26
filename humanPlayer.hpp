//
//  humanPlayer.hpp
//  WarProject
//

#ifndef humanPlayer_hpp
#define humanPlayer_hpp

#include <stdio.h>
#include "Player.hpp"
#include <iostream>
#include <set>

class humanPlayer : public Player {
public:
    // Function to play a card, it overrides the function from the base class Player
    Card playCard() override; 
};

#endif /* humanPlayer_hpp */
