/*

https://www.onlinegdb.com/

"Bem-vindo ao nosso jogo de adivinhação!" \n
    


"\nTentativa %d \n"

"Qual é o seu chute? \n"

"Você chutou %d! \n"

"Parabéns! Você acertou! \n"

"Seu chute foi maior que o número secreto. \n"

"Seu chute foi menor que o número secreto. \n"


"FIM DE JOGO! \n"

"Você acertou na tentativa %d !\n"



"Você não pode chutar números menores ou iguais a 0! \n"

"Você não pode chutar números maiores que 100! \n"

*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Bem-vindo ao nosso jogo de adivinhação!\n");
    
    int numeroSecreto = (rand() % 100)+1;

    int chute, tentativas = 1;
    
    return 0;
}