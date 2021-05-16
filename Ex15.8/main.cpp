//
//  main.cpp
//  Ex15.8
//
//  Created by Alain Perez on 5/15/21.
//
/*Ex15.8 Write a programn that uses a function template called min to determine the smaller of two arguments. Test the program using integers, characters and floating-pont number arguments.*/
#include <iostream>
#include "min.h"

using namespace std;

int main(int argc, const char * argv[]) {
    
    //declearing int
    int int1,int2;
    
    //declaring chars
    char char1,char2;
    
    //declearing floats
    float float1,float2;
    
    //Promting and calling Minimum function with integers
    cout << "Calling min using ints " << endl;
    cin >> int1 >> int2 ;
    cout << "The min value is " << mininum(int1, int2) << endl;
    
    //Promting and calling Minimum function with chars
    cout << "Calling min using chars " << endl;
    cin >> char1 >> char2;
    cout << "The min value is " << mininum(char1, char2) << endl;
    
    //Promting and calling Minimum function with floats
    cout << "Calling min using floats" << endl;
    cin >> float1 >> float2;
    cout << "The min value is " << mininum(float1, float2) << endl;
    
    
    
    return 0;
}
