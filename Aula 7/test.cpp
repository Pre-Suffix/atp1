#include <iostream>

int main(void) {
    char *v;
    int size = 20;
    v = (char *) malloc(size * sizeof(char));

    std::cout << v;
    for(int i = 0; i < size; ++i) std::cout << * (short *) &v[i] << '\n';

    return 0;
}