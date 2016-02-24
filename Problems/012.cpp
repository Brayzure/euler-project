/*
Euler Problem 12
Solution by: Tyler Ricketts
Problem Description: What is the value of the first
    triangle number to have over five hundred divisors?
*/

#include <iostream>
#include <cmath>

int numDiv(double);

int main(){
    int i = 1;
    int tri = 1;
    while(1){
        int num = numDiv(tri);
        if(num > 500){
            std::cout << tri;
            break;
        }
        else{
            i++;
            tri += i;
        }
    }
}

int numDiv(double x){
    int total = 0;
    for(double i = 1;i <= sqrt(x);i++){
        if(x/i == floor(x/i)){
            if(i == sqrt(x)){
                total++;
            }
            else{
                total += 2;
            }
        }
    }
    return total;
}