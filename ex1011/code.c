#include <stdio.h>
#include <math.h>

int main(){
    double pi = 3.14159, raio, volume;
    scanf("%lf", &raio);
    volume = (4/3.0) * pi * pow(raio, 3);
    printf("VOLUME = %.3lf\n", volume);
    return 0;
}

/* Não esqueça de remover os comentários de código antes de enviar
By https://github.com/Gabriel-Matias07 */