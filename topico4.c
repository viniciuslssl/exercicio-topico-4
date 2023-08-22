#include<stdio.h>
int main(){
    float valor, taxa, valor_convertido;
    printf("Por favor informar o valor do produto R$: ");
    scanf("%f", &valor);

      printf("Por favor informar a taxa de reais para dolares: ");
    scanf("%f", &taxa);

    valor_convertido = valor * taxa;

    printf("valor original: R$ %.f\nTaxa de conversao: %.2f\nValor convertido: US$ %.2f\n", valor,taxa,valor_convertido);

    return 0;
}