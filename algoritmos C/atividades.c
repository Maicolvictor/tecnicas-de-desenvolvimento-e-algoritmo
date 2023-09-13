#include <stdio.h>
#include <math.h>

int main(){
    
    //AREA DO CIRCULO DO RAIO
    
    float area, raio;
    
    printf("\n digite o raio: ");
    scanf("%f", &raio);
    
    area = 3.141532 * raio * raio;
    printf("\n a  area do circulo de raio é %3f = %.3f", raio, area);

    printf("\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>");
    
    //FORMULA DE BHASKARA
    
    int valor_x1, valor_x2, valor_b, valor_a, valor_c, valor_delta;
    
    printf("digite o valor de a: ");
    scanf("%d", &valor_a);
    printf("\n digite o valor de b: ");
    scanf("%d", &valor_b);
    printf("\n digite o valor de c: ");
    scanf("%d", &valor_c);
    
    valor_delta = (valor_b * valor_b) - 4 * valor_a * valor_c;
    printf("valor de delta é: %d", valor_delta);
    
    valor_x1 = (-valor_b + sqrt(valor_delta) / (2 * valor_a));
    valor_x2 = (-valor_b - sqrt(valor_delta) / (2 * valor_a));
    printf("\n o valor de x1 é : %d", valor_x1);
    printf("\n o valor de x2 é : %d", valor_x2);
    
    printf("\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>");
    
    //VELOCIDADE MEDIA
    
    int s, so, vt;
    
    printf("\n digite o espaço: ");
    scanf("%d", &s);
    printf("\n digite o tempo: ");
    scanf("%d", &vt);
    
    so = s/vt;
    printf("\n a velocide media é de %d", so);
    
    
    printf("\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>");
    
    //VOLUME DE UMA ESFERA
    
    float vol, raio;
    printf("digite o valor do raio: ");
    scanf("%f", &raio);
    
    vol = 4/3* 3.141592 *raio*raio*raio/3;
    printf("\n o volume é %3f", vol);
    
    printf("\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>");
    
    //MEDIA DE 5 NUMEROS
    
    int n1, n2, n3, n4, n5;
    float media_n;
    printf("\nnumero 1: ");
    scanf("%d", &n1);
    printf("\nnumero 2: ");
    scanf("%d", &n2);
    printf("\nnumero 3: ");
    scanf("%d", &n3);
    printf("\nnumero 4: ");
    scanf("%d", &n4);
    printf("\nnumero 5: ");
    scanf("%d", &n5);
    
    media_n = (n1 + n2 + n3 + n4 + n5) / 5;
    printf("a media é: %.2f", media_n);
    
    printf("\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>");
    
    //VELOCIDADE EM METROS POR SEGUNDOS
    
    float velo, met;
    
    printf("velocidade em km: ");
    scanf("%f", &velo);

    met = velo * 3.6;
    printf("a velocidade em ms é %.2f", met);
    
    printf("\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>");
    
    //INFORMAR DOIS NUMEROS E DIZER O DIVISOR, DIVIDENDO, QUOCIENTE E O RESTO
    
    float numb1, numb2, dividendo, divisor, quociente;
    int rest;
    
    printf("digite o numero 1: ");
    scanf("%f", &numb1);
    printf("\n digite o numero 2: ");
    scanf("%f", &numb2);
    
    dividendo = numb1;
    divisor = numb2;
    quociente = numb1 / numb2;
    rest = (quociente * numb2) - numb1;
    printf("\n o dividendo é %g", dividendo);
    printf("\n o divisor é %g", divisor);
    printf("\n o quociente é %g", quociente);
    printf("\n o resto é %d", rest);
    
    printf("\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>");
    
    //AREA E PERIMETRO DO TRIANGULO
    
    int base, altura, area;
    printf("base: ");
    scanf("%d", &base);
    printf("\naltura: ");
    scanf("%d", &altura);
    
    area = base * altura / 2;
    
    printf("\na area é %d", area);
    
    int lad1, lad2, lad3, p;
    printf("informe o lado 1: ");
    scanf("%d", &lad1);
    printf("\ninforme o lado 2:")
    scanf("%d", &lad2);
    printf("\ninforme o lado 3: ");
    p = lad1 + lad2 + lad3;
    printf("o perimetro é: %d", p);

    printf("\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>");
    
    //TRAMSFORMAR REAL PARA DOLAR DE ACORDO COM A COTAÇÃO DO USUARIO
    
    float reais, cot, dol;
    printf("valor em reais: ");
    scanf("%f", &reais);
    printf("\ncotacao do dolar");
    scanf("%f", &cot);
    dol = reais * cot;
    
    printf("o valor de reais para dolar é %g", dol);
}