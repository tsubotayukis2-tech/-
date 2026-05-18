#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(void)
{

/*値が小さいほうからの足し上げ*/
double S1 = 0.0;
double a1 = 1.2;
double fst1 = a1;
double r1 = 1.0001;
double N1 = 2000;
    for (int i = 0; i <= N1-1 ; i++)
    {
        S1 = S1 + fst1;
        fst1 = fst1 * r1;
    }

    printf("S1 = %.16f\n", S1);
    

/*値が大きいほうからの足し上げ*/
double S2 = 0.0;
double a2 = 1.2;
double N2 = 2000;
double p2 = 1.0001;
    for (int i = 0; i < N2-1; i++)
    {
        a2 = a2 * p2;
    }
double fst2 = a2;
double r2 = 1.0001;
    for (int i = 0; i <= N2-1 ; i++)
    {
        S2 = S2 + fst2;
        fst2 = fst2 / r2;
    }

    printf("S2 = %.16f\n", S2 );
    

/*公式を用いた計算*/
double r3 = 1.0001;
double N3 = 2000;
double a3 = 1.2;
double S3 = a3 * (1 - pow(r3, N3)) / (1 - r3);
    printf("S3 = %.16f\n", S3 );



/*S1とS3、S2とS3の差の絶対値*/
double absS1 = S1 - S3;
   if (absS1 >= 0.0)
   {
    absS1 = absS1;
   }
   else
   {
    absS1 = -absS1;
   }
   
double absS2 = S2 - S3;
   if (absS2 >= 0.0)
   {
    absS2 = absS2;
   }
   else
   {
    absS2 = -absS2;
   }
    


/*どちらが公式の値に近いか*/
if (absS1 > absS2)
{
    printf("S2 is better option\n");
}
else if (absS1 < absS2)
{
    printf("S1 is better option\n");
}
else
{
    printf("S1 and S2 have the same accuracy\n");
}

 return 0;
}    