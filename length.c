#include <stdio.h>
/* print Fahrenheit-Celsius table
	for fahr = 0, 20, ..., 300; floating point version 
	test */
#define LOWER 1
#define UPPER 12

/* Print length conversion table*/
main()
{
    int inch;
	for (inch = LOWER; inch <= UPPER, inch = inch + STEP)
        printf("%3d %6.1f/n", inch, 2.54*inch)
}