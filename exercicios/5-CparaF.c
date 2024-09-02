// 5) Escreva um programa que leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit. A fórmula de conversão é: F=(9*C+160) / 5, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius

#include <stdio.h>

float converteFahrenheit(float celsius)
{
    float farenheit;
    farenheit = (9 * celsius + 160) / 5;
    return farenheit;
}

int main()
{
    float celsius, tempF;
    printf("Insira a temperatura em celsius!\n");
    scanf("%f", &celsius);

    tempF = converteFahrenheit(celsius);

    printf("A temperatura %f graus celsius e %f graus Fahrenheit", celsius, tempF);
}
