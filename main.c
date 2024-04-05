#include <stdio.h>
#include <stdlib.h>
int n=5;
float sum_comp(float f,int i)
{
    if(i<=n)
    {
        f=sqrt(f*i)/log(i+1);
        printf("f |%d|\t =\t%.3lf\n",i,f);
        return f+sum_comp(f,i+1);
    }else f=1;
}
int main()
{
    float f=1,sum=0;
    printf("f |%d|\t =\t%.3lf\n",1,f);
    sum=sum_comp(f,2);
    printf("Sum\t =\t%lf",sum);
    return 0;
}
