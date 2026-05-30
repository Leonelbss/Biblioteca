#include <stdio.h>
#include "biblioteca.h"

void mostrarMenu() {
    printf("\n===== BIBLIOTECA =====\n");
    printf("1. Adicionar Livro\n");
    printf("2. Listar Livros\n");
    printf("3. Procurar Livro\n");
    printf("4. Alugar Livro\n");
    printf("5. Atualizar Quantidade\n");
    printf("6. Apagar Livro\n");
    printf("7. Total de Livros\n");
    printf("8. Sair\n");
    printf("Opcao: ");
}

int main() {
    int opcao = 0;

    while(opcao != 8) {

        mostrarMenu();
        scanf("%d", &opcao);

        switch(opcao) {

            case 1:
                adicionarLivro();
                break;

            case 2:
                listarLivros();
                break;

            case 4:
                alugarLivro();
                break;
            
            case 5:
                atualizarQuantidade();
                break;    

            case 6:
                apagarLivro();
                break;

            case 7:
                totalLivro();
                break;

            case 8:
                printf("Programa encerrado.\n");
                break;

            default:
                printf("Opcao invalida.\n");
        }
    }

    return 0;
}