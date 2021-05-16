//
//  main.cpp
//  Ex15.5
//
//  Created by Alain Perez on 5/15/21.
//

/* 15.5 Write a C++ programn that promts the usser for the raius of a circle, then calls an inline function circleArea to calculate the area of that circle. */
#include <iostream>
#include <math.h>

using namespace std;

const double PI = 3.14; // Global const PI for circle calculation

inline double circleArea(const double radius){ // Inline function to calculate area of circle
    return PI*pow(radius, 2);
}

int main(int argc, const char * argv[]) {
    
    double radius;
    
    //Promts user for the radius of the circle
    cout << "Please input radius of a circle to calculate the area:" << endl;
    cin >> radius;
    
    //prints out the Area of the circle based of the value input
    cout << "The Area of the circle with radius " << radius << " is " << circleArea(radius) << endl;
    return 0;
}
