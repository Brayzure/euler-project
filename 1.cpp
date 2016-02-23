/*
Euler Problem 1
Solution by: Tyler Ricketts
Problem Description: Find the sum of all the
    multiples of 3 or 5 below 1000.
*/

#include <iostream>
#include <cmath>

int main(){
    int sum3 = 0;
    int sum5 = 0;
    int sum15 = 0;
    for(int i=3; i<1000; i+=3){
        sum3 += i;
    }
    for(int i=5; i<1000; i+=5){
        sum5+=i;
    }
    for(int i=15; i<1000; i+=15){
        sum15+=i;
    }
    std::cout << sum3 + sum5 - sum15;
}
