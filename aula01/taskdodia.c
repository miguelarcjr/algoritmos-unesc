#include <stdio.h>
#include <stdlib.h>

char _nome[10];

FILE *_arq, *pont_arq;

void receberNome();
void salvarArquivo();

int main()
{
    /* code */  
    FILE *ent;
    char palavra[20];
    char texto_str[20];


    receberNome();
    printf("Seu nome e %s\n",_nome);
    ent = fopen("nome.n","w");
    
    printf("Escreva uma palavra para testar gravacao de arquivo: \n");
        scanf("%s", palavra);
        fprintf(ent, "%s", palavra);
        fclose(ent);

  pont_arq = fopen("nome.n", "r");
  
  while(fgets(texto_str, 20, pont_arq) != NULL)
  printf("%s", texto_str);
  
  fclose(pont_arq);
  
  getch();
  return (0);
}

void salvarArquivo() {
    _arq = fopen("nome.n","r");
}

void receberNome() {
    printf("Digite o seu nome\n");
    scanf("%s",_nome);
}
