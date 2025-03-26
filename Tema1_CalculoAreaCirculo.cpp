// Inclus�o da LIB
#include <stdio.h> //Lib Entrada e Sa�da 

//Definir constante 
//#Define PI 3.14 // Definir a constante PI
const float PI = 3.14;

// Fun��o que calcula a �rea do c�rculo
int calculaAreaCirculo() {
    // Declara��o de vari�veis
    float area, raio;
    
    // Impress�o de uma mensagem de boas-vindas
    printf("Ola, bem-vindo ao programa de c�lculo de �rea do c�rculo!\n\n");
    
    // Leitura do raio
    printf("Digite o valor do raio: ");
    scanf("%f", &raio);
    
    // C�lculo da �rea do c�rculo
    area = PI * raio * raio;
    
    // Exibi��o do resultado
    printf("A �rea do c�rculo com raio %.2f �: %.2f\n", raio, area);
    

}
