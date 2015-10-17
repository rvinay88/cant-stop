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
    cout << "Testing Dice \n---------\n";
    Dice testDice(6);
    const int* value = testDice.roll();
    cout << value;
    cout << "\n Printing dice \n---------\n";
    testDice.print(cout);
}

int main() {
    banner();
    puts( "C++ programs" );
    unitDice();
    bye();
    return 0;
}
