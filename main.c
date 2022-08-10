#include <stdio.h>

void cubeByReference(int *ePtr);

int main() {
    int number, elevated;

    printf("Informe um número inteiro para ser elevado ao cubo: ");
    scanf("%d", &number);

    elevated = number;

    printf("O valor do número fornecido é: %d\n", number);

    cubeByReference(&elevated);

    printf("O valor de %d elevado ao cubo é %d.\n", number, elevated);

    return 0;
}

void cubeByReference(int *ePtr) {
    *ePtr = *ePtr * *ePtr * *ePtr;
}