#include <stdio.h>

int main ( void ) {
	int lengths[11];
	int i, c, nc, j;

	nc = j = i = 0;

	for ( i = 0; i < 11; i++ ) {
		lengths[i] = 0;
	}
	
	while ( ( c = getchar() ) != EOF ) {
		nc++;
		if ( c == ' ' || c == '\n' || c == '\t' ) {
			--nc;
			++lengths[nc];
			nc = 0;
		}
	}
	for ( i = 1; i < 11; i++ ) {
		printf("%2d | ", i);
		
		for ( j = 0; j < lengths [i]; j++ ) {
			putchar('*');
		}
		putchar( '\n' );
	}	
	return 0;
}
