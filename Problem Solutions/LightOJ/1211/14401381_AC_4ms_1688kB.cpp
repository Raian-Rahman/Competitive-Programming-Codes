    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main()
    {
        int t;
        scanf("%d",&t);
        for(int i1=0;i1<t;i1++)
        {
            int n;
            scanf("%d",&n);
            int x1,y1,z1,x2,y2,z2;
            int a,b,c,i,j,k;
            a=b=c=0;
            i=j=k=10000000;
            for(int j1=0;j1<n;j1++)
            {
                scanf("%d %d %d %d %d %d",&x1,&y1,&z1,&x2,&y2,&z2);
                a=max(a,x1);
                b=max(b,y1);
                c=max(c,z1);
                i=min(i,x2);
                j=min(j,y2);
                k=min(k,z2);
            }
            printf("Case %d: ",i1+1);
            if(i>a && j>b && k>c)
                printf("%d\n",(i-a)*(j-b)*(k-c));
            else
                printf("%d\n",0);
        }
        return 0;
    }
     
