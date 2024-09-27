#include <stdio.h>

int main(void)
{
    float b, h, A;
    printf("la base del tringolo e': ");
    scanf("%f", &b);
    printf("l'altezza del triangolo e': ");
    scanf("%f", &h);
    A = ( b * h ) / 2;
    printf("l'area del triangolo e': %f", &A);
    return 0;

}
