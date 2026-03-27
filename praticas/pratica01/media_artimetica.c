#include <stdio.h>

float calcula_media_aritmetica(int n,float a, float b, float c, float d, float e) {
    float soma = 0.0f;

    if(n <= 0 || n > 5) {
        return 0.0f;
    }

    if(n >= 1) soma += a;
    if(n >= 2) soma += b;
    if(n >= 3) soma += c;
    if(n >= 4) soma += d;
    if(n >= 5) soma += e;
   
    return soma / n;

}
int main() {
    
    float media = 0.0f;

    media = calcula_media_aritmetica(0, 10, 20, 30, 40, 50);
    printf("n = 0, media = %.1f => %i\n", media, media == 0);
    
    media = calcula_media_aritmetica(1, 10, 0, 0, 0, 0);
    printf("n = 1, media = %.1f => %i\n", media, media == 10.0);
    
    media = calcula_media_aritmetica(2, 10, 20, 0, 0, 0);
    printf("n = 2, media = %.1f => %i\n", media, media == 15.0);
    
    media = calcula_media_aritmetica(3, 10, 20, 30, 0, 0);
    printf("n = 3, media = %.1f => %i\n", media, media == 20.0);
    
    media = calcula_media_aritmetica(4, 10, 20, 30, 40, 0);
    printf("n = 4, media = %.1f => %i\n", media, media == 25.0);

    media = calcula_media_aritmetica(5, 10, 20, 30, 40, 50);
    printf("n = 5, media = %.1f => %i\n", media, media == 30.0);

    return 0;
}