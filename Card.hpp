//
//  Card.hpp
//  WarProject
//

#ifndef Card_hpp
#define Card_hpp

#include <stdio.h>

class Card {
public:
    int rank;
    char suit; 
    
    //default constructor
    Card();
    
    // Constructor
    Card(int r, char s);

    // Overloaded comparison operators for sorting
    bool operator<(const Card& other) const;
    bool operator>(const Card& other) const;
    
    // Equality operator
    bool operator==(const Card& other) const;
};

#endif /* Card_hpp */
