#include <stdio.h>

int main()
{
    int i=4094, *p;
    p = &i;
    printf("%x %d %d %d %d\n", p,*p+2,**&p,3**p,**&p+4);

    //O primeiro valor a ser exibido sera o de p em hexadecimal, pois o fator %x faz retornar um inteiro na base hexadecimal
    // O segundo valor a ser exibido sera o conteudo de i+2, no caso sera o valor 4096
    // O terceiro valor sera o conteudo do conteudo do endereço de p, que no caso será o próprio i
    // O quarto valor a ser exibido sera o  conteudo de p multiplicado por 3
    // O ultimo valor a ser exibido sera o valor de **&p que no caso e o valor de i, somado com 4, resultando em 4098

    return 0;
}
