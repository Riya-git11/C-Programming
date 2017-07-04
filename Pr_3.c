 #include<stdio.h>
 int main()
 {float ENg,Math,Chem,Stat,ECO,sum,ave,per;
printf("\t \t \t \t Mark Sheet");
printf (" \n \n ENg=");
scanf ("%f",&ENg);
printf("\n\------------------\n");
printf (" Math=");
scanf ("%f",&Math);
printf("\n\------------------\n");
printf (" Chem=");
scanf ("%f",&Chem);
printf("\n\------------------\n");
printf (" Stat=");
scanf ("%f",&Stat);
printf("\n\------------------\n");
printf (" ECO=");
scanf ("%f",&ECO);
printf("\n\------------------\n");
sum=ENg+Math+Chem+Stat+ECO;
printf("\n Total marks \t = %f",sum);
ave=sum/5;
printf("\n Average \t = %f",ave);
per=sum/5;
printf("\n Percentage \t = %f",per);
printf("\n\------------------\n ");

if (per<100)
{
printf("Excellent");
}
else
{
if (per>=90)
{
printf("Outstanding");
}
else
{
if (per>=80)
{
printf("First division");
}
else
{
if (per>=70)
{
printf("Second  division");
}
else
{
if (per>=60)
{
printf("Third  division");
}
else
{
if (per>=50)
{
printf("Promoted");
}
else
{
if (per<50)
{
printf("Fail");
}
}
}
}
}
}
}
}


