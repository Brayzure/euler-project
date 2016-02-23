/*
Euler Problem 2
Solution by: Tyler Ricketts
Problem Description: By considering the terms in
    the Fibonacci sequence whose values do not exceed
    four million, find the sum of the even-valued terms.
*/


#include <cmath>
#include <iostream>

int main(){
    int first = 1;
    int second = 2;
    int sum = 2;

    while (second < 4000000){
        second += first;
        first = second - first;
        if (second%2==0){
            sum += second;
        }
    }
    std::cout << sum;
}
