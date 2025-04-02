#include <stdio.h>// Input/Output
#include <stdlib.h> // usar o exit()
#include <locale.h> // para setlocale


main () {
    // Configura o locale para UTF-8
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Caminho relativo para o arquivo
    const char *caminho = "../logs/log.txt";

    // Abre o arquivo no modo leitura e escrita (r+)
    // O arquivo deve existir, caso contrário, fopen falhará
    FILE *arquivo = fopen(caminho, "r+");

    if (arquivo == NULL) {
        // Se o arq ñ existir, cria um novo
        printf("\nArquivo não encontrado. Criando um novo arquivo...\n ");
        printf("\n Arquivo sera criado na pasta %s\n", caminho);

        // Abre o arquivo no modo escrita (w+)
        arquivo = fopen(caminho, "w+");

        if (arquivo == NULL) {
            printf("Erro ao criar o arquivo.\n");
            exit(1); // Sai do programa com erro
        }else{
            printf("Arquivo criado com sucesso.\n"
            "Para continuar, digite 1 e pressione ENTER.\n");
            system("pause");
            printf("Continuando...\n");
        };
    }

    int opcao;     
    do {
        // Exibe o menu de opções
        printf("\nEscolha uma opção:\n");
        printf("1 - Ler o arquivo\n");
        printf("2 - Escrever no arquivo\n");
        printf("3 - Apagar o arquivo\n");
        printf("4 - Renomear o arquivo\n");
        printf("0 - Sair\n");
        printf("Digite sua opção: ");
        scanf("%d", &opcao); // Lê a opção do usuário
    
        switch (opcao) {
        case 1: {
            // Lê o conteúdo do arquivo
            printf("Lendo o arquivo...\n");
    
            char linha[256]; // Buffer para armazenar cada linha lida
            rewind(arquivo); // Move o ponteiro do arquivo para o início
    
            while (fgets(linha, sizeof(linha), arquivo) != NULL) {
                printf("%s", linha); // Imprime cada linha lida
            }
    
            printf("\n**********Fim do conteúdo do arquivo.**********\n");
            break;
        }
        case 2: {
            // Escreve no arquivo
            printf("Escrevendo no arquivo...\n");
    
            // Move o ponteiro do arquivo para o final
            fseek(arquivo, 0, SEEK_END);
    
            char texto[256]; // Buffer para armazenar o texto a ser escrito
            printf("Digite o texto a ser escrito: ");
            getchar(); // Limpa o buffer de entrada
            fgets(texto, sizeof(texto), stdin); // Lê a linha de texto
    
            fprintf(arquivo, "%s", texto); // Escreve no arquivo
            printf("Texto escrito com sucesso!\n");
            break;
        }
        case 0: {
            printf("Saindo do programa...\n");
            break;
        }
        default:
            printf("Opção inválida. Tente novamente.\n");
            break;
        }
    } while (opcao != 0); // Continua até que o usuário escolha a opção 0 (sair)
    
    // Fecha o arquivo antes de encerrar o programa
    fclose(arquivo);
    printf("\nArquivo fechado com sucesso.\n");
    system("pause"); // Pausa o console para visualizar a saída
    // Fechar o arquivo
    fclose(arquivo);
    printf("\nArquivo fechado com sucesso.\n");
    system("pause"); // Pausa o console para visualizar a saída
    return 0;
}