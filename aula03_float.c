#include  <stdio.h>

int main()
{
    float n1, n2, n3;
    float media;
    
    char nome[10];
    
    scanf("%s", &nome);
    
    scanf("%f %f %f", &n1, &n2, &n3);
    
    media = (n1+n2+n3)/3.0;
    
    printf("A média do Aluno %s foi %.1f. \n", nome ,media);
    
    
    if (media < 0 || media >10)
        printf("algum dos valores informados está errado");
    
    if(media >= 6){
        printf("O aluno foi aprovado");
    } else if (media >=5 && media<6){ 
        printf("O aluno esta de recuperação");
    }else {
        printf("O aluno foi reprovado");
    }
    
    
    return 0;
}
