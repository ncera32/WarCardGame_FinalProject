//
//  main.cpp
//  WarProject
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <random>
#include <set>
#include "Card.hpp"
#include "Deck.hpp"
#include "Player.hpp"
#include "humanPlayer.hpp"
#include "computerPlayer.hpp"
#include "Game.hpp"

int main() {
    //instantiate a game and the playing of said game
    Game gameOfWar;
    gameOfWar.play();

    return 0;
}
