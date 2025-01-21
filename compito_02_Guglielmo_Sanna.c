#include <stdio.h>
#include <string.h>

// Macros for categories
#define CATEGORIA_R1 "R1" // Category R1
#define CATEGORIA_R2 "R2" // Category R2
#define CATEGORIA_R3 "R3" // Category R3
#define CATEGORIA_R4 "R4" // Category R4
#define CATEGORIA_R5 "R5" // Category R5

// Macros for recovery percentages
#define PERCENTUALE_R1 85 // Percentage for R1
#define PERCENTUALE_R2 75 // Percentage for R2
#define PERCENTUALE_R3 65 // percentage for R3
#define PERCENTUALE_R4 50 // Percentage for R4
#define PERCENTUALE_R5 40 // Percentage for R5

// Macro to print the author's name
#define NOME printf("\nGuglielmo Sanna");

char categoria[3]; // Creation of the variable "categoria"
double peso;       // Creation of the variable "peso"

int main()
{
    // Prints the author's name
    NOME;

    printf("\nInserisci la categoria RAEE: "); // Asks the user for the category
    scanf("%s", categoria);                    // Reads user's input

    // Same for the weight
    printf("Inserisci il peso in kg.: ");
    scanf("%lf", &peso);

    // Checks the category and calculates recovery and non-recovery weights
    if (strcmp(categoria, CATEGORIA_R1) == 0) // Checks if the category is R1
    {
        double peso_recuperabile = (peso * PERCENTUALE_R1) / 100;    // Calculates recoverable weight
        double peso_irrecuperabile = peso - peso_recuperabile;       // Calculates non-recoverable weight
        printf("\nPeso totale = %.2f", peso);                        // Prints the total weight (%.2f to show only 2 decimals)
        printf("\nPeso recuperabile = %.2f", peso_recuperabile);     // Prints recoverable weight
        printf("\nPeso irrecuperabile = %.2f", peso_irrecuperabile); // Prints non-recoverable weight
    }
    else if (strcmp(categoria, CATEGORIA_R2) == 0) // Same for every category
    {
        double peso_recuperabile = (peso * PERCENTUALE_R2) / 100;
        double peso_irrecuperabile = peso - peso_recuperabile;
        printf("\nPeso totale = %.2f", peso);
        printf("\nPeso recuperabile = %.2f", peso_recuperabile);
        printf("\nPeso irrecuperabile = %.2f", peso_irrecuperabile);
    }
    else if (strcmp(categoria, CATEGORIA_R3) == 0) // Same for every category
    {
        double peso_recuperabile = (peso * PERCENTUALE_R3) / 100;
        double peso_irrecuperabile = peso - peso_recuperabile;
        printf("\nPeso totale = %.2f", peso);
        printf("\nPeso recuperabile = %.2f", peso_recuperabile);
        printf("\nPeso irrecuperabile = %.2f", peso_irrecuperabile);
    }
    else if (strcmp(categoria, CATEGORIA_R4) == 0) // Same for every category
    {
        double peso_recuperabile = (peso * PERCENTUALE_R4) / 100;
        double peso_irrecuperabile = peso - peso_recuperabile;
        printf("\nPeso totale = %.2f", peso);
        printf("\nPeso recuperabile = %.2f", peso_recuperabile);
        printf("\nPeso irrecuperabile = %.2f", peso_irrecuperabile);
    }
    else if (strcmp(categoria, CATEGORIA_R5) == 0) // Same for every category
    {
        double peso_recuperabile = (peso * PERCENTUALE_R5) / 100;
        double peso_irrecuperabile = peso - peso_recuperabile;
        printf("\nPeso totale = %.2f", peso);
        printf("\nPeso recuperabile = %.2f", peso_recuperabile);
        printf("\nPeso irrecuperabile = %.2f", peso_irrecuperabile);
    }
    else
    {
        // In case of an invalid category
        printf("\nCategoria errata");
    }

    // Thanks the user and ends the program
    printf("\nGrazie per aver usato il nostro programma.\n\n\n");

    return 0;
}