#include<stdio.h>
#include<string.h>
int main(void)
{
    int i,n,j;
    static int k=2;
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            for(j=0;j<i;j++){

        printf("%10.5d",(k*((2*k)-1)));
        k=k+2;


            }
            printf("\n");
        }
        return 0;
}

~
~
~
~
~
~