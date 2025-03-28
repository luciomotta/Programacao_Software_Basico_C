#include <stdio.h>
#include <stdlib.h> //Lib para exit()
#include <locale.h>
#include "cabecalho.h"



// Declara��o das fun��es de outros arquivos
//void funcaoBasica();
void calculaAreaCirculo();

int main() {
	setlocale(LC_ALL,"portuguese_Brazil");
	
    int escolha;
    
    // Exibe o menu para o usu�rio
    do {
        printf("\nEscolha uma opção:\n");
        printf("1 - Calcular área do círculo\n");
        printf("2 - Calcular área do quadrado\n");
        printf("3 - Sair\n");
        printf("Digite a opção: ");
        scanf("%d", &escolha);
        
        // Condicional para escolher qual fun��o chamar
        switch (escolha) {
            case 1:
                calculaAreaCirculo();  // Chama a fun��o para calcular a �rea do c�rculo
                break;
            case 2:
                //funcaoBasica(); // Chama a fun��o para calcular a �rea do quadrado
                break;
            case 3:
                printf("Saindo do programa...\n");
                exit(0); // Encerra o programa
            default:
                printf("Opçãoo inválida! Tente novamente.\n");
        }
    } while (true);  // O loop continua at� o usu�rio escolher a op��o 3 (sair)

    return 0;  // Retorno do programa (n�o ser� alcan�ado devido ao exit)
}
