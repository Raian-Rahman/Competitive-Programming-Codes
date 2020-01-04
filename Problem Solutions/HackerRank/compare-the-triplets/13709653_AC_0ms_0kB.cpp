#include<bits/stdc++.h>

using namespace std;

int main()
{
    int ali[3],bob[3];
    int b=0,a=0,i;
    for(i=0;i<3;i++)
        scanf("%d",&ali[i]);
    for(i=0;i<3;i++)
        scanf("%d",&bob[i]);
    for(i=0;i<3;i++)
    {
        if(ali[i]>bob[i])
            a++;
        else if(ali[i]<bob[i])
            b++;
        else
            continue;
    }
    printf("%d %d",a,b);
    return 0;
}
