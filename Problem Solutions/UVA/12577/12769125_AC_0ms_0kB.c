#include<stdio.h>
#include<string.h>


int main()
{
    int n,c=1;
    char hajj[100];
    gets(hajj);
    n=strlen(hajj);
    if(n==4)
        printf("Case %d: Hajj-e-Akbar\n",1);
    else if(n==5)
        printf("Case %d: Hajj-e-Asghar\n",1);
    while(hajj[0]!='*')
    {
        gets(hajj);
        n=strlen(hajj);
        if(n==4)
        printf("Case %d: Hajj-e-Akbar\n",c+1);
    else if(n==5)
        printf("Case %d: Hajj-e-Asghar\n",c+1);

        c++;

    }
    return 0;
}
