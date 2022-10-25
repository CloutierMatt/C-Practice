#include <stdio.h>

#define BASS 16
#define MAXHEX 10

int main ( void ) {
        char hex[MAXHEX];
        int i = 0;

        printf("Enter your Hexadecimal number: ");
        while( fgets(hex, MAXHEX, stdin) != NULL) { 
                for ( i = 0; i < MAXHEX; i++) {
                       printf("%c", hex[i]);
                }        
        }
        return 0;                       
}
