#include <stdio.h>
#include <stdlib.h>
float f=1,sum=1;
float sum_comp(int i)
{

    if(i>1)
    {
        sum_comp(i-1);
        printf("f |%d|\t =\t%.3lf\n",i,f);
        f=sqrt(f*i)/log(i+1);
        sum+=f;
        return sum;
    }

}
int main()
{
    int n;
    printf("Input n:");
    scanf("%d", &n);
    printf("f |%d|\t =\t%.3lf\n",1,f);
    sum=sum_comp(n);
    printf("Sum\t =\t%lf",sum);
    return 0;
}
