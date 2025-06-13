#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *inputFile, *outputFile;
    char char1, char2;
    int asciiSum;

    // Open the input file in read mode
    inputFile = fopen("chars.txt", "r");
    if (inputFile == NULL) {
        perror("Error opening input file");
        return 1;
    }

    // Read the first two characters
    char1 = fgetc(inputFile);
    char2 = fgetc(inputFile);

    // Calculate ASCII sum
    asciiSum = (int)char1 + (int)char2;

    // Close the input file
    fclose(inputFile);

    // Open the output file in write mode
    outputFile = fopen("codesum.txt", "w");
    if (outputFile == NULL) {
        perror("Error creating output file");
        return 1;
    }

    // Write ASCII sum to the output file
    fprintf(outputFile, "%d\n", asciiSum);

    // Close the output file
    fclose(outputFile);

    printf("ASCII sum of '%c' and '%c' is %d. Written to codesum.txt\n", char1, char2, asciiSum);
    return 0;
}
