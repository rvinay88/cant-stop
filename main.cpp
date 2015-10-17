//
//  main.cpp
//  cant-stop
//
//  Created by Vinay  Raghu on 10/17/15.
//
//

#include "tools.hpp"
#include "Dice.hpp"

void unitDice() {
    // Create dice with 6 faces
    cout << "Testing Dice: \n";
    Dice testDice(6);
    testDice.roll();
    cout << "\n\nPrinting dice: \n";
    testDice.print(cout);
    cout << "\n---------\n";
    
    // Roll dice again to test values
    testDice.roll();
    testDice.print(cout);

    // Create a dice with 2 faces
    Dice testDice2(2);
    testDice2.roll();
    testDice2.print(cout);
}

int main() {
    banner();
    puts( "C++ programs" );
    unitDice();
    bye();
    return 0;
}
