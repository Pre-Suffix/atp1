#include <iostream>
#include <cmath>

/**
 * Returns the character length of any given signed integer
 */
int numberLength(int number) {
    // log10(0) is undefined, but 0 has length 1.
    if(number == 0) return 1;

    // Find length of value as a positive value
    int r = floor(log10(abs(number)) + 1);

    // If number is a negative value, account for the negative sign
    if(number < 0) r++;

    return r;
}

/**
 * Prints a given integer-based 2D Matrix to stdout
 */
void matrixPrint(int *sMatrix, int height, int width) {
    int maxLength = width * height;
    int columnLength[width] = {0};
    
    // Finds padding value for each column by finding the longest value in each column
    for(int i = 0; i < width; ++i) {
        for(int j = i; j < maxLength; j += width) { 
            if(numberLength(sMatrix[j]) > columnLength[i])
                columnLength[i] = numberLength(sMatrix[j]);
        }
    }

    // 0: │, 1: ┐, 2: └, 3: ┘. 4: ┌
    const char bars[5] = {
        (char) 179, 
        (char) 191, 
        (char) 192, 
        (char) 217, 
        (char) 218
    };

    // Routine to print all values in the matrix
    for(int i = 0; i < maxLength; ++i) {

        // Print left-side bar if in the first column
        if(i % width == 0) {

            if(height == 1) std::cout << '[';
            else if(i == 0) std::cout << bars[4]; 
            else if(i == ((width * height) - width)) std::cout << bars[2];
            else std::cout << bars[0];

            std::cout << ' ';
        }

        // Print value
        std::cout << sMatrix[i] << ' ';

        // Print padding if needed
        int nLen = numberLength(sMatrix[i]);
        if(columnLength[i % width] - nLen > 0)
            std::cout << std::string(columnLength[i % width] - nLen, ' ');

        // Print right-side bar if in the last column
        if((i + 1) % width == 0) {

            if(height == 1) std::cout << ']';
            else if(i == (width - 1)) std::cout << bars[1];
            else if(i == (width * height) - 1) std::cout << bars[3];
            else std::cout << bars[0];

            std::cout << '\n';
        }
    }

}