#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define SUCCESS 0
#define FAIL   -1


#define ONE    0
#define TWO    0
#define THREE  0
#define FOUR   0
#define FIVE   0
#define SIX    0
#define SEVEN  0
#define EIGHT  0
#define NINE   0
#define TEN    0
#define ELEVEN   0
#define TWELVE   0
#define FOURTEEN 1
#define TWENTY_SIX    0
#define TWENTY_EIGHT    0
#define THIRTY_ONE    0

#define SEVENTY 0
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

#if TWO
#if 0
main()
{
    long buf[5];
    long profit, bonus;
    printf("Please input bound.\n");
    scanf("%ld", &profit);
    printf("profit=%ld\n", profit);

    buf[0] = 0;
    buf[1] = 100000*0.1;
    buf[2] = buf[1] + 100000*0.075;
    buf[3] = buf[2] + 200000*0.05;
    buf[4] = buf[3] + 200000*0.03;
    buf[5] = buf[4] + 400000*0.015;


    if(profit<=100000)
    {
        bonus = profit*0.1;
    }
    else if(profit<=200000)
    {
        bonus = buf[1] + (profit-100000)*0.075;
    }
    else if(profit<=400000)
    {
        bonus = buf[2] + (profit-200000)*0.05;
    }
    else if(profit<=600000)
    {
        bonus = buf[3] + (profit-400000)*0.03;
    }
    else if(profit<=1000000)
    {
        bonus = buf[4] + (profit-600000)*0.015;
    }
    else
    {
        bonus = buf[5] + (profit-1000000)*0.01;
    }

    printf("bonus=%ld\n", bonus);

}
#endif
#if 0
long func(long profit)
{
    long bonus = 0;
    if(profit > 1000000)
    {
       bonus = (profit - 1000000)*0.01 + func(1000000);
    }
    else if(profit > 600000)
    {
       bonus = (profit - 600000)*0.015 + func(600000);
    }
    else if(profit > 400000)
    {
       bonus = (profit - 400000)*0.03 + func(400000);
    }
    else if(profit > 200000)
    {
       bonus = (profit - 200000)*0.05 + func(200000);
    }
    else if(profit > 100000)
    {
       bonus = (profit - 100000)*0.075 + func(100000);
    }
    else
    {
        bonus = profit*0.1;
    }

    return bonus;
}
main()
{
    long profit = 0;
    long bonus = 0;
    printf("Please input profit.\n");
    scanf("%ld", &profit);
    printf("profit = %ld\n", profit);

    bonus = func(profit);
    printf("bonus = %ld\n", bonus);
    
}
#endif

