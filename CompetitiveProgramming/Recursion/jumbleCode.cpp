#include<stdio.h>
#include<string.h>
void reverse_string(char inputString[],int position,int length)
{
    printf("%c",inputString[position]);
    if(position==length)    return;
    reverse_string(inputString,position+1,length);
}
int main()
{
    char inputString[100];
    int length;
    scanf("%d",&length);
    scanf(" %s",inputString);
    reverse_string(inputString,0,length);
    return 0;
}
