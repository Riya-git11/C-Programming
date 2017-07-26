 #include<stdio.h>
 void main()
{
 int n,i,j,k;
 int r;
 while(1)
{
 printf("enter the no. of *\n");
 scanf("%d",&n);
 for(r=1;r<=3;r++)
{
  for(i=1;i<=n;i++)
{
  for(j=1;j<=n-i;j++)
{
  printf(" ");
}
  for(k=1;k<=(2*i)-1;k++)
{
  printf("*");
}
  printf("\n");
}
}
}
}
