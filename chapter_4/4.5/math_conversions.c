#include <stdio.h>

int main(void)
{
	float f1 = 123.125, f2;
	int i1, i2 = -150;
	char c = 'a';

	i1 = f1; // float to integer conversion
	printf("%f assigned to integer produces %i\n", f1, i1);

	f1 = i2; // integer to float conversion
	printf("%i assigned to float produces %f\n", i2, f1);

	f1 = i2 / 100; // integer / integer
	printf("%i divided by 100 produces %f\n", i2, f1);

	f2 = i2 / 100.0; // integer / float
	printf ("%i divided by 100.0 produces %f\n", i2, f2);

	f2 = (float) i2 / 100; // type cast operator
	printf ("(float) %i divided by 100 produces %f\n", i2, f2);

	return 0;	
}