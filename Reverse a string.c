#include<stdio.h>
#include<string.h>

int i,length_of_array;

int main()
{
    printf("Enter maximum no of character of string\n");///////size of character array////////
    scanf("%d",&length_of_array);
    char str[length_of_array];
    printf("enter a string to reverse\n");              ///////your string u want to reverse without space/////

    scanf("%s",str);
    printf("size of string is entered: %d\n",strlen(str));

    for(i=1;i<=strlen(str);++i)
    {
        printf("%c",str[(strlen(str))-i]);
    }
}



