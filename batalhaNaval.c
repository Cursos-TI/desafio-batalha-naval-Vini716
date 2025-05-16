#include <stdio.h>

int main(){
int tabuleiro[10][10] = {0}; //matriz que representa o tabuleiro
//criando tabuleiro
for (int i = 0; i < 10; i++)
{
    for (int j = 0; j < 10; j++)
    {
       tabuleiro[i][j] = 0;
    }
    
}
//criando navio
int navio1[3] = {3, 3, 3};
int navio2[3] = {3, 3, 3};

//navio na horizontal 
int linha1 = 2;
int coluna1 = 4;

//navio na vertical
int linha2 = 5;
int coluna2 = 6;

//pondo o primeiro navio no tabuleiro
for (int i = 0; i < 3; i++)
{ 
  tabuleiro[linha1][coluna1 = i] = navio1[i];
}
 //pondo o segundo navio no tabuleiro
for (int  i = 0; i < 3; i++)
{
    tabuleiro[linha2 = i][coluna2] = navio2[i];
}
//pondo o tabuleiro com os navios 
printf("TABULEIRO DE BATALHA NAVAL\n");

for (int i = 0; i < 10; i++)
{  for (int j = 0; j < 10; j++)
{
    printf("%d ", tabuleiro[i][j]);
}
printf("\n");
}


return 0;

}