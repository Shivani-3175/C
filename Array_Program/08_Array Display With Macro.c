#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define BillCnt 5

int main()
{
 int i=0, Bills[BillCnt] = {0}, Billsum =0;

 printf("\n Enter Todays Bills \n ");

 for(i = 0;i < BillCnt;i++)
 {
  printf("\n Enter Bill No %d=",i+1);
  scanf("%d",&Bills[i]);

  Billsum=Billsum+Bills[i];
 }
 getch();
 system("cls");

 printf("\n\n Bills in Array are \n\n");

 for(i = 0; i < BillCnt; i++)
 {
  printf("\n Value of %d Bill=%d",i+101,Bills[i]);
 }
 printf("\n\n addition of Today All Bills =%d.",Billsum);
 getch();
 return 0;
}
