/*
Euler Problem 3
Solution by: Tyler Ricketts
Problem Description: What is the largest prime factor
    of the number 600851475143 ?
*/


#include <cmath>
#include <iostream>

double x = 600851475143;

int prime(double y){
    for(int i=2;i<=floor(sqrt(y));i++){
        if(y/i==floor(y/i)){
            return i;
        }
    }
    return y;
}

int main(){
    int test = 0;
    while(test!=x && x>1){
        int test = prime(x);
        x/=test;
        std::cout << "Factor found: " << test << "\n";
        std::cout << "Remaining integer: " << x << "\n\n";
    }
}
