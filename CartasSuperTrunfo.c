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
    
    
    int cidade; 
    int nome; 
    float populacao;
    float area;
    int PIB;
    int pontos;

    printf("Desafio Super Triunfo Paises:\n");

    printf ("Insira o código da cidade:\n");
    scanf ("%d", &cidade);
    fflush(stdin);
    printf ("Insira o Nome:\n");
    scanf ("%d", &nome);
    fflush(stdin);
    printf ("Insira a populacao:\n");
    scanf ("%f", &populacao);
    fflush(stdin);
    printf ("Insira a area:\n");
    scanf ("%f", &area);
    fflush(stdin);
    printf ("Insira o PIB:\n");
    scanf ("%d", &PIB);
    fflush(stdin);
    printf ("Insira o ponto turistico:\n");
    scanf ("%d", &pontos);

    printf("codigo da cidade:%d\n",cidade);
    printf("Nome:%d\n",nome);
    printf("População:%f\n", populacao);
    printf("área:%f\n", area);
    printf("PIB:%d\n",PIB);
    printf("ponto turistico:%d\n",pontos);

    return 0;
}
