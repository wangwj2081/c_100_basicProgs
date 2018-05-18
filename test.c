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
// 10 -- 19
#define TEN    0
#define ELEVEN   0
#define TWELVE   0
#define THIRTEEN 0
#define FOURTEEN 0
#define FIVETEEN 0
#define SIXTEEN  0
#define SEVENTEEN  0
#define EIGHTTEEN  0
#define NINETEEN   0 //»¹ÓÐÎÊÌâ

// 20 --29
#define TWENTY     0
#define TWENTY_ONE     0
#define TWENTY_TWO   0 //¹Û²ì ÄÄ¸öËã·¨¼òµ¥
#define TWENTY_THREE 0
#define TWENTY_FOUR  0
#define TWENTY_FIVE  0
#define TWENTY_SIX    0
#define TWENTY_SEVEN  0
#define TWENTY_EIGHT  0
#define TWENTY_NINE  0

/*30 -39*/
#define THIRTY    0
#define THIRTY_ONE    0
#define THIRTY_SIX    0
#define THIRTY_SEVEN    0
#define THIRTY_EIGHT  0
#define THIRTY_NINE 0

#define FOURTY  0
#define FOURTY_ONE 0
#define FOURTY_TWO 0
#define FOURTY_THREE 0
#define FOURTY_FOUR 0
#define FOURTY_FIVE 0
#define FOURTY_SIX  1
/**56 ~~ 60**/
//#include "graphics.h"
//in linux env,how to draw graphices

/**62 ~~ 65**/
//62 #include "graphics.h"
//63 #include "graphics.h"
//64 #include "graphics.h" #include "conio.h"
//65 #include "conio.h"


