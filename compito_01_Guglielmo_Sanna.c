#include <stdio.h> //import functions

char name[32]; //create new string variable max 32 charachters
char surname[32]; //create new string variable max 32 charachters

int main()
{

    printf("inserisci il tuo nome: "); //visualize a question

    scanf("%s", name); //read input
    
    printf("\ninserisci il tuo cognome: "); // \n shortcur for new line

    scanf("%s", surname); //read second input

    printf("\nBenvenuto %s %s!", name, surname); //print phrase with the user input

    printf("\nGrazie per aver usato il nostro programma.\n"); //print seconde phrase

    printf("Ti auguriamo buone feste\n"); //print last phrase

    printf("   *\n"); //print a tree
    printf("  ***\n"); //print a tree
    printf(" *****\n"); //print a tree
    printf("*******\n"); //print a tree
    printf("  ***\n\n\n"); //print a tree

    return 0;
}