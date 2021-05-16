//
//  max.h
//  Ex15.9
//
//  Created by Alain Perez on 5/16/21.
//

#ifndef max_h
#define max_h

template < class T >
T maximum(T value1 , T value2){ // Finds max number out of two variables
    
    T maxValue = value1; // Assume that the max value is value 1
    
    if( maxValue < value2 ){ //if value2 is bigger than value 1 than the max value is value2
        maxValue = value2;
    }
    
    return maxValue;
}


#endif /* max_h */
