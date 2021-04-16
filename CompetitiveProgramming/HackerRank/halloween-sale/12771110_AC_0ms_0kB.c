#include<stdio.h>


int main()
{
    int s,m,l,d,count=0;
    scanf("%d %d %d %d",&m,&l,&s,&d);
    while(d>=m)
    {
                 d=d-m;
                count++;
        if(m-l>s)
            m=m-l;
        else
            m=s;
        //printf("m=%d\t d=%d\n",m,d);
    }
    printf("%d",count);
    return 0;
}
