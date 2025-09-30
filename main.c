#include <stdio.h>

int main(void) {
  printf("Seja bem vindo ao Quiz Inteligente\n");
  int pontuacao = 0;
  int opcao;
  printf("1- Iniciar Quiz\n");
  printf("2- Regras\n");
 printf("3- Sair\n");

printf("digite a opcao desejada: ");
  scanf("%d", &opcao);
  switch (opcao){
    case 1:
      printf("Iniciando Quiz...\n");
      printf("Pergunta 1: Qual a capital do Brasil?\n");
      printf("a) Rio de Janeiro\n");
      printf("b) São Paulo\n");
      printf("c) Brasília\n");
      printf("d) Salvador\n");
      printf("Digite a opcao desejada: ");
      char resposta;
      scanf(" %c", &resposta);
      if (resposta == 'c'){
        pontuacao=pontuacao+2;
      }
      printf("Pergunta 2: Qual a capital da França?\n");
      printf("a) Paris\n");
      printf("b) Londres\n");
      printf("c) Berlim\n");
      printf("d) Madrid\n");
      printf("Digite a opcao desejada: ");
      char reposta2;
      scanf(" %c", &reposta2);
      if (reposta2 == 'a'){
        pontuacao=pontuacao+2;
      }
      printf("Pergunta 3: Qual a capital da Alemanha?\n");
      printf("a) Paris\n");
      printf("b) Londres\n");
      printf("c) Berlim\n");
      printf("d) Madrid\n");
      printf("Digite a opcao desejada: ");
      char reposta3;
      scanf(" %c", &reposta3);
      if (reposta3 == 'c'){
        pontuacao=pontuacao+2;
      }
      printf("Pergunta 4: Qual a capital da Espanha?\n");
      printf("a) Paris\n");
      printf("b) Londres\n");
      printf("c) Berlim\n");
      printf("d) Madrid\n");
      printf("Digite a opcao desejada: ");
      char reposta4;
      scanf(" %c", &reposta4);
      if (reposta4 == 'd'){
        pontuacao=pontuacao+2;
      }
      printf("Pergunta 5: Qual a capital da Inglaterra?\n");
      printf("a) Paris\n");
      printf("b) Londres\n");
      printf("c) Berlim\n");
      printf("d) Madrid\n");
      printf("Digite a opcao desejada: ");
      char reposta5;
      scanf(" %c", &reposta5);
      if (reposta5 == 'b'){
        pontuacao=pontuacao+2;
      }
     
      if (pontuacao <= 4){
        printf("Precisa estudar mais!\n");
        } else if (pontuacao >= 8){
        printf("Muito bom!\n");
      }
      if (pontuacao == 10){
        printf("Excelente,parabéns\n");
      }
      
     printf("Pontuacao final: %d\n", pontuacao);
     printf("Obrigado por jogar!\n");
      
  
      break;
      case 2:
      printf("Regras do Quiz:\n");
          printf("1. O quiz tem 10 perguntas.\n");
          printf("2. Cada pergunta vale 1 ponto.\n");
          printf("3. O quiz termina quando o jogador errar uma pergunta.\n");
          printf("4. O jogador pode desistir a qualquer momento.\n");
          printf("5. O jogador pode pular uma pergunta, mas perde 1 ponto.\n");
          printf("6. O jogador pode usar uma dica, mas perde 2 pontos.\n");
      break;
        case 3:
      printf("Saindo...\n");
      break;
  }
  return 0;
}