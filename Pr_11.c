#include<stdio.h>
void main()
{
int n,i;
int find=0;
int flag=0;
int ch[100];
while(1)
{
printf ("enter the value of no. of content= ",n);
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("please enter the no. --");
scanf("%d",&ch[i]);
}

printf("\n\n");

printf("enter the searching element-");
scanf("%d",&find);
for(i=0;i<n;i++)

{

if(ch[i]==find)
{
printf("The item has been found %d ",i+1);
flag=1;
break;
}
}
 if(flag==0)

printf ("the item was not find");

flag=0;

printf("\n\n");
}
}