/*****/
#define SIXTY_NINE 0 //Ô¼Éª·òÎÊÌâÖØµã¿´Ò»ÏÂ
#define SEVENTY 0
#define SEVENTY_SEVEN 0

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
        if(month>2)//´óÓÚ2ÔÂ
        {
            sum += 1;//ÈòÄê¼ÓÁË1Ìì
        }
    }
        
    for(jx=0; jx<month; jx++)
    {
        sum += buf[jx];//½«Ö®Ç°µÄÔÂ·ÝÏà¼Ó
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
            printf("%d*%d=%-2d ", j, i, i*j);/* %-2d è¡¨ç¤º æ•°å€¼å ä¸¤ä½ï¼Œä¸”å·¦å¯¹é½*/
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
/*  ç»å…¸é—®é¢˜ï¼Œä¸¤ä¸ªå…”å­ç¬¬ä¸‰ä¸ªæœˆå¼€å§‹ç”Ÿå°å…”å­çš„é—®é¢˜   ***/

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

#if THIRTEEN
/*main()
{
  int num, bai,shi,ge,ix=0;
  for(ix=100; ix<1000; ix++)
  {
    bai = ix/100;
    shi = ix/10%10;
    ge = ix%10;
    
    if(ix == bai*bai*bai + shi*shi*shi + ge*ge*ge){num++;printf("ix=%d\n", ix);}
  }
  printf("num=%d\n", num);
}*/
 main()
{
int i,j,k,n;
printf("'water flower'number is:");
for(n=100;n<1000;n++)
{
i=n/100;/*·Ö½â³ö°ÙÎ»*/
j=n/10%10;/*·Ö½â³öÊ®Î»*/
k=n%10;/*·Ö½â³ö¸öÎ»*/
if(i*100+j*10+k==i*i*i+j*j*j+k*k*k)
{
printf("%-5d",n);
}
}
printf("\n");
}

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

#if FIVETEEN
main()
{
  int score = 0;
  char grade= 0;
  printf("Input the score:\n");
  scanf("%d", &score);
  if(score>100 || score<0){printf("error score\n"); return;}
  grade = (score>=90)?'A':(score>=60)?'B':'C';
  printf("it is %c\n", grade);
}
#endif

#if SIXTEEN
#if 1
main()
{
int m=0, n=0;
int num1=0, num2=0;
int t=0;//temp
printf("Please input two number:\n");
scanf("%d %d", &num1, &num2);
m=num1;
n=num2;
printf("m=%d, n=%d\n", m, n);

if(m<=0 || n<=0)
{
    printf("error. it <= 0\n");
    return;
}
if(m<n){t=m;m=n;n=t;}

while(0!=n){
    t=m%n;
    m=n;
    n=t;
   }

printf("Max common divisor = %d\n", m);
printf("Min common multiple = %d\n", num1*num2/m);
}
#else
main()
{
int m=0, n=0;
int ix=0;//temp
printf("Please input two number:\n");
scanf("%d %d", &m, &n);
printf("m=%d, n=%d\n", m, n);

if(m<=0 || n<=0)
{
    printf("error. it <= 0\n");
    return;
}
if(m<n){ix=m;m=n;n=ix;}

for(ix=n;ix>0;ix--)
{
    if(0==n%ix&&0==m%ix)
    {
        printf("Max common divisor:%d\n", ix);
        break;
    }
}

for(ix=1;ix<=n;ix++)
{
    if(0 == ix*m%n)
    {
        printf("Min common multiple:%d\n", ix*m);
        break;    
    }
}
}
#endif
#endif

#if SEVENTEEN
main()
{
  char c = 0;
  int letter=0, space=0, digit=0, other=0;
  char aBuf[20];
  char *pc;

  memset(aBuf, 0 ,20);
  pc = gets(aBuf);

  printf("aBuf=%s, pc=%s\n", aBuf, pc);

  //while('\n' != (c=getchar()))
  while(0 != (c=*pc++))
  {
    if((c>='a'&&c<='z') || (c>='A'&&c<='Z'))
    {letter++;}
    else if(c>='0'&&c<='9')
    {digit++;}
    else if(c == ' ')
    {space++;}
    else
    {other++;}
  }
  printf("letter:%d, space:%d, digit:%d, other:%d\n", letter, space, digit, other);
}
#endif

#if EIGHTTEEN
#if 0
long func(int a, int n)
{
    int ix, sum=0;
    if(0==n)
    {
        return 0;
    }
    for(ix=0; ix<n; ix++)
    {
        sum = sum*10 + a;
    }
    return sum+func(a, n-1);
}
main()
{
    int a =0, n=0;

    printf("input a n:\n");
    scanf("%d %d", &a, &n);

    printf("a+aa+... = %ld \n", func(a, n));
}
#endif
#if 1

main()
{
int a,n,count=1;
long int sn=0,tn=0;
printf("please input a and n\n");
scanf("%d %d",&a,&n);
printf("a=%d,n=%d\n",a,n);
while(count<=n)
{
tn=tn+a;
sn=sn+tn;
a=a*10;
++count;
}
printf("a+aa+...=%ld \n",sn);
}

#endif
#endif

#if NINETEEN
#if 0
main()
{
  int ix, jx, count=0, flag=0;
  int num=1;
  int buf[1000];
    for(ix=1;ix<1000;ix++)
    {
        num = ix;
        count = 0;
        memset(buf, 0, 1000);
        for(jx=2;jx<num;jx++)
        {
            while(jx != num)
            {
                if(0 == num%jx)
                {
                    num = num/jx;
                    buf[count++]=jx;
                }
                else
                    break;
            }
        }

        num = 0; //¼ÆËã Òò×Ó Ö®ºÍ
        for(jx=0;jx<count;jx++)
        {
            num += buf[jx];
        }
        if(num == ix)
        {printf("find %d\n", ix);if(0 == flag++%10)printf("\n");}
    }
}
#endif

main()
{
static int k[10];
int i,j,n,s;
    for(j=2;j<1000;j++)
    {
        n=-1;
        s=j;
        for(i=1;i<j;i++)
        {
            if((j%i)==0)
            {    n++;
                s=s-i;
                k[n]=i;
            }
        }
        if(s==0)
        {
            printf("%d is a wanshu",j);
            for(i=0;i<n;i++)
            printf("%d,",k[i]);
            printf("%d\n",k[n]);
        }
    }
}
#endif

#if TWENTY
/****
Ò»Çò´Ó100Ã×¸ß¶È×ÔÓÉÂäÏÂ£¬Ã¿´ÎÂäµØºó·´Ìø»ØÔ­¸ß¶ÈµÄÒ»°ë£»ÔÙÂäÏÂ£¬ÇóËüÔÚ
¡¡¡¡¡¡µÚ10´ÎÂäµØÊ±£¬¹²¾­¹ý¶àÉÙÃ×£¿µÚ10´Î·´µ¯¶à¸ß£¿ 
****/
#if 1
main()
{
  float height = 100, sum = 100;
  int jx = 0;
  for(jx=1; jx<10; jx++)
  {
    sum += 100/pow(2,jx)*2;
    /**float aa;int ix;
    for(ix=0,aa=1;ix<jx;ix++)
        aa=aa*2;
    sum += 100/aa*2;**/
  }

  printf("10th sum=%f, 10th height=%f\n", sum, 100/pow(2,jx));
}
#endif
#if 0
main()
{
float sn=100.0,hn=sn/2;
int n;
for(n=2;n<=10;n++)
{
sn=sn+2*hn;/*µÚn´ÎÂäµØÊ±¹²¾­¹ýµÄÃ×Êý*/
hn=hn/2; /*µÚn´Î·´Ìø¸ß¶È*/
}
printf("the total of road is %f\n",sn);
printf("the tenth is %f meter\n",hn);
}
#endif
#endif

#if TWENTY_ONE
#if 0
int func(int n)
{
if(10 == n)
    return 1;
else if(n>0)
{
    return (func(n+1)+1)*2;
}
else
{printf("error, n=%d\n", n);}

return 0;
}

main()
{
  printf("1st sum = %d\n",func(1)); 
}
#endif
main()
{
int day,x1,x2;
day=9;
x2=1;
while(day>0)
{x1=(x2+1)*2;/*µÚÒ»ÌìµÄÌÒ×ÓÊýÊÇµÚ2ÌìÌÒ×ÓÊý¼Ó1ºóµÄ2±¶*/
x2=x1;
day--;
}
printf("the total is %d\n",x1);
}

#endif

#if TWENTY_TWO
#if 0
main()
{
    char a,b,c;
    for(a='x'; a<='z'; a++)
    {
        for(c='x'; c<='z'; c++)
        {
            for(b='x'; b<='z'; b++)
            {
                if(a!='x' && c!='x' &&c !='z')
                {
                    if(a!=b && a!=c && b!=c)
                    {
                        printf("a=%c, b=%c, c=%c\n", a, b, c);
                        break;
                    }
                }
            }
    
        }
    }
}
#endif
main()
{
char i,j,k;/*iÊÇaµÄ¶ÔÊÖ£¬jÊÇbµÄ¶ÔÊÖ£¬kÊÇcµÄ¶ÔÊÖ*/
for(i='x';i<='z';i++) //a
    for(j='x';j<='z';j++) //b
    {
        if(i!=j)
            for(k='x';k<='z';k++) //c
            {
                if(i!=k&&j!=k)
                { if(i!='x'&&k!='x'&&k!='z')
                   printf("order is a--%c\tb--%c\tc--%c\n",i,j,k);
                }
            }
    }
}
#endif

#if TWENTY_THREE
main()
{
int i,j,k;
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=2-i;j++)
            printf(" ");
        
        for(k=0;k<=2*i;k++)
            printf("*");
        
        printf("\n");
    }

    for(i=0;i<=2;i++)
    {
        for(j=0;j<=i;j++)
            printf(" ");
        
        for(k=0;k<=4-2*i;k++)
            printf("*");
        
        printf("\n");
    }
}
#endif

