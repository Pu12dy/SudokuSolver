/*****************************************************************
******************************************************************
* Class Cell
* This class is for creating objects to represent the individual
* cells inside of the sudoku game. There are 9 cells inside of each
* of the 9 'Block's. 
*
* Private data:
*       myBlock [sudokuPlace::blockIds]:
*           - Holds the value of the ID of the block the cell
*             resides in.
*       isSolved [bool]:
*           - Holds true or false value if the cell is solved.
*       value [sint]:
*           - Holds the current value of the cell. 0 means empty.
*       possibleValues [vector<sint>]:
*           - Holds all the current possible values of the cell.
*
* Memeber functions:
*       Cell() :
*           myBlock = Z
*           isSolved = false
*           value = 0
*           possibleValues = 0-9
*
*       Cell(sint value, sudokuPlace::blockIds id) :
*           myBlock = id
*           isSolved = true
*           value = value
*           possibleValues = empty vector
*
*       getIsSolved() :
*           returns isSolved
*       
*       getValue() :
*           returns value
*       
*       getPossibleValues() :
*           returns possibleValues
*
*       getMyBlock() :
*           returns myBlock
*
* Created by Jeff Purdy
******************************************************************
*****************************************************************/

#ifndef CELL_H
#define CELL_H

#include "namespaces.h"

class Cell {
    private:
        sudokuPlace::blockIds myBlock;
        bool isSolved;
        sint value;
        std::vector<sint> possibleValues;

    public:
        // Default Constructor
        Cell();
        // Initalized Constructor
        Cell(const sint& value, const sudokuPlace::blockIds& id);

        // Getters
        bool getIsSolved();
        sint getValue();
        std::vector<sint> getPossibleValues();
        sudokuPlace::blockIds getMyBlock();

        // Setters
        void setValue(const sint& val);
        void setIsSolved();
        void removePossibleVal(sint val);
};

#endif
