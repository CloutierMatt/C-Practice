#include <stdio.h>

int main ( void ) {
	int c, i, curl = 0;
	int leng[11];
	
	for ( i = 1; i <= 11; i++ ) {
		leng[i] = 0;
	}

	while ( ( c = getchar() ) != EOF ) {
		curl++;
		if ( c == ' ' || c == '\t' || c == '\n') {
			curl--;
			leng[curl]++;

			curl = 0;
		}
	}
	int j = 0;
	int k = 0;
	for ( k = 1; k <= 11; k++ ) {
		putchar('\n');
		printf("%d .) %d", k, leng[k] );
	}	
	return 0;
}
