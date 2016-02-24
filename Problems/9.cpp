/*
Euler Problem 9
Solution by: Tyler Ricketts
Problem Description: Find the only pythagorean triple such that its sum
    equals 1000. Determine the product of the three lengths.
*/

#include <iostream>
#include <cmath>

int main(){
    for(int i=1;i<=500;i++){
        for(int j=1;j<=500;j++){
            double k = sqrt(pow(i,2)+pow(j,2));
            if(i+j+k==1000){
                std::cout << i << "," << j << "," << k << "\n";
                std::cout << std::fixed << i*j*k;
            }
        }
    }
}
