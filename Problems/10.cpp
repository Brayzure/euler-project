/*
Euler Problem 9
Solution by: Tyler Ricketts
Problem Description: Find the sum of all of the primes below two million.
*/

#include <iostream>
#include <cmath>

bool isPrime(double);

int main(){
    int iter = 1;
    double sum = 0;
    double test = 2;
    while(test<2000000){
        if(isPrime(test)){
            iter++;
            sum+=test;
        }
        test++;
    }
    std::cout << std::fixed << sum;
}

bool isPrime(double n){
    for(int q=2;q<=sqrt(n);q++){
        if(n/q==floor(n/q)){
            return 0;
        }
    }
    return 1;
}