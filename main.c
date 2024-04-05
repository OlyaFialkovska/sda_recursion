#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int n=5;
float sum_f(float f, float sum, int i)
{
    if(i<=n)
    {
        f=sqrt(f*i)/log(i+1);
        printf("f |%d|\t =\t%.3f\n",i,f);
        sum+=f;
        sum_f(f,sum,i+1);
    }else
    return sum;
}
int main()
{
    float f=1,sum=f;
    printf("f |%d|\t =\t%.3f\n",1,f);
    sum=sum_f(f,sum,2);
    printf("Sum\t =\t%f",sum);
    return 0;
}
