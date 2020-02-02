#include<stdio.h>
#include<string.h>

int i,length_of_array;

int main()
{
    printf("enter a string to reverse\n");              ///////your string u want to reverse without or with space/////
    scanf("%d",&length_of_array);
    char str[length_of_array];

    scanf("%[^\n]",str);
    printf("size of string is entered: %d\n",strlen(str));

    for(i=1;i<=strlen(str);++i)
    {
        printf("%c",str[(strlen(str))-i]);
    }
}



