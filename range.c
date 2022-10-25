//Finding the range of each type.
#include <stdio.h>
int main (void) {
        signed short int sshortint = 0;
        unsigned short int ushortint = 0;

        signed long int slongint = 0;
        unsigned long int ulongint = 0;

        char charran = 0;
        
        ushortint--;
        ulongint--;
        slongint--;
        sshortint--;

        printf("Max range of unsigned short int: %d\n", ushortint);
        printf("Max range of unsigned long int: %d\n", ulongint);        
        printf("Max range of signed long int: %d\n", slongint);
        printf("Max range of signed short int: %d\n", sshortint);
        return 0;
}



