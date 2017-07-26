#include <stdio.h>
void main()
{

float a,b,c;

while(1)
{
printf ("Enter the value of a-");
scanf ("%f",&a);
printf ("\nEnter the value of b-");
scanf ("%f",&b);
printf ("\nEnter the value of c-");
scanf ("%f",&c);

if (a>b&&b>c)
{

printf(" max: a %f  ",a);
}
else if (b>a&&b>c)

{printf("max: b %f ",b);
}
else if (c>b&&c>a)
{

printf("max: c %f ",c);
}



printf("\n\n\n");
}
}
