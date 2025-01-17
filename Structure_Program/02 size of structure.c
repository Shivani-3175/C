#include<stdio.h>
#include<conio.h>

struct stud
{
    char Name[8];
    char city[11];
    int Rno;
    float per;
};

int main()
{
  struct stud std;
  printf("\n size of structure object %d",sizeof(std));

  getch();
  return 0;
}
