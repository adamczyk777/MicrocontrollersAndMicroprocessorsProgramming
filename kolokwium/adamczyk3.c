// Jakub Adamczyk
//---------------------------------------------------------------
// Test program - grupa 1
//---------------------------------------------------------------

#include <stdlib.h>
#include <stdio.h>

char *binary_op(char *result, char* arg1, char *arg2, int operation );

//---------------------------------------------------------------
// funkcja realizuje operację binarną na argumentach w postaci ciągów
// znaków '0' i '1' i zwraca wynik w postaci takiego samego łańcucha
//
// Parametry:
//    result     - bufor na łańcuch wynikowy
//    arg1, arg2 - argumenty operacji
//    operation  - rodzaj operacji (0=ADD, 1=AND, 2=OR, 3=XOR)
//
// W przypadku gdy długości arg1 i arg2 są różne, operację należy
// wykonać tak, jakby krótszy łańcuch zawierał z lewej strony
// odpowiednią liczbę zer.
//
// Wersja minimum : ADD dla argumentów o identycznych długościach
//---------------------------------------------------------------
 
int main(){
    char arg1[] = "001001";
    char arg2[] = "101010";
    char res[ 65 ];
    int oper = 0;

    printf("Argument 1: %s\n", arg1 );
    printf("Argument 2: %s\n", arg2 );
    printf("Operation : %d\n", oper );
    printf("Result    : %s\n", binary_op( res, arg1, arg2, oper ) );
    printf("Operation : %d\n", 1 );
    printf("Result    : %s\n", binary_op( res, arg1, arg2, 1 ) );
    printf("Operation : %d\n", 2 );
    printf("Result    : %s\n", binary_op( res, arg1, arg2, 2 ) );
    printf("Operation : %d\n", 3 );
    printf("Result    : %s\n", binary_op( res, arg1, arg2, 3 ) );
    printf("Operation : %d\n", 10 );
    printf("Result    : %s\n", binary_op( res, arg1, arg2, 10 ) );
    return 0;
}

