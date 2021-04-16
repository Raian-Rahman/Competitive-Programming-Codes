#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    while(1)
    {
        int k,ox,oy,x,y;
        scanf("%d",&k);
        if(k==0)
            break;
        scanf("%d %d",&ox,&oy);
        for(int i=0;i<k;i++)
        {
            scanf("%d %d",&x,&y);
            if(x==ox || y==oy)
                printf("divisa\n");
            else if(x>ox && y>oy)
                printf("NE\n");
            else if(x<ox && y>oy)
                printf("NO\n");
            else if(x>ox && y<oy)
                printf("SE\n");
            else if(x<ox && y<oy)
                printf("SO\n");
        }
    }
    return 0;
}
