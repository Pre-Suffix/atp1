#include <iostream>

long long int fatorial(int number) {
    if(number <= 1) return 1ll;
    else if(number > 20) return -1ll;

    return (long long int) number * fatorial(number - 1);
}

int main(void) {

    int n;
    std::cin >> n;
    
    std::cout << fatorial(n);

    return 0;
}