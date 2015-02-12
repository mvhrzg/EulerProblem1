#include <cstdlib>
#include <iostream>
#include <stdio.h>
 
 using namespace std;
 
using namespace std;

 int main(int argc, char** argv) {
    int sum = 0;
    int n;
    cout << "Enter a number: " << endl;
    scanf("%d", &n);
    printf("You entered: %d\n", n);
    int threes = 3*((n-1)/3) * (1+(n-1)/3)/2;
    int fives = 5*((n-1)/5) * (1+(n-1)/5)/2;
    int fifteen = 15*((n-1)/15) * (1+(n-1)/15)/2;
    
    sum = threes + fives - fifteen;
     
    cout <<"Sum: " << sum << endl;
 
    return 0;
 }