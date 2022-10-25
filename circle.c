#include <stdio.h>
#include <math.h>

#define PI 3.14

int main ( void ) {
        float rad = 0.0;
        double area = 0;
        double circum = 0;

        printf("Please enter the radius of the circle: ");
        scanf("%f", &rad);
        putchar('\n');
        
        area = calc_area(rad);
        circum = calc_circum(rad);

        printf("The area of your circle is %f\n", area);
        printf("The circumfrence of your circle is %f\n", circum);
        return 0;
}

int calc_area(double rad) {
        double area = 0;
        area = PI * pow(rad, 2);
        
        return area;
}

int calc_circum(double rad) {
        double circum = 0;

        circum = 2 * PI * rad;

        return circum;
}


