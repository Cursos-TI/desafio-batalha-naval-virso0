#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
    int tabuleiro [10][10];
    //preenche o tabuleiro com 0
    for (int i = 0; i<10; i++)
    //cria as linhas
    {
        for(int j = 0; j<10; j++)
        //cria as colunas
        {
            tabuleiro[i][j]=0;
            //cria o tabuleiro juntando as linhas e as colunas
        }
    }

    int linha3 = 2;
    //armazena qual o indice da linha desejada
    int coluna4 = 3;
    //armazena qual o indice da coluna desejada
    for(int i=0;i<3;i++)
    //percorre as linhas e as colunas no número de vezes que vai alterar-las
    {
        tabuleiro[linha3][coluna4 + i] = 3;
        //fornece a matriz, em seguida o primeiro indice, depois o segundo, o + i serve para acompanhar o for, ou seja, cada vez que o for rodar a coluna vai alterar de valor para o número 3
    }

    int linha6 = 7;
    int coluna9 = 8;

    for(int i = 0; i<3;i++)
    {
        tabuleiro[linha6 + i][coluna9] = 3;
    }

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.
    int linha5 = 4;
    int coluna2=1;
    for(int i = 0;i<3;i++)
    {
        for(int j = 0;j<3;j++)
        {
            tabuleiro[linha5+i][coluna2+i]=3;
        }
    }

    int linha2 = 3;
    int coluna10=9;
    for(int i = 0;i<3;i++)
    {
        tabuleiro[linha2+i][coluna10-i]=3;
    }
    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    int linha8 = 7;
    int coluna3 = 2;
    
    for (int i = 0; i < 3; i++)  
    // tamanho do cone
    {
        for (int j = -i; j <= i; j++)  
        // expande para os lados, tipo pirâmide
        {
            tabuleiro[linha8+i][coluna3+j] = 1;
        }
    }
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0
    int coluna5 = 5;
    int linha61=7;
    for (int j = 0; j <= 2; j++) 
    {
        tabuleiro[linha61][coluna5 + j] = 1;
    }

    int linha51=6;
    tabuleiro[linha51][coluna5+1]=1;

    int linha7=8;
    tabuleiro[linha7][coluna5+1]=1;

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0
    int linha4 = 3;
    int coluna6 = 5;

    for (int j = -2; j <= 2; j++) 
    {
        tabuleiro[linha4][coluna6 + j] = 1;
    }

    int linha21 = 2;
    int coluna41=5;
    tabuleiro[linha21][coluna41]=1;
    //como a variavel linha2 e coluna4 ja foi utilizada, criei duas novas para poder utilizar da mesma linha sem problema
    int linha41=4;
    tabuleiro[linha41][coluna41]=1;

    printf("\nTabuleiro da Batalha Naval:\n");
    for (int i = 0; i < 10; i++) 
        {
        for (int j = 0; j < 10; j++) 
        {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
