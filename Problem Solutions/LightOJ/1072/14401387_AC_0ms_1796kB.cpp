    #include<bits/stdc++.h>
     
    using namespace std;
    double pi=acos(-1);
    int main()
    {
     
        int n,i,t;
        double R,r;
        scanf("%d",&t);
        for(i=0;i<t;i++)
        {
            scanf("%lf %d",&R,&n);
            r=(R*sin(pi/n))/(1+sin(pi/n));
            printf("Case %d: %.10lf\n",i+1,r);
        }
        return 0;
    }
     
