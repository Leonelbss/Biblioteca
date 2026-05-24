#include <string.h>
#include <stdio.h>
#include "biblioteca.h"


int main(){
    int opcao = 0;
    while (opcao !=  8)
    {
        mostrarMenu();
        scanf("%d", &opcao);
        switch(opcao)
{
    case 1://Adicionar um novo livro
        printf("opcao 1 selecionada");
        break;
    case 2://Listar todos os livros cadastrados.
        printf("opcao 2 selecionada");
        break; 
    case 3:
        printf("opcao 3 selecionada");//Procurar um livro pelo código.
        break;
    case 4://Procurar um livro pelo código.
        printf("opcao 4 seleconada");
        break;           
    case 5://Atualizar a quantidade de exemplares de um livro.
        printf("opcao 5 selecionda");
        break; 
    case 6://Atualizar a quantidade de exemplares de um livro.
        printf("opcao 6 selecionada");
        break;   
    case 7://Mostrar o total de livros registados.
        printf("opcao 7 seleciondada");
        break;        

    case 8://Sair do programa.
        printf("opcao 8 selecionada");
        break;

    default:
        printf("opcao invalida");
}
        /*  code */
    }
    
}