// 7. Write a program to calculate the difference between two time periods.
#include <stdio.h>
struct time
{
   int hh, mm, sec;
};
int main()
{
   struct time t1, t2, t3;
   printf("Enter the starting time Period \n");
   scanf("%d%d%d", &t1.hh, &t1.mm, &t1.sec);
   printf("Enter the end time Period\n");
   scanf("%d%d%d", &t2.hh, &t2.mm, &t2.sec);
   printf("%d : %d : %d \n", t1.hh, t1.mm, t1.sec);
   printf("%d : %d : %d \n", t2.hh, t2.mm, t2.sec);
   if (t2.sec < t1.sec)
   {
      t2.mm = t2.mm - 1;
      t2.sec += 60;
   }
   if (t2.mm < t1.mm)
   {
      t2.hh = t2.hh - 1;
      t2.mm = t2.mm + 60;
   }

   t3.hh = t2.hh - t1.hh;
   t3.mm = t2.mm - t1.mm;
   t3.sec = t2.sec - t1.sec;
   printf("\n The difference between two time period is \n");
       printf("%d : %d : %d \n", t3.hh, t3.mm, t3.sec);
}
