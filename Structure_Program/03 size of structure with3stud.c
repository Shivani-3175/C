#include<stdio.h>
#include<conio.h>

struct stud1
{
    char Name[9];
    char city[12];
    int Rno;
    long int Mno;
    float per;
};
struct stud2
{
   int Rno;
   char Nm[9];
   long int Mno;
   char city[12];
   float per;
};
struct stud3
{
    char Nm[9];
    int Rno;
    char city[12];
    long int Mno;
    float per;
};

int main()
{
    struct stud1 std1;
    struct stud2 std2;
    struct stud3 std3;

    printf("\n size of 1st structure object %d",sizeof(std1));
    printf("\n size of 2nd structure object %d",sizeof(std2));
    printf("\n size of 3rd structure object %d",sizeof(std3));

    getch();
    return 0;
}
