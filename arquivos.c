#include <stdio.h>
#include <stdlib.h>
#include "arquivos.h"

void criar(){
    FILE *save;
    char nome[50];
    printf("Insira o nome do arquivo:\n");
    scanf(" %s", nome);
    save = fopen(nome, "w");
}
