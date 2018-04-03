#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define SUCCESS 0
#define FAIL   -1


#define ONE    0
#define TWO    0
#define THREE  0
#define SIX    0
#define SEVEN  0
#define EIGHT  1

#if ONE
/***  debug by jyf
#define CHECK(num2,num1) do{if(num2 == num1){return FAIL;}}while(0)
int checkNum(int num1, int num2, int num3)
{
    CHECK(num1,num2);
    CHECK(num1,num3);
    CHECK(num2,num3);
    return SUCCESS;
}
int main()
{
    int b = 0;
    int s = 0;
    int g = 0;
    int num = 0;
    int count = 0;

    for(b=1; b<5; b++)
    {
        for(s=1; s<5; s++)
        {
            for(g=1;g<5;g++)
            {
                if(SUCCESS == checkNum(b, s, g))
                {
                    printf("num:%d%d%d\n", b, s, g);
                    count++;
                }
            }
        }
    }
    printf("count = %d\n", count);
    return SUCCESS;
}
*****/

main()
{
    int i,j,k;
    printf("\n");
    for(i=1;i<5;i++)
       for(j=1;j<5;j++)
        for(k=1;k<5;k++)
        {
            if (i!=k&&i!=j&&j!=k)
                printf("%d,%d,%d\n",i,j,k);
        }
}
#endif




#if THREE
/*****
int main()  //jyf debug
{
    int a = 0, b = 0;
    int num = 0;
    for(a=17; a<10000; a++)
    {
        for(b=11; b<a; b++)
        {
            if(168 ==a*a - b*b)
            {
                printf("a = %d, b=%d, num=%d\n", a, b, b*b-100);
                break;
            }
        }
    }

    return 1;
}******/

int main()
{
  long int i,x,y,z;
  for(i=1; i<100000; i++)
  {
    x=sqrt(i+100);
    y=sqrt(i+268);
    if(x*x==i+100&&y*y==i+268)
        printf("\n%ld\n",i);
  }

 return 0;
}
#endif

#if SIX
int main()
{
    printf("****\n");
    printf("*\n");
    printf("*\n");
    printf("****\n");
    return 1;
}
#endif

#if SEVEN
main()
{
char a=176,b=219;
printf("%c%c%c%c%c\n",b,a,a,a,b);
printf("%c%c%c%c%c\n",a,b,a,b,a);
printf("%c%c%c%c%c\n",a,a,b,a,a);
printf("%c%c%c%c%c\n",a,b,a,b,a);
printf("%c%c%c%c%c\n",b,a,a,a,b);
}
#endif

#if EIGHT
main()
{
    int i = 0;
    int j = 0;
    for(i=1;i<10;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d*%d=%-2d ", j, i, i*j);/* %-2d 表示 数值占两位，且左对齐*/
        }
        printf("\n");
    }
}
#endif
