//
//  main.cpp
//  Ex15.6
//
//  Created by Alain Perez on 5/15/21.
//
/* 15.6 Write a complete C++ programn with the two alternate function specification specified below, each of which simple triples the variable count defined in main. Then compare and constrast the two appraches. These two functionalities are
A) function tripleByValue that passes a copy of count by value, triples the copy then returns the new value
b) function tripleByReference that passes count by reference via reference parameter, and triples the original value of count through its alias. */


#include <iostream>

using namespace std;

//Function Declarations
int tripleByValue(int);
void tripleByReference(int &);



int main(int argc, const char * argv[]) {
    
    int testByValue = 2;
    int valueByReference = 2;
    
    //Prints the values before modifications are dont to the variables
    cout << "Printing values before function calls \n" <<
    "Test by value " << testByValue << "\n"
    "Test by reference " << valueByReference << endl;
    
    //new value passed on to store function call from TribleByValue
    int passByValueResult = tripleByValue(testByValue);
    
    tripleByReference(valueByReference);
    
    if( valueByReference == passByValueResult){
        cout << "The two values are equal: " << valueByReference << " == " << passByValueResult <<  endl;
    }else{
        cout << "Ops, something went wront" << endl;
        cout << valueByReference << endl;
        cout << passByValueResult << endl;
        
    }

    
    return 0;
}

int tripleByValue(int value){ // Triples value by by value
    return value*3;
}

void tripleByReference(int &value){ //Triples value by reference
    value = (value*3);
}
