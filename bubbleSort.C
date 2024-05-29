#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

void crescente(int *array, int size) {
    int temp;
    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - 1 - i; j++) {
            if(array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}


int main() {
    int i, j, numero;
    srand(time(NULL));
    int sorteio[6];
    bool sorteado;
    for(i = 0; i < 6; ) {
        numero = rand() % 100;
        sorteado = false;
        for(j = 0; j < i; j++) {
            if(sorteio[j] == numero) {
                sorteado = true;
                break;
            }
        }
        if(!sorteado) {
            sorteio[i] = numero;
            i++;
        }
    }
    
    crescente(sorteio, 6);
    
    for(i = 0; i < 6; i++) {
        printf("%d\n", sorteio[i]);
    }

    return 0;
}
