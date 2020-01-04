#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i;
    cin >> n;
    for(i=0;i<n;i++)
    {
        int hstrtw,mstrtw,hendw,mendw;
        scanf("%d : %d  %d : %d",&hstrtw,&mstrtw,&hendw,&mendw);
        //printf("%d %d\n%d %d",hstrtw,mstrtw,hendw,mendw);
        int hstrtm,mstrtm,hendm,mendm;
        scanf("%d : %d  %d : %d",&hstrtm,&mstrtm,&hendm,&mendm);
        int a,b,c,d;
        a=(hstrtw*60)+mstrtw;
        b=(hendw*60)+mendw;
        c=(hstrtm*60)+mstrtm;
        d=(hendm*60)+mendm;
        if(hstrtw<a&&d<a)
        {
            if(c<b)
            printf("Case %d: Hits Meeting",i+1);
            else
            printf("Case %d: Mrs Meeting",i+1);
        }
        else if(c>a&&d>a)
        {
            if(c>b)
            printf("Case %d: Hits Meeting",i+1);
            else
            printf("Case %d: Mrs Meeting",i+1);
        }
        else
        printf("Case %d: Mrs Meeting",i+1);
        cout << endl;
    }
    return 0;
}
