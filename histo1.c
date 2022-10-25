
#include <stdio.h>

#define IN 1
#define OUT 0



main() {
	int c, i, j, state, wrds, ltrs;
	int lengths[11];

	for ( i = 0; i <= 11; i++ )
		lengths[i] = 0;

	c = i = wrds = ltrs = 0;
	state = OUT;

	while ((c = getchar()) != EOF) {
		ltrs++;
		if (c == ' ' || c == '\t' || c == '\n' ) {
			ltrs--;
			state = OUT;
		}
		if (state == OUT ) {
			if (ltrs > 0 && ltrs <= 10 )
				++lengths[ltrs];
			state = IN;
			ltrs = 0;
		}
	}

	for ( i = 1; i <= 10; i++ ) {
		printf("|%2d| ", i);
		for (j = 0; j < lengths[i]; j++ )
			putchar('*');
		putchar('\n');
	}
}
