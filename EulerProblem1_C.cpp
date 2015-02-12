/* 
 * File:   EulerProblem1_C.cpp
 * Author: M. Herzog
 *
 * Created on January 27, 2015, 1:15 PM
 */

#include <cstdlib>
#include <iostream>
#include <stdio.h>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int sum = 0;
    int n;
    cout << "Enter a number: " << endl;
    scanf("%d", &n);
    printf("You entered: %d\n", n);
    for(int i = 2; i < n; i++){
        if(i%3 == 0 || i%5 == 0){
            sum += i;
        }
    }
    
    cout <<"Sum: " << sum << endl;

    return 0;
}

