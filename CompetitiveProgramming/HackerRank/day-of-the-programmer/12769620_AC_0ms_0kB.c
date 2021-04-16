#include<stdio.h>

int main()
{
    int yr;
    scanf("%d",&yr);
    if(yr==1918)
        printf("26.09.1918");
    else if(yr<1918 && yr%100==0)
        printf("12.09.%d",yr);
    else if((yr%4==0&&yr%100!=0)||(yr%400==0))
        printf("12.09.%d",yr);
    else
        printf("13.09.%d",yr);
    return 0;
}
