#include <stdio.h>
#include <stdlib.h>

int _a; char _nome[50];
FILE *a;

int main()
{
    printf("Hello world!!!!\n %i", _a );
    return 0;
}

/* 
                            "Q"  - Se o arquivo existe ele abre e reescreve todo o arquivo, se não existir: ele cria
    a = fopen("thiago.ser", "A") - Ele abre o arquivo e deixa o cursor na ultima linha, se não existir cria tbm
                            "R"  - Apenas lê o arquivo

    fclose(a);
    fscanf(arq, "%d", &_capacidade)
    fprintf() //escreve no arquivo
 */