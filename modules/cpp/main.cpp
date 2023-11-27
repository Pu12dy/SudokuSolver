/**************************************************************************
 * main.cpp for SudokuSolver
 * Created by Jeff Purdy
 * **********************************************************************/
#include "include/cell.h"
#include "include/namespaces.h"

int main() {
    // Cell TESTING
    Cell defaultCell;
    Cell initCell(2, sudokuPlace::A);

    std::cout << "defaultCell isSolved: " << defaultCell.getIsSolved() << std::endl;
    std::cout << "defaultCell Block: " << defaultCell.getMyBlock() << std::endl;
    std::cout << "defaultCell Value: " << defaultCell.getMyBlock() << std::endl;
    
    std::vector<sint> dposs = defaultCell.getPossibleValues();
    
    std::cout << "defaultCell Possible Values:\n";
    for (sint pv : dposs){
        std::cout << pv << " ";
    }
    std::cout << std::endl;

    std::cout << "initCell isSolved: " << initCell.getIsSolved() << std::endl;
    std::cout << "initCell Block: " << initCell.getMyBlock() << std::endl;
    std::cout << "initCell Value: " << initCell.getMyBlock() << std::endl;
    
    std::vector<sint> iposs = initCell.getPossibleValues();
    
    std::cout << "initCell Possible Values:\n";
    if (iposs.size() < 0) {
        for (sint pv :iposs){
            std::cout << pv << " ";
        }
    }
    else 
        std::cout << "Empty Vector\n";
   
    defaultCell.removePossibleVal(3);

    std::cout << "defaultCell Possible Values after removing 3:\n";
    for (sint pv : dposs){
        std::cout << pv << " ";
    }
    std::cout << std::endl;

    return 0;
}
