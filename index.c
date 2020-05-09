#include <stdio.h>
int main() {
    float valortotal;

  printf("Bem-Vindos ao restaurante SaBurguer\n");
  printf("Nossos hamburgueres:\n");
  printf("1.X-burguer(Pao, queijo, presunto, alface, tomate e delicioso hamburguer) - R$ 15,90 \n");
  printf("2.Chickenburguer(Pao, queijo, presunto, alface, tomate e delicioso hamburguer de frango) - R$ 13,90\n");
  printf("3.Veggieburguer(Pao, alface, tomate e delicioso hamburguer vegano de soja) - R$19,90 \n\n");
  printf("Qual seu hamburguer escolhido?\n");

  int hamburguer;
  scanf("%d", &hamburguer);
  switch(hamburguer){
      case 1: printf("Boa escolha! Voce selecionou X-Burguer, o valor dele eh 15,90\n");
      valortotal += 15.90;
      break;
       case 2: printf("Boa escolha! Voce selecionou Chickenburguer, o valor dele eh 13,90\n");
       valortotal += 13.90;
      break;
       case 3: printf("Boa escolha! Voce selecionou Veggie Burguer, o valor dele eh 19,90\n");
       valortotal += 19.90;
      break;
  }

      int hamburguer2;
  scanf("%d", &hamburguer2);
  switch(hamburguer2){
      case 1: printf("De novo uma boa escolha! Voce selecionou X-Burguer, o valor dele eh 15,90\n");
      valortotal += 15.90;
      break;
       case 2: printf("De novo uma boa escolha! Voce selecionou Chickenburguer, o valor dele eh 13,90\n");
       valortotal += 13.90;
      break;
       case 3: printf("De novo uma escolha! Voce selecionou Veggie Burguer, o valor dele eh 19,90\n");
       valortotal += 19.90;
      break;
      case 0: printf("Tudo bem, vamos para o proximo passo\n");
      break;

  }
  printf("O valor total é de: %.2f\n\n", valortotal);


  printf("Nossas bebidas:\n");
  printf("1.Suco de Laranja - R$ 5,50 \n");
  printf("2.Coca-Cola - R$ 4,90\n");
  printf("3. Limonada - R$ 6,70 \n\n");
  printf("Qual sua bebiba escolhido?\n");

  int bebida;
  scanf("%d", &bebida);
  switch(bebida){
      case 1: printf("Boa escolha! Voce selecionou Suco de Laranja, o valor dele eh 5,50\n");
      valortotal += 5.50;
      break;
       case 2: printf("Boa escolha! Voce selecionou Coca-cola, o valor dele eh 4,90\n");
       valortotal += 4.90;
      break;
       case 3: printf("Boa escolha! Voce selecionou Limonada, o valor dele eh 6,70\n");
       valortotal += 6.70;
      break;
  }
  printf("O valor total é de: %.2f\n\n", valortotal);

  printf("Nossas sobremesas:\n");
  printf("1.Bolo de chocolate - R$ 5,50 \n");
  printf("2.Brownie - R$ 4,90\n");
  printf("3.Pudim - R$ 10,70 \n\n");
  printf("Qual sua bebiba escolhido?\n");

  int sobremesa;
  scanf("%d", &bebida);
  switch(bebida){
      case 1: printf("Boa escolha! Voce selecionou Bolo de Chocolate, o valor dele eh 5,50\n");
      valortotal += 5.50;
      break;
       case 2: printf("Boa escolha! Voce selecionou Brownie, o valor dele eh 4,90\n");
       valortotal += 4.90;
      break;
       case 3: printf("Boa escolha! Voce selecionou Pudim, o valor dele eh 10,70\n");
       valortotal += 10.70;
      break;
  }
  printf("O valor final é de: %.2f\n\n", valortotal);
   return 0; }
