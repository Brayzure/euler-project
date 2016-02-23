/*
Euler Problem 4
Solution by: Tyler Ricketts
Problem Description: Find the difference between the sum of
    the squares of the first one hundred natural numbers and
    the square of the sum.
*/

#include <iostream>
#include <cmath>

int main(){
    double sum1 = 0;
    double sum2 = 0;
    for(int i=1;i<=100;i++){
        double test = pow(i, 2);
        sum1 += test;
    }
    for(int i=1;i<=100;i++){
        sum2 += i;
    }
    std::cout << std::fixed << sum2 << "\n";
    sum2 = pow(sum2, 2);
    std::cout << sum2 << "\n";

    std::cout << sum2 - sum1;
}
