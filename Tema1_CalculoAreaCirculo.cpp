// Inclusão da LIB
#include <stdio.h> //Lib Entrada e Saída 

//Definir constante 
//#Define PI 3.14 // Definir a constante PI
const float PI = 3.14;

// Função que calcula a área do círculo
int calculaAreaCirculo() {
    // Declaração de variáveis
    float area, raio;
    
    // Impressão de uma mensagem de boas-vindas
    printf("Ola, bem-vindo ao programa de cálculo de área do círculo!\n\n");
    
    // Leitura do raio
    printf("Digite o valor do raio: ");
    scanf("%f", &raio);
    
    // Cálculo da área do círculo
    area = PI * raio * raio;
    
    // Exibição do resultado
    printf("A área do círculo com raio %.2f é: %.2f\n", raio, area);
    

}