#if TWENTY_FOUR
/* 2/1 + 3/2 + 5/3 +... = ? last 20 */ 
/**main()
{
float sum = 0;
float fenzi = 2, fenmu = 1, t=0;
int ix;
for(ix=1; ix<=20; ix++)
{
    sum += fenzi/fenmu;
    t = fenzi;
    fenzi = fenzi+fenmu;
    fenmu = t;
}

printf("sum = %f\n", sum);

}
**/
main()
{
int n,t,number=20;
float a=2,b=1,s=0;
for(n=1;n<=number;n++)
{
s=s+a/b;
t=a;a=a+b;b=t;/*Õâ²¿·ÖÊÇ³ÌÐòµÄ¹Ø¼ü£¬Çë¶ÁÕß²Â²ÂtµÄ×÷ÓÃ*/
}
printf("sum is %9.6f\n",s);
}
#endif

#if TWENTY_FIVE
/*** 1+2!+3!+...+20! = ? ***/
/**/
main()
{
    long temp=1, sum=0;//Ê¹ÓÃint »áÒç³ö
    int jx=0;
    for(jx=1; jx<=20; jx++)
    {
        temp *=jx;
        sum += temp;
    }

    printf("1+2!+3!+...+20! = %ld\n", sum);
}
/**/
/**
main()
{
float n,s=0,t=1;
for(n=1;n<=20;n++)
{
t*=n;
s+=t;
}
printf("1+2!+3!...+20!=%e\n",s);
}**/
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

