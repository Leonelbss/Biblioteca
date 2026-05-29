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

void listarLivros(){
    
    if(totalLivros ==0){
        printf("Nenhum livro cadastrado.\n");
        return;
    }

    for(int i = 0; i < totalLivros; i++) {
        printf("\nLivro %d\n", i + 1);
        printf("Titulo: %s\n", biblioteca[i].titulo);
        printf("Autor: %s\n", biblioteca[i].nomeAutor);
        printf("Ano: %d\n", biblioteca[i].anoPublicado);
        printf("Quantidade: %d\n", biblioteca[i].quantidadeDisponivel);
        printf("ID do Livro: %d\n", biblioteca[i].idDoLivro);
    }
}

void alugarLivro(){
    int codigo;
    int encontrado = 0;

    printf("Digite o Id do livro: ");
    scanf("%d", idDoLivro);

    for(int i = 0; i < totalLivros; i++){

        if(biblioteca[i].idDoLivro == codigo){
            encontrado = 1;
            if(biblioteca[i]quantidadeDisponivel > 0){
                
                biblioteca[i].quantidadeDisponivel--;

                printf("Livro alugado com sucesso\n");

            }else{
                
                printf("Livro indisponivel\n");
            }
        }
    }

    if(!encontrado){
        printf("Livro nao encontrado\n");
    }
}

void apagarLivro(){
    int codigo;
    int encontrado = 0;

    printf("Digite o id do livro a apagar: ");
    scanf("%d", &idDoLivro);

    for(int i = 0; i < totalLivros; i++){
        if(biblioteca[i].idDoLivro == codigo){
            encontrado = 1;

            for(int j = i; j < totalLivros - 1; j++){
                biblioteca[j] = biblioteca[j + 1];
            }

            totalLivros--;

            printf("Livro eleminado com sucesso\n");
            break;
        }
    }

    if(!encontrado){
        printf("Livro nao encontrado.\n");
    }
}