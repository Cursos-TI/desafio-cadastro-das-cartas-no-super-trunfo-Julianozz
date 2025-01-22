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
    int cidade; 
    int nome; 
    float populacao;
    float area;
    int PIB;
    int pontos;
    
    // tema do meu jogo
    printf("Desafio Super Triunfo Paises:\n");
     
    printf ("Insira o código da cidade:\n",cidade);//aqui imprime ao usuario uma msg de inserir o codigo
    scanf ("%d", &cidade);// entrada do codigo feita pelo usuario
    fflush(stdin);// limpar o baffer do teclado
    printf ("Insira o Nome:\n",nome);// imprime a msg
    scanf ("%d", &nome);// entrada 
    fflush(stdin);// lipmpa o baffer 
    printf ("Insira a populacao:\n",populacao);// imprime a msg
    scanf ("%f", &populacao);// entrada 
    fflush(stdin);// lipma
    printf ("Insira a area:\n",area);// imprime
    scanf ("%f", &area);// entrada
    fflush(stdin); // limpa
    printf ("Insira o PIB:\n",PIB);// imprime 
    scanf ("%d", &PIB);// entrada 
    fflush(stdin);// limpa
    printf ("Insira o ponto turistico:\n",pontos);// imprima
    scanf ("%d", &pontos); //entrada
    // esta parte do codigo imprime tudo que o usuario digitou
    printf("codigo da cidade:%d\n",cidade);
    printf("Nome:%d\n",nome);
    printf("Populacao:%.2f\n", populacao);
    printf("area:%.2f\n", area);
    printf("PIB:%d\n",PIB);
    printf("ponto turistico:%d\n",pontos);

    return 0;
}
