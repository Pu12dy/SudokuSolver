/*****************************************************************
******************************************************************
* Class Block 
* This class is for creating objects to represent the individual
* block inside of the sudoku game. There are 9 cells inside of each
* of the 9 'Block's. 
*
* Private data:
*   id [sudokuPlace::blockIds]:
*       - Holds the blocks ID value
*   isSolved [bool]:
*       - Holds true or false value if the block is solved.
*   cellValue [sint]:
*       - Holds the current values of the cells contained in this
*         block.
*
* Memeber functions:
*
* Created by Jeff Purdy
******************************************************************
*****************************************************************/

#ifndef BLOCK_H
#define BLOCK_H

#include "namespaces.h"
#include "cell.h"

class Block {
    private:
        const sudokuPlace::blockIds id;
        bool isSolved;
        std::vector<Cell> cellValues;

    public:
        // Default Constructor
        Block();
        // Initalized Constructor
        Block(const sudokuPlace::blockIds& id, const std::vector<Cell>& cells);
        
        // Getters
        sudokuPlace::blockIds getId();
        bool getIsSolved();
        std::vector<Cell> getCells();
        sint getCellValue(const sint index);
        
        // Setters
        void setCellValue(const sint& index);
        void setBlockValues(const vector<sint> cellValues);
        void setIsSolved(const bool& result); 
};

#endif
