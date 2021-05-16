//
//  min.h
//  Ex15.8
//
//  Created by Alain Perez on 5/15/21.
//

#ifndef min_h
#define min_h

template < class T>
T mininum(T value1, T value2){
    
    T minValue = value1;//assume that value 1 is the smallest value
    
    if(minValue > value2){ // if value2 is smaller than minValue is not the smallest then make minValue = Value2
        minValue = value2;
    }
    
    return minValue;
}

#endif /* min_h */
