#include <stdio.h>
#include<string.h>
#include "biblioteca.h"

Livro biblioteca[MAX_LIVROS];

int totalLivros = 0;

void adicionarLivros(){
    if(totalLivros >= MAX_LIVROS){
        printf("Limites de livros atingido\n");
        return;
    }

    Livro novoLivro;

    getchar();

    printf("Titulo: ");
    fgets(novoLivro.titulo, 50, stdin);
    novoLivro.titulo[strcspn(novoLivro.titulo, "\n")] = '\0';

    printf("Autor: ");
    fgets(novoLivro.nomeAutor, 50, stdin);
    novoLivro.nomeAutor[strcspn(novoLivro.nomeAutor, "\n")] = '\0';

    printf("Ano publicado: ");
    scanf("%d", &novoLivro.anoPublicado);

    printf("Quantidade disponivel: ");
    scanf("%d", &novoLivro.quantidadeDisponivel);

    printf("ID do Livro: ");
    scanf("%d", &novoLivro.idDoLivro);

    biblioteca[totalLivros] = novoLivro;
    totalLivros++;

    printf("Livro adicionado com sucesso\n");
}