#include <stdio.h>
#include <stdlib.h> //Lib para exit()
#include <locale.h>
// Declaração das funções de outros arquivos
void funcaoBasica();
void calculaAreaCirculo();

int main() {
	setlocale(LC_ALL,"portuguese_Brazil");
	
    int escolha;
    
    // Exibe o menu para o usuário
    do {
        printf("\nEscolha uma opção:\n");
        printf("1 - Calcular área do círculo\n");
        printf("2 - Calcular área do quadrado\n");
        printf("3 - Sair\n");
        printf("Digite a opção: ");
        scanf("%d", &escolha);
        
        // Condicional para escolher qual função chamar
        switch (escolha) {
            case 1:
                calculaAreaCirculo();  // Chama a função para calcular a área do círculo
                break;
            case 2:
                funcaoBasica(); // Chama a função para calcular a área do quadrado
                break;
            case 3:
                printf("Saindo do programa...\n");
                exit(0); // Encerra o programa
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    } while (true);  // O loop continua até o usuário escolher a opção 3 (sair)

    return 0;  // Retorno do programa (não será alcançado devido ao exit)
}
