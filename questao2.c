#include <stdio.h>


    int main() {
        int i=3, j=5;
            int *p, *q;
            p = &i;
            q = &j;
            printf("%x\n", p);

            //vai mostrar o endereço de memoria de i na maquina, que no caso é pra onde o ponteiro p aponta

            printf("%x\n", q);

            //vai mostrar o endereço de memoria de j na maquina, que no caso é pra onde o ponteiro q aponta

            printf("%i\n", p==&i);
            
            //vai mostar true(1) pois p aponta para o endereço de i
            
            printf("%i\n", *p-*q);
            
            //vai mostrar o que está dentro do endereço que p aponta subtraido do que está dentro do endereço que q aponta
            // resultando em -2
            
            printf("%d\n", 3-*p/(*q)+7);
            
            //vai mostrar (3 - (o valor que está dentro do endereço que p aponta dividido pelo valor dentro do
            //endereço que q aponta)+ 7).
            //3 - 3/5 + 7 -- como 3/5 não é inteiro 3/5=0  ---//3-0+7 = 10
            return 0;
        }