#if TWENTY_SEVEN
#if 0
main()
{
int ix;
char ac[5];
printf("Please input 5 chars.\n");
//scanf("%s", ac);

for(ix=0;ix<5;ix++)
{
    ac[ix] = getchar();
    //scanf("%c", &ac[ix]);
}
for(ix=0;ix<5;ix++)
{
    printf("%c ", ac[ix]);
}
printf("\n");

for(ix=5;ix>0;ix--)
{
    printf("%c ", ac[ix-1]);
}
printf("\n");

}
#endif
#if 1
main()
{
    int i=5;
    void palin(int n);
    printf("\40:");
    palin(i);
    printf("\n");
}
void palin(n)
int n;
{
    char next;
    if(n<=1)
    {
        next=getchar();
        printf("\n\0:");
        putchar(next);
    }
    else
    {
        next=getchar();
        palin(n-1);
        putchar(next);
    }
}
#endif
#endif
#if TWENTY_EIGHT
int func(unsigned int n)
{
    if(1 == n) return 10;
    else
    return func(n-1)+2;
}
main()
{
    printf("The age of 5th person is %u\n", func(5));
}
#endif

#if TWENTY_NINE
main()
{
    long num = 0;
    printf("Please input a number:\n");
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

#if THIRTY
#if 0
main()
{
    long num = 0;
    printf("Please input a 5 wei number:\n");
    scanf("%ld", &num);
    if(num<10000 || num>99999)
        {printf("error num, %ld\n", num);return;}

    if(num/10000==num%10 && num/1000%10==num%100/10)
        printf("hui wen shu\n");
    else
        printf(" not hui wen shu\n");

}
#endif
main( )
{
long ge,shi,qian,wan,x;
scanf("%ld",&x);
wan=x/10000;
qian=x%10000/1000;
shi=x%100/10;
ge=x%10;
if (ge==wan&&shi==qian)/*¸öÎ»µÈÓÚÍòÎ»²¢ÇÒÊ®Î»µÈÓÚÇ§Î»*/
¡¡printf("this number is a huiwen\n");
else
¡¡printf("this number is not a huiwen\n");
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


#if THIRTY_SIX
#if 0
main()
{
  int ix, jx, count=1;
  for(ix=2; ix<100; ix++)
  {
    for(jx=2;jx<ix;jx++)
    {
        if(0 == ix%jx) break;
    }
    if(ix == jx)
    {
        printf("%5d ", ix);
        if(0 == count++%5) printf("\n");
    }
  }
  printf("\n");
}
#endif

#define N 101
main()
{
int i,j,line,a[N];
for(i=2;i<N;i++) 
    a[i]=i;

for(i=2;i<sqrt(N);i++)
    for(j=i+1;j<N;j++)
    {
        if(a[i]!=0&&a[j]!=0)
        if(a[j]%a[i]==0)
        a[j]=0;
    }
    printf("\n");

    for(i=2,line=0;i<N;i++)
    {
        if(a[i]!=0)
        {
            printf("%5d",a[i]);
            line++;
        }
        if(line==10)
        {
            printf("\n");
            line=0;
        }
    }
}
#endif

#if THIRTY_SEVEN
#define MAX 5
main()
{
    int ix, jx, temp;
    int num[MAX];
    printf("Please input 10 numbers:\n");
    for(ix=0; ix<MAX;)
    {
    scanf("%d", &num[ix++]);
    }

    for(ix=0; ix<MAX;)
    {
    printf("%d ", num[ix]);
    ix++;
    }
        printf("\n");


    for(ix=0; ix<MAX; ix++)
    {
        for(jx=ix+1; jx<MAX; jx++)
        {
            if(num[ix]>num[jx])
            {
                temp = num[ix];
                num[ix] = num[jx];
                num[jx] = temp;
            }
        }
    }
    
    for(ix=0; ix<MAX;)
    {
    printf("%d ", num[ix]);
    ix++;
    }
    printf("\n");
}
#endif

#if THIRTY_EIGHT
main()
{
    int aiMat[3][3]={1,2,3,4,5,6,7,8,9};
    int ix, jx;
    
    for(ix=0;ix<3;ix++)//ÐÐÊý
    {
        for(jx=0;jx<3;jx++)//ÁÐÊý
            printf("%3d", aiMat[ix][jx]);
        printf("\n");//Ò»ÐÐ Êä³ö½áÊø
    }
    printf("\n");
    
    for(ix=0;ix<3;ix++)
    {
        for(jx=0;jx<3;jx++)
        {
            if(jx==ix || 2==jx+ix)
                {printf("%3d", aiMat[ix][jx]);}
            else
                {printf("   ");}
        }
        printf("\n");
    }
    printf("\n");
}
#if 0
main()
{
float a[3][3],sum=0;
int i,j;
printf("please input rectangle element:\n");
for(i=0;i<3;i++)
for(j=0;j<3;j++)
scanf("%f",&a[i][j]);

for(i=0;i<3;i++)
sum=sum+a[i][i];

printf("duijiaoxian he is %6.2f",sum);
}
#endif
#endif

#if THIRTY_NINE
#if 0
main()
{
    int a[11]={1,4,6,9,13,16,19,28,40,100,120};
    int ix;
    int tm=0, num = 0;
    int temp[12];
    printf("Please input a number:\n");
    scanf("%d", &num);
    memset(temp, 0, sizeof(temp));

    for(ix=0; ix<11; ix++)
    {printf("%d ", a[ix]);}
    printf("\n");

    for(ix=0; ix<11;ix++)
    {
        if(a[ix]<num)
        {
           temp[ix] = a[ix];
        }
        else
        {
            temp[ix] = num;
            break;
        }
    }
    printf("ix =%d \n", ix);

    if(ix < 11)
    memcpy(&temp[ix+1], &a[ix], (11-ix)*sizeof(int));
    else
    temp[ix]=num;

    for(ix=0; ix<12; ix++)
    {
        printf("%d ", temp[ix]);
    }
    printf("\n");
}
#endif
#if 0
main()
{
    int a[11]={1,4,6,9,13,16,19,28,40,100};
    int ix=0, num=0;
    printf("Please input a number.\n");
    scanf("%d", &num);
    while(ix<11){printf("%d ", a[ix++]);}
    printf("\n");

    for(ix=9; ix>=0; ix--)
    {
        if(num < a[ix])
        {
            a[ix+1]=a[ix];
        }
        else
        {
            a[ix+1]=num;
            break;
        }
    }
    if(0 > ix)
    {a[0] = num;}
    ix=0;
    while(ix<11){printf("%d ", a[ix++]);}
    printf("\n");
}
#endif
main()
{
int a[11]={1,4,6,9,13,16,19,28,40,100};
int temp1,temp2,number,end,i,j;
printf("original array is:\n");
for(i=0;i<10;i++)
¡¡printf("%5d",a[i]);
printf("\n");

printf("insert a new number:");
scanf("%d",&number);
end=a[9];

if(number>end)
¡¡a[10]=number;
else
    {for(i=0;i<10;i++)
    {if(a[i]>number)
    {temp1=a[i];
    a[i]=number;
    for(j=i+1;j<11;j++)
    {temp2=a[j];
    a[j]=temp1;
    temp1=temp2;
    }
    break;
    }
    }
    }
for(i=0;i<11;i++)
¡¡printf("%6d",a[i]);
}
#endif

#if FOURTY
#define fourty_N 5
main()
{
int a[fourty_N]={9,6,5,4,1};
int ix=0, t=0;

while(ix<fourty_N)
{
    printf("%2d ", a[ix++]);
}
printf("\n ix=%d\n", ix);

for(ix=0;ix<fourty_N/2; ix++)
{
    t = a[ix];
    a[ix]= a[fourty_N-1-ix];
    a[fourty_N-1-ix] = t;
}

for(ix=0;ix<fourty_N; ix++)
{
    printf("%2d ", a[ix]);
}
printf("\n");

}
#endif


#if FOURTY_ONE
void func()
{
    int ax = 0;
    static int cx = 0;
    printf("ax=%d, cx=%d\n", ax++, cx++);
}

main()
{
    int jx=0;
    for(;jx<5;jx++)
        func();
}

#endif

#if FOURTY_TWO
main()
{
    int i,num;
    num=2;
    for (i=0;i<3;i++)
    {
        printf("\40: The num equal %d \n",num);
        num++;
        {
            auto int num=1;
            printf("\40: The internal block num equal %d \n",num);
            num++;
        }
    }
}
#endif

#if FOURTY_THREE
main()
{
    int i,num;
    num=2;
    for(i=0;i<3;i++)
    {
        printf("\40: The num equal %d \n",num++);
        {
        static int num=1;
        printf("\40:The internal block num equal %d\n",num);
        num++;
        }
    }
}
#endif

#if FOURTY_FOUR
int a,b,c;
void add()
{
    int a=5;
    c=a+b;
}
void main()
{
    a=b=2;
    add();
    printf("The value of c is equal to %d\n",c);
}
#endif

#if FOURTY_FIVE
void main()
{
register int i;//¼Ó¿ìÔËËãËÙ¶È
int tmp=0;
for(i=1;i<=100;i++)
tmp+=i;
printf("The sum is %d\n",tmp);
}
#endif

#if FOURTY_SIX
#define SQA(x) ((x)*(x))
#define TRUE 1
#define FALSE 0
#if 0
main()
{
int num=0;
int ret = TRUE;

while(ret)
{
    scanf("%d", &num);
    printf("%d*%d=%d\n", num, num, SQA(num));

    if(num > 50)
    {
        ret = FALSE;
    }
}
}
#else

void main()
{
int num;
int again=1;
printf("\40: Program will stop if input value less than 50.\n");
while(again)
{
printf("\40:Please input number==>");
scanf("%d",&num);
printf("\40:The square for this number is %d \n",SQA(num));
if(num>=50)
again=TRUE;
else
again=FALSE;
}
}
#endif
#endif

#if SIXTY_NINE
#if 1
//#define NMAX 8
typedef struct tagTest
{
    int flag;
}stTest;

main()
{
    int total=0, dead=0, live=0;
    int count=0, ix=0;
    int NMAX = 50;
    stTest st[NMAX];
    for(ix=0; ix<NMAX; ix++)
    {
        st[ix].flag = 1;
    }
    
    live = total = NMAX;
    ix=0;

    while(live>1)
    {
        if(1 == st[ix].flag)
        {
            count++;
        }
        if(3 == count)
        {
            st[ix].flag = 0;
            printf("%d dead\n", ix);
            count=0;
            dead++;
            live--;
        }
        ix++;
        if(NMAX == ix)
        {
            ix = 0;
        }
    }

    for(ix=0; ix<NMAX; ix++)
    {
        if(1 == st[ix].flag)
        {
            printf("******************\n%d live\n", ix);
            break;
        }
    }
}
#endif
#if 0
#define nmax 50
main()
{
    int i,k,m,n,num[nmax],*p;
    printf("please input the total of numbers:");
    scanf("%d",&n);
    p=num;

    for(i=0;i<n;i++)
        *(p+i)=i+1;

    i=0;
    k=0;
    m=0;

    while(m<n-1)
    {
        if(*(p+i)!=0) k++;
        
        if(k==3)
        {
            *(p+i)=0;
            k=0;//start to recount 
            m++;//dead ++
        }
        i++;
        
        if(i==n) i=0;
    }

    while(*p==0) p++;

    printf("%d is left\n",*p);
}
#endif
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

#if SEVENTY_SEVEN
extern char **environ;
main()
{
    int jx = 0;
    char** ppcTemp = NULL;
    char* apcRen[] = {"LiMing", "XiaoHong", "WangXiao", "LiGang", "QiCang"};
    printf("sizeof(apcRen)=%ld, sizeof(char*)=%ld\n", sizeof(apcRen), sizeof(char*));
    for(jx=0; jx<(sizeof(apcRen)/sizeof(char*)); jx++)
    {
        ppcTemp = &apcRen[jx];
        printf("%s\n", *ppcTemp);
    }

    ppcTemp = environ;
    //for(jx=0; NULL!=ppcTemp+jx; jx++)
    for(jx=0; jx<5; jx++)
    {
	if(NULL != ppcTemp+jx)
        printf("%s\n", *(ppcTemp+jx));
    }
ppcTemp = NULL;
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
