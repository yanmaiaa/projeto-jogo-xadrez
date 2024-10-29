#ifndef PECAS_H
#define PECAS_H

typedef enum
{
  VAZIO,
  PEAO,
  TORRE,
  CAVALO,
  BISPO,
  RAINHA,
  REI
} TipoPeca;

typedef enum
{
  BRANCO,
  PRETO,
  SEM_COR
} Cor;

typedef struct
{
  TipoPeca tipo;
  Cor cor;
} PecaXadrez;

PecaXadrez criar_peca(TipoPeca tipo, Cor cor);
char obter_simbolo_peca(PecaXadrez peca);

#endif
