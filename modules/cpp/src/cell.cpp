/*****************************************************************
******************************************************************
* Class Cell
* This class is for creating objects to represent the individual
* cells inside of the sudoku game. There are 9 cells inside of each
* of the 9 'Block's. 
*
* Created by Jeff Purdy
******************************************************************
*****************************************************************/

#include "cell.h"

// Default Constructor
Cell::Cell(){
    // Initializing Data to default Values
    myBlock = sudokuPlace::Z;
    isSolved = false;
    value = 0;

    // Setting possibleVales to all possible Values 
    for (sint i = 1; i < 10; ++i) {
        possibleValues.push_back(i);
    }
};

// Constructor for predefined cells
Cell::Cell(const sint& value, const sudokuPlace::blockIds& id){
    myBlock = id;
    isSolved = true;
    this->value = value;
}

bool Cell::getIsSolved(){
    return isSolved;
}

sint Cell::getValue(){
    return value;
}

std::vector<sint> Cell::getPossibleValues(){
    return possibleValues;
}

sudokuPlace::blockIds Cell::getMyBlock(){
    return myBlock;
}

void Cell::setValue(const sint& val){
    this->value = val;
}

void Cell::setIsSolved(){
    isSolved = true;
}
void Cell::removePossibleVal(sint val){
    possibleValues.erase(std::remove(possibleValues.begin(), possibleValues.end(), val), possibleValues.end());
}
