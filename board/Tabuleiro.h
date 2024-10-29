#ifndef TABULEIRO_H
#define TABULEIRO_H

#include "../models/Pecas.h"

#define TAMANHO_TABULEIRO 8

void inicializar_tabuleiro(PecaXadrez tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]);
void exibir_tabuleiro(PecaXadrez tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]);
int mover_peca(PecaXadrez tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int x1, int y1, int x2, int y2);

#endif