int main()
{
int z,i;
float sum=0;
printf("input money:");
scanf("%d",&i);
if(i<=100000)
z=1;
else if(i<=200000&&i>100000)
z=2;
else if(i<=400000&&i>200000)
z=4;
else if(i<=600000&&i>400000)
z=6;
else if(i<=1000000&i>600000)
z=10;
else if(i>1000000)
z=11;
switch(z)
{
case 11:sum+=(i-1000000)*0.01;i=1000000;
case 10:sum+=(i-600000)*0.015;i=600000;
case 6:sum+=(i-400000)*0.03;i=400000;
case 4:sum+=(i-200000)*0.05;i=200000;
case 2:sum+=(i-100000)*0.075;i=100000;
case 1:sum+=i*0.1;break;
}
printf("Bonus=%lf\n",sum);
return 0;
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
#if FOUR
main()
{
    int year = 0;
    int month = 0;
    int day = 0;
    int sum = 0;
    int buf[12]={0,31,28,31,30,31,30,31,31,30,31,30};
    int jx;
    printf("intput year\n");
    scanf("%d", &year);
    printf("intput month\n");
    scanf("%d", &month);
    printf("intput month\n");
    scanf("%d", &day);
    if(year > 2009)
    {
        printf("error year\n"); return;
    }
    if(month>12||month<1)
    {
        printf("error month\n"); return;
    }
    else if(day>31)
    {
        printf("error day\n"); return;
    }
    else
    printf("%04d-%02d-%02d\n", year, month, day);

    if((0 == year%400)||(0==year%4&&0!=year%100))
    {
        if(month>2)//¥Û”⁄2‘¬
        {
            sum += 1;//»ÚƒÍº”¡À1ÃÏ
        }
    }
        
    for(jx=0; jx<month; jx++)
    {
        sum += buf[jx];//Ω´÷Æ«∞µƒ‘¬∑›œ‡º”
    }
    sum += day;

    printf("total day = %d\n", sum);

}
#endif

#if FIVE
void temp(int *small, int *big)
{
    int t = 0;
    if(*small > *big)
    {
        t = *small;
        *small = *big;
        *big = t;
    }
}
main()
{
    int x=0, y=0, z=0;
    scanf("%d,%d,%d", &x,&y,&z);

    temp(&x,&y);
    temp(&x,&z);
    temp(&y,&z);

/**
if(x>y)
{
    temp=x;x=y;y=temp;
}

if(x>z)
{
    temp=x;x=z;z=temp;
}
if(y>z)
{
    temp=y;y=z;z=temp;
}
**/
printf("%d,%d,%d\n",x, y, z);
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
            printf("%d*%d=%-2d ", j, i, i*j);/* %-2d Ë°®Á§∫ Êï∞ÂÄºÂç†‰∏§‰ΩçÔºå‰∏îÂ∑¶ÂØπÈΩê*/
        }
        printf("\n");
    }
}
#endif
#if 0
typedef enum tagType
{
    HI_LOG3 = 3,
    HI_LOG4,
    HI_LOG5,
    HI_LOG6,
    HI_LOG7,
    HI_LOG_MAX,
}HI_TYPE_E;

