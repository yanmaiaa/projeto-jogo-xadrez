#include "board/Tabuleiro.h"
#include "utils/GameUtils.h"
#include <stdio.h>

int main()
{
  PecaXadrez tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];
  inicializar_tabuleiro(tabuleiro);
  exibir_tabuleiro(tabuleiro);

  // Realiza o teste de limite de movimentos
  int repeticoes;
  printf("Insira o numero de repeticoes para o teste de limite de movimentos: ");
  scanf("%d", &repeticoes);
  teste_limite_movimentos(repeticoes);

  return 0;
}
