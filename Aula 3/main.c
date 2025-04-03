#include <stdio.h>
#include <math.h>

int main() {

    for(int i = 0; i < 2147483647; ++i) {
        printf("%d - ", (2 * i) + 1);
    }
    
    return 0;
}