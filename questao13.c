



O uso de ponteiro para função tem o papel de definir qual função será executada sem precisar escrever o nome da função. O ponteiro sabe qual a função desejada através de um outro ponto do código, que mostra a definição de qual função é para ser executada.


#include <stdio.h>
#include <string.h>
void PrintString (char *str, int (*func)(const char *));
main (void)
{
        char String [20]=" questao 13.";
        int (*p)(const char *);
        p=puts;
        PrintString (String, p);
        return 0;
}
void PrintString (char *str, int (*func)(const char *))
{
        (*func)(str);
        func(str);
}
