#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#define MAX_LIVROS 100

typedef struct {
    char titulo[50];
    char nomeAutor[50];
    int anoPublicado;
    int quantidadeDisponivel;
    int codigoLivro;
} Livro;

void adicionarLivro();
void listarLivros();
void alugarLivro();
void apagarLivro();

#endif