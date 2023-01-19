#include <stdio.h>

int main(){
    FILE *inputFile, *outputFile;
    int number;
    char answer;

    inputFile = fopen("vector.txt", "r");
    outputFile = fopen("output.txt", "r");
    if(outputFile != NULL){
        printf("El archivo output.txt ya existe ¿Desea reemplazarlo? (s/n)");
        scanf("%c", &answer);
        if(answer == 's'){
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
        }else{
            printf("No se ejecutara el programa y no se reemplazara nada.");
            return -1;
        }
    }else{
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
}

