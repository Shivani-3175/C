#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Size 5
int main()
{
    int i=0,Bills[7]={0},Ocnt=0;

    printf("\n Enter Any Number");

    for(i=0;i<7;i++)

    {
        printf("\n Enter Element No %d :",i++);
        scanf("%d",&Bills[i]);

        if(Bills[i] % 2==1)
        {
            Ocnt++;
        }
    }
    printf("\n\n===== Count of odd number is %d.",Ocnt);
    getch();
    return 0;
}
