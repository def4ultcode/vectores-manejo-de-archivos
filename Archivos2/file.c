#include <stdio.h>

int main(){
    FILE *inputFile, *outputFile;
    int number;

    inputFile = fopen("vector.txt", "r");
    outputFile = fopen("output.txt", "w");

    if (inputFile == NULL || outputFile == NULL){
        printf("Error opening file\n");
        return -1;
    }

    while (fscanf(inputFile, "%d", &number) == 1){
        if (number % 3 == 0){
            fprintf(outputFile, "%d\n", number);
        }
    }

    fclose(inputFile);
    fclose(outputFile);

    printf("Realizado, por favor revisa el archivo output.txt");
    return 0;
}

