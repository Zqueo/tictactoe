#include  <stdio.h>

int main()
{
    float n1, n2, n3;
    float media;
    
    scanf("%f %f %f", &n1, &n2, &n3);
    
    media = (n1+n2+n3)/3.0;
    
    printf("A média foi %.1f. \n",media);
    
    return 0;
}