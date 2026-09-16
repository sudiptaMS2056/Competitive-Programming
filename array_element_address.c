#include<stdio.h>
int main()
{
  int base,i,w,address;
printf("Enter Base Address: ");
scanf("%d",&base);

printf("Enter Element size (in byte):");
scanf("%d",&w);

printf("Enter Index(i):");
scanf("%d",&i);
address = base + (i*w);
printf("\nAddress of A[%d] = %d\n",i,address);
return 0;
}
