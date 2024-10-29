#include "Tabuleiro.h"
#include <stdio.h>

void inicializar_tabuleiro(PecaXadrez tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO])
{
  for (int i = 0; i < TAMANHO_TABULEIRO; i++)
  {
    for (int j = 0; j < TAMANHO_TABULEIRO; j++)
    {
      tabuleiro[i][j] = criar_peca(VAZIO, SEM_COR);
    }
  }
  // Configura Peões
  for (int i = 0; i < TAMANHO_TABULEIRO; i++)
  {
    tabuleiro[1][i] = criar_peca(PEAO, PRETO);
    tabuleiro[6][i] = criar_peca(PEAO, BRANCO);
  }
  // Configura Torres, Cavalos, Bispos, Rainha e Rei (Exemplo para as Pretas)
  tabuleiro[0][0] = tabuleiro[0][7] = criar_peca(TORRE, PRETO);
  tabuleiro[0][1] = tabuleiro[0][6] = criar_peca(CAVALO, PRETO);
  tabuleiro[0][2] = tabuleiro[0][5] = criar_peca(BISPO, PRETO);
  tabuleiro[0][3] = criar_peca(RAINHA, PRETO);
  tabuleiro[0][4] = criar_peca(REI, PRETO);

  // Configuração das peças brancas
  tabuleiro[7][0] = tabuleiro[7][7] = criar_peca(TORRE, BRANCO);
  tabuleiro[7][1] = tabuleiro[7][6] = criar_peca(CAVALO, BRANCO);
  tabuleiro[7][2] = tabuleiro[7][5] = criar_peca(BISPO, BRANCO);
  tabuleiro[7][3] = criar_peca(RAINHA, BRANCO);
  tabuleiro[7][4] = criar_peca(REI, BRANCO);
}

void exibir_tabuleiro(PecaXadrez tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO])
{
  for (int i = 0; i < TAMANHO_TABULEIRO; i++)
  {
    for (int j = 0; j < TAMANHO_TABULEIRO; j++)
    {
      printf("%c ", obter_simbolo_peca(tabuleiro[i][j]));
    }
    printf("\n");
  }
}

int mover_peca(PecaXadrez tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int x1, int y1, int x2, int y2)
{
  PecaXadrez peca = tabuleiro[x1][y1];
  if (peca.tipo == VAZIO)
  {
    printf("Nenhuma peça na posicao inicial.\n");
    return 0;
  }
  tabuleiro[x2][y2] = peca;
  tabuleiro[x1][y1] = criar_peca(VAZIO, SEM_COR);
  return 1;
}
