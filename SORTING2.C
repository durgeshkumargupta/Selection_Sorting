/* Selection sorting */
#include<stdio.h>
#include<conio.h>
#define max 5
void main()
{
      int array[max],i,j,temp,poss;
      clrscr();
      for(i=0;i<max;i++)
      {
       printf("Enter data[%d]=",(i+1));
       scanf("%d",&array[i]);
      }
      printf("After sorting data=");
      for(i=0;i<max;i++)
       printf("%3d",array[i]);
      for(i=0;i<(max-1);i++)
      {
	   poss=i;
	   for(j=(i+1);j<max;j++)
	   {
	      if(array[poss]>array[j])
		  poss=j;
	   }
	   if(i!=poss)
	   {
	     temp=array[i];
	     array[i]=array[poss];
	     array[poss]=temp;
	   }
      }
      printf("\nBefore sorting data=");
      for(i=0;i<max;i++)
      printf("%3d",array[i]);
getch();
}


