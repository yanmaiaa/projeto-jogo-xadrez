#include "GameUtils.h"
#include "../board/Tabuleiro.h"
#include <stdio.h>

void teste_limite_movimentos(int repeticoes)
{
  PecaXadrez tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];
  inicializar_tabuleiro(tabuleiro);

  for (int i = 0; i < repeticoes; i++)
  {
    if (!mover_peca(tabuleiro, 1, 0, 2, 0))
    {
      break;
    }
  }
  printf("Teste de limite com %d movimentos concluido.\n", repeticoes);
}
