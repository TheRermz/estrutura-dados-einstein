// 6) Escreva um programa que leia uma temperatura em graus Fahrenheit e apresente-a convertida em graus Celsius. A fórmula de conversão é: ºC = (°F − 32)*5/9 sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.

#include <stdio.h>

float converteCelsius(float fahrenheit)
{
    float celsius;
    celsius = ((fahrenheit - 32) * 5) / 9;
    return celsius;
}

int main()
{
    float fahrenheit, res;

    printf("Insira a temperatura em graus Fahrenheit!!\n");
    scanf("%f", &fahrenheit);

    res = converteCelsius(fahrenheit);
    printf("A temperatura %f graus Fahrenheit e %f graus Celsius", fahrenheit, res);
}
