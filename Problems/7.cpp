/*
Euler Problem 7
Solution by: Tyler Ricketts
Problem Description: Find the 10,001st prime number.
*/

#include <iostream>
#include <cmath>

int main(){
    double x = 1;
    int iter = 0;

    while(iter<10001){
        x++;
        bool flag = 1;
        for(double i=2;i<=sqrt(x);i++){
            if(x/i == floor(x/i)){
                flag = 0;
                i = floor(sqrt(x));
            }
        }
        if(flag){
            iter++;
        }
    }

    std::cout << x;
}