#include <stdio.h>
/* print Fahrenheit-Celsius table
	for fahr = 0, 20, ..., 300; floating point version 
	test */
#define LOWER 1
#define UPPER 36
#define STEP 1

/* Print length conversion table*/
main()
{
    int inch;
    char *i = "IN";
    char *c = "CM";
    printf("%3s %6s\n",i,c);
	for (inch = LOWER; inch <= UPPER; inch = inch + STEP)
        printf("%3d %6.2f\n", inch, 2.54*inch);
}