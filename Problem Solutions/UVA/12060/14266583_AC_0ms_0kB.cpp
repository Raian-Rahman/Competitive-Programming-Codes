#include<bits/stdc++.h>

using namespace std;

long long gcd(long long x, long long y)
{
    long long t;
    while(x%y)
    {
        t=x;
        x=y;
        y=t%y;

    }

    return y;
}


int main()
{
    int n;
    int x=0;
    while(cin>>n)
    {
        if(n==0)
            break;
        int arr[n];
        int sum=0;
        for(int i=0;i<n;i++)
        {
            cin >> arr[i];
            sum+=arr[i];
        }
        x++;
        cout << "Case " << x << ":\n";
        if(sum<0 && sum%n==0)
            cout<<"- ";
        if(sum%n==0)
            cout  <<abs(sum/n);
        else
        {
            //cout << sum << " " << n;
            if(abs(sum/n)<1)
            {
                int rem=gcd(abs(n),abs(sum));
                if(sum<0)
                    cout<< "  ";
         //       cout << rem << endl;



                int n1=abs(n/rem);
                int cnt=0;
                while(n1>0)
                {
                    cnt++;
                    n1/=10;

                }
                int cnt2=0;
                int n2=abs(sum/rem);
                while(n2>0)
                {
                    cnt2++;
                    n2/=10;
                }
                for(int p=0;p<cnt-cnt2;p++)
                    cout << " " ;
                cout << abs(sum/rem) <<"\n";
                if(sum<0)
                    cout << "- ";

                //cout << cnt ;

                //cout << cnt << endl;
                for(int p=0;p<cnt;p++)
                    cout << "-" ;
                cout<<"\n";
                if(sum<0)
                    cout << "  ";
                cout<< abs(n/rem);
            }
            else
            {

                //cout << sum << " " << n<< endl;
                if(sum/n<0)
                    cout<<"  ";
                //cout << "passed if";

                int up,down;
                int rem=gcd(sum,n);
                up=sum/rem;
                down=n/rem;
                int purno=up/down;
                int x1=abs(down);
                int cnt1=0;
                while(x1>0)
                {
                    cnt1++;
                    x1/=10;
                }
                int d1=abs(up-(purno*down));
                int cnt2=0;
                while(d1>0)
                {
                    cnt2++;
                    d1/=10;
                }
                //cout << cnt1 << " " << cnt2 << endl;
                for(int p=0;p<cnt1-cnt2;p++)
                    cout << " ";

                int n1;
                n1=abs(purno);
                int cnt=0;
                while(n1>0)
                {
                    cnt++;
                    n1/=10;
                }
                int spc=cnt;
                for(int p=0;p<cnt;p++)
                    cout << " ";
                cout << abs(up-(purno*down))<< "\n";
                if(sum<0)
                    cout << "- ";
                cout << abs(purno);
                cnt=0;
                n1=abs(down);
                while(n1>0)
                {
                    cnt++;
                    n1/=10;
                }
                for(int p=0;p<cnt;p++)
                    cout << "-";
                cout << "\n";

                if(sum<0)
                    cout<< "  ";
                for(int p=0;p<spc;p++)
                    cout<< " ";
                cout<< abs(down);



            }
        }

        cout<< "\n";
    }
    return 0;
}
