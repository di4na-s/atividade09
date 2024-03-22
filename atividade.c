// Questão 01
#include <stdio.h>

int main() {
    int vetor[10], maior, i;

   
    printf("Digite os 10 elementos do vetor:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    
    maior = vetor[0];

   
    for (i = 1; i < 10; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }

    
    printf("O maior elemento do vetor é: %d\n", maior);

    return 0;
}
// Questão 02 
#include <stdio.h>

int main() {
    int vetor[10], menor, i;

    
    printf("Digite os 10 elementos do vetor:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

   
    menor = vetor[0];

    
    for (i = 1; i < 10; i++) {
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }

    
    printf("O menor elemento do vetor é: %d\n", menor);

    return 0;
}
// Questão 03
#include <stdio.h>

int main() {
    int vetor[10], maior, posicao_maior, i;

   
    printf("Digite os 10 elementos do vetor:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    
    maior = vetor[0];
    posicao_maior = 0;

   
    for (i = 1; i < 10; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
            posicao_maior = i;
        }
    }

   
    printf("O maior elemento do vetor é: %d\n", maior);
    printf("Ele está na posição: %d\n", posicao_maior);

    return 0;
}

// Questão 04
#include <stdio.h>

int main() {
    int vetor[5], maior, menor, pos_maior, pos_menor, i;

   
    printf("Digite os 5 elementos do vetor:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &vetor[i]);
    }

    
    maior = vetor[0];
    menor = vetor[0];
    pos_maior = 0;
    pos_menor = 0;

    
    for (i = 1; i < 5; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
            pos_maior = i;
        }
        if (vetor[i] < menor) {
            menor = vetor[i];
            pos_menor = i;
        }
    }

    
    printf("A posição do maior valor é: %d\n", pos_maior);
    printf("A posição do menor valor é: %d\n", pos_menor);

    return 0;
}

// Questão 05
#include <stdio.h>

int main() {
    int vetor[10], i, j;

    
    printf("Digite os 10 elementos do vetor:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

   
    printf("Valores iguais no vetor:\n");
    for (i = 0; i < 10; i++) {
        for (j = i + 1; j < 10; j++) {
            if (vetor[i] == vetor[j]) {
                printf("%d\n", vetor[i]);
            }
        }
    }

    return 0;
}
