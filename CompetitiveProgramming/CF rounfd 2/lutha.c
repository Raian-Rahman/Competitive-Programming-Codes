#include<stdio.h>
int main()
{
    char ch;
    ch = getch();
    printf("%d\n",ch);
    if(ch==8 || ch==127 )   printf("backspace\n");
    else                    printf("nothing\n");
}
