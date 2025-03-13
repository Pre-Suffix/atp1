#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int isPrime(long long int n) {
    if(n <= 1) return 0; // if n is lower than 2, returns false
    else if(n == 2) return 1; // if n is 2, return true
    else if((n & 1) == 0) return 0; // if n is even, return false

    // checks for every odd number i from 3 to square root of n if n is divisible by i
    // and returns false if it is for any value
    for(long long int i = 3; i <= sqrt(n); i += 2) { 
        if((n % i) == 0) return 0;
    }

    // returns true if none of the other conditionals were met
    return 1;
}

int main(int argc, char *argv[]) {

    // checks if user has supplied enough arguments
    if(argc <= 1) {
        printf("Not enough arguments. Correct syntax: primo <number>\n");
        return 1;
    }

    // gets user input
    long long n = atoll(argv[1]);

    // checks is number is prime, returns to console result
    if(isPrime(n) == 1) {
        printf("%lld is prime!\n", n);
    } else {
        printf("%lld isn't prime!\n", n);
    }

    return 0;
}