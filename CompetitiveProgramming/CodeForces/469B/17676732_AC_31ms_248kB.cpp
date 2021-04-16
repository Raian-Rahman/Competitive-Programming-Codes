#include<bits/stdc++.h>


using namespace std;

int main()
{

 int inp[1004]={0},p,q,l,r,cnt=0;
 cin>>p>>q>>l>>r;

 int a[p],b[p];

 for(int i=0;i<p ;i++)  cin >> a[i] >> b[i];

 for(int i=0;i<q;i++)
{
     int c,d;
     cin>>c>>d;

     for(int j=0;j<p;j++){
       int x=a[j]-d,y=b[j]-c;

       if(y<l or x>r)
          continue;

       for(int k=max(x,l);k<=min(y,r);k++)
           if(!inp[k])
                cnt++,inp[k]=1;
   }
 }

    cout  <<    cnt  << "\n";

  return 0;
}
