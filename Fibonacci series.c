#include<stdio.h>

int i=0, j=1, n,b;
int main()
{
    printf("enter no of term\n");
    scanf("%d",&n);
    //printf("%d", n);
    printf("%d, %d", i,j);

    for(int a=2;a<n;++a)
    {
        b=i+j;
        printf(" ,%d",b);
        i=j;
        j=b;
    }

}


