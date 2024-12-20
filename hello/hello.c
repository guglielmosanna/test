#include <stdio.h>

int main()
{
    printf("Hello World!!!\n\n\n");

    char name[32];

    printf("inserisci un nome: ");

    scanf("%s", name);

    printf("\nhello\t%s\n\n\n", name);
    
    return 0;
}