#include <stdio.h>
#include <stdlib.h>
//cycle code
int main()
{
    double f=1,sum=f;
    int i,n;
    printf("Input n:");
    scanf("%d",&n);
    printf("f |%d|\t =\t%.3lf\n",1,f);

    for(i=2;i<=n;i++)
    {
        sum+=sqrt(f*i)/log(i+1);
        f=sqrt(f*i)/log(i+1);
        printf("f |%d|\t =\t%.3lf\n",i,f);
    }

    printf("Sum\t =\t%lf",sum);
    return 0;
}