static char *pcBuf = NULL;
int test(char *pcData, int len)
{
    char ucCmd = (char)(*pcData);
    HI_TYPE_E enHiType = (HI_TYPE_E)(*pcData);
    printf("data=%s, cmd=%d\n", pcData, ucCmd);

    switch(enHiType)
    {
        case HI_LOG3:
            printf("log3\n");
            break;
        case HI_LOG4:
            printf("log4\n");
            break;
        case HI_LOG5:
            printf("log5\n");
            break;
        case HI_LOG6:
            printf("log6\n");
            break;
        default:
            printf("default log\n");
            break;
    }

    return 1;
}
#endif
#if NINE
main()
{
    int ix=0, jx=0;
    for(ix=0; ix<8; ix++)
    {
        for(jx=0; jx<8; jx++)
        {
            if(0 == (ix+jx)%2)
            {
                printf("%c%c", 219, 219);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}
#endif

#if TEN
main()
{
  int ix=0, jx=0;
  printf("%c%c\n", 1, 2);

  for(ix=1;ix<7;ix++)
  {
    //for(jx=0;jx<ix;jx++)
    for(jx=1; jx<7; jx++)
    {
        //printf("%c%c", 219, 219);
        if(jx < 7-ix )
        {printf("  ");}
        else
        {printf("%c%c", 219, 219);}
    }
    printf("\n");
  }
  
}

#endif
#if ELEVEN
/*  ÁªèÂÖ∏ÈóÆÈ¢òÔºå‰∏§‰∏™ÂÖîÂ≠êÁ¨¨‰∏â‰∏™ÊúàÂºÄÂßãÁîüÂ∞èÂÖîÂ≠êÁöÑÈóÆÈ¢ò   ***/

main()
{
long f1=1,f2=1,tmp=0;
int jx=0;
printf("1:1\n2:1\n");
    for(jx=3;jx<20;jx++)
    {
        printf("%d:%d\n", jx, f1+f2);
        tmp = f2;
        f2=f1+f2;
        f1=tmp;
    }
}
#endif

#if TWELVE
#if 1
main()
{
  int ix=0, jx=0, count=0;
  for(ix=101; ix<200; ix++)
  {
    for(jx=2; jx<ix; jx++)
    {
        if(0 == ix%jx) break;
    }
    if(ix == jx)
    {
      count++;
      printf("%d ", ix);
      if(0 == count%10)printf("\n");
    }
  }

  printf("count = %d\n", count);
}
#else

main()
{
int m,i,k,h=0,leap=1;
printf("\n");
for(m=101;m<=200;m++)
{
    k=sqrt(m+1);
    for(i=2;i<=k;i++)
        if(m%i==0)
        {leap=0;break;}
        
    if(leap)
    {
        printf("%-4d",m);h++;
        if(h%10==0)
        printf("\n");
    }
    leap=1;
}
printf("\nThe total is %d",h);
}
#endif
#endif


#if FOURTEEN
main()
{
    int n,i;
    printf("\n please input a number:\n");
    scanf("%d",&n);
    printf("%d=",n);
    for(i=2; i<=n; i++)
    {
        while(n!=i)
        {
            if(0 == n%i)
            {
                printf("%d*",i);
                n=n/i;
            }
            else
            {
                break;
            }
        } 
   }//end of for cycle

   printf("%d \n",n);
}
#endif
#if TWENTY_SIX
int f(int n)
{
 if(1 == n)
 {
    return 1;
 }
 else
 {
    return n*f(n-1);
 }
}

main()
{
    int num = 0, jx=0;
    printf("Please input a number:\n");
    scanf("%d", &num);
    printf("%d!=%d", num, num);
    for(jx=num-1;jx>0;jx--)
    {
        printf("*%d", jx);
    }
    printf("= %d\n", f(num));

}
#endif

#if TWENTY_EIGHT
main()
{
    long num = 0;

    scanf("%ld", &num);
    if(num > 99999)
    {printf("too big\n"); return;}
    else if(num <= 0)
    {printf("too small\n"); return;}
    else
    {}

    while(num > 0)
    {
        printf("%ld ",num%10);
        num /= 10;
    };
    printf("\n");
}
#endif

#if THIRTY_ONE
//char **ppBuf={"monday", }
char *pc1 = "monday";
char *pc2 = "tuesday";
char *pc3 = "wendesday";
char *pc4 = "thursday";
char *pc5 = "friday";
char *pc6 = "saturday";
char *pc7 = "sunday";
char *pcBuf[7];// = {pc1, pc2, pc3, pc4, pc5, pc6, pc7};

main()
{
pcBuf[0] = pc1;
pcBuf[1] = pc2;
pcBuf[2] = pc3;
pcBuf[3] = pc4;
pcBuf[4] = pc5;
pcBuf[5] = pc6;
pcBuf[6] = pc7;

    char *pc;
    char zimu;
    int ix, count=0, flag=0;
    scanf("%c", &zimu);
    printf("zimu=%c\n", zimu);

    for(ix=0; ix<7; ix++)
    {
        pc = &pcBuf[ix];
        if((NULL!=pc)&&(zimu == *pc))
        {
            flag++;
            count = ix;
        }
    }

    if(flag == 1)
        printf("%s\n", pcBuf[ix]);
}
#endif

#if SEVENTY

main()
{
int len;
char str[10];
printf("please input a string:\n");
//scanf("%s",&str);
gets(str);
if(NULL == str)
{
    printf("error!\n");
    return;
}
len=length(str);
printf("the string has %d characters.\n",len);
}

//length(p)
//char *p;
length(char *p)
{
int n;
n=0;
while(0 != *p++)
{
n++;
}
return n;
}

#endif
#if 0
main()
{
char a[] = "abcdefbcdghbcd";
char b[] = "bcd";
//char a[] = {'a','b','c','d','e','f','g','h'};
//char b[] = {'a','b','c'};
char *pa = a;
char *pb = b;

printf("a=%s, b=%s\n", a, b);
printf("sizeof(a)=%d\n", sizeof(a));
printf("sizeof(b)=%d\n", sizeof(b));

#if 1
/***/
while(0 != *pa)
{
    if((0!=*pb)&&(*pa++ == *pb))
    {
        pb++;
        if(0==*pb)
        {printf("find abc\n"); pb = b;}
    }
    else
    {
         pb = b;
     }
}/***/
#endif
}
#endif
