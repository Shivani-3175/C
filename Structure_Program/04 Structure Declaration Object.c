#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    struct stud
    {
        int Rno;
        char Name[10];
        long long int Mno;
        float Income;
    };

    struct stud std1;

    std1.Rno=11;
    strcpy(std1.Name,"Shiv");
    std1.Mno=9322829726;
    std1.Income =3000;

    printf("\n 1st student Rno=%d",std1.Rno);
    printf("\n 1st student Name=%s",std1.Name);
    printf("\n 1st student Mno=%lld",std1.Mno);
    printf("\n 1st student Income=%0.2f",std1.Income);

    getch();
    return 0;
}
