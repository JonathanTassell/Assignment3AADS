#include "Reverser.h"

std::string Reverser::reverseString(std::string characters){
    char first = characters[0]; 
    
    if(characters.length() <=1)
        return characters;
    
    characters = characters.substr(1);
    characters = reverseString(characters) + first;
    return characters;
}

int Reverser::reverseNumber(int value){
    int rev = 0; 
    while(value > 0){
        rev = rev * 10 + value % 10; 
        value = value /10; 
    }
    return rev; 
}




