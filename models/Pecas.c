#include "Pecas.h"

PecaXadrez criar_peca(TipoPeca tipo, Cor cor)
{
  PecaXadrez peca;
  peca.tipo = tipo;
  peca.cor = cor;
  return peca;
}

char obter_simbolo_peca(PecaXadrez peca)
{
  switch (peca.tipo)
  {
  case PEAO:
    return (peca.cor == BRANCO) ? 'P' : 'p';
  case TORRE:
    return (peca.cor == BRANCO) ? 'T' : 't';
  case CAVALO:
    return (peca.cor == BRANCO) ? 'C' : 'c';
  case BISPO:
    return (peca.cor == BRANCO) ? 'B' : 'b';
  case RAINHA:
    return (peca.cor == BRANCO) ? 'Q' : 'q';
  case REI:
    return (peca.cor == BRANCO) ? 'K' : 'k';
  default:
    return '.';
  }
}
