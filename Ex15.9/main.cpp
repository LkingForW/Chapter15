//
//  main.cpp
//  Ex15.9
//
//  Created by Alain Perez on 5/16/21.
//

/* Write a program that uses a function template called max to determine the larger of two arguments. Test the program using integer, character and floating-point number arguments. */

#include <iostream>
#include "max.h"

using namespace std;

int main(int argc, const char * argv[]) {
    
    int int1, int2; //initializing the integers
    
    cout << "Input two integers to find the maximum" << endl;
    cin >> int1 >> int2;
    cout << "The maximum out of the two values are " << maximum(int1, int2) << endl;
    
    char char1, char2;
    
    cout << "Input two characters to find the maximum" << endl;
    cin >> char1 >> char2;
    cout << "The maximum out of the two values are " << maximum(char1, char2) << endl;
    
    float float1 , float2 ;
    
    cout << "Input two floating points to find the maximum" << endl;
    cin >> float1 >> float2;
    cout << "The maximum out of the two values are " << maximum(float1, float2) << endl;
    
    return 0;
}
