#include <stdio.h>

int main( void ) { 

	char buffer;
	char hex[264];
	int i = 0;
	int j = 0;
	int k = 0;
	int total = 0;
	int hold = 0;	


	while ( ( buffer = getchar() ) != '\n' ) {
		hex[i] = buffer;
		i++;
	}
	
	for (j=0; j < i; j++) {
		printf("%c",hex[j]);
	}

	printf("%d", i - 1);
	
	while ( i >= 0 ) {
		
		switch( hex[k] ) {
			
			case 1:
				hold = 1;
				break;
			case 2:
				hold = 2;
				break;
			case 3: 
				hold = 3;
				break;
			case 4: 
				hold = 4;
				break;
			case 5:
				hold = 5;
				break;	
			case 6:
				hold = 6;
				break;
			case 7:
				hold = 7;
				break;
			case 8:
				hold = 8;
				break;
			case 9:
				hold = 9;
				break;
			case A:
				hold = 10;
				break;	
			case B:
				hold = 11;
				break;
			case C:
				hold = 12;
				break;
			case D:
				hold = 13;
				break;
			case E:
				hold = 14;
				break;
			case F:
				hold = 15;
				break;
		}
		k++
	}
	
	return 0;
}
