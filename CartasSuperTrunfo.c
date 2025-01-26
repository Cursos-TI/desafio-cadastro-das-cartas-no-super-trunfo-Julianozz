#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
    // abaixo declaração de variaveis
    char estado; 
    char codigo; 
    char nome;
    unsigned long int populacao;
    float area;
    float PIB;
    int pontos;
    float densidadepolulacional;
    float PIBPERCAPITA;
    float superpoder;

    // esta parte do codigo é onde o usuario vai entrar com os valores 
    printf("Desafio Super Trunfo  Países\n");// Tema do jogo
    printf("Estado\n");
    scanf("%c", &estado);
    fflush(stdin);
    printf("Codigo da Carta\n");
    scanf("%c", &codigo);
    fflush(stdin);
    printf("Nome Da Cidade\n");
    scanf("%c", &nome);
    fflush(stdin);
    printf("Populacao\n");
    scanf("%d", &populacao);
    fflush(stdin);
    printf("Area em Km2\n");
    scanf("%f", &area);
    fflush(stdin);
    printf("PIB\n");
    scanf("%f", &PIB);
    fflush(stdin);
    printf("Numeros de Pontos Turisticos\n");
    scanf("%d", &pontos);
    fflush(stdin);
    printf("Densidade Populacional\n");
    scanf("%f", &densidadepolulacional);
    fflush(stdin);
    printf("PIB PER CAPITA\n");
    scanf("%f", &PIBPERCAPITA);
    fflush(stdin);
    printf("Super Poder\n");
    scanf("%f", &superpoder);

    //ainda estou arrumando o codigo




    return 0;
}
