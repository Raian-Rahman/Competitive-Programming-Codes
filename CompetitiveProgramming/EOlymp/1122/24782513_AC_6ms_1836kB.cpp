#include<bits/stdc++.h>
using namespace std;



int main()
{
    int arr[10][10];
    memset(arr,0,sizeof(arr));
    string s1,s2,s3;
    string S1,S2,S3;
    cin >> S1 >> S2 >> S3;
    if(S1[0]=='N')  s1=S1;
    else if(S2[0]=='N') s1=S2;
    else                s1=S3;
   // cout << s1 << endl;
    if(S1[0]=='R')  s2=S1;
    else if(S2[0]=='R') s2=S2;
    else                s2=S3;
  //  cout << s2 << endl;
    if(S1[0]=='B')  s3=S1;
    else if(S2[0]=='B') s3=S2;
    else                s3=S3;
   // cin >> s1 >> s2 >> s3;
  //  cout << s3 << endl;
    int rx,ry,kx,ky,bx,by;
    kx = s1[1]-'a'+1;
    ky = s1[2]-48;
    rx = s2[1]-'a'+1;
    ry = s2[2]-48;
    bx = s3[1]-'a'+1;
    by = s3[2]-48;
    arr[s1[1]-'a'+1][s1[2]-48] = 1;
    arr[s2[1]-'a'+1][s2[2]-48] = 1;
    arr[s3[1]-'a'+1][s3[2]-48] = 1;
    int cnt=0;
    //rook
   // cout << kx << ' ' << ky<< endl;
   // cout << bx << ' ' << by<< endl;
   // cout << rx << ' ' << ry<< endl;

    for(int i=rx+1;i<9;i++)
    {
        if(arr[i][ry]==0)
        {
            cnt++;
            arr[i][ry]=2;
        }
        else if(arr[i][ry]==1) break;
    }
  //  cout << cnt << endl;
    for(int i=rx-1;i>0;i--)
    {
        if(arr[i][ry]==0)
        {
            cnt++;
            arr[i][ry]=2;
        }
        else if(arr[i][ry]==1) break;
    }
  //  cout << cnt << endl;
    for(int i=ry+1;i<9;i++)
    {
        if(arr[rx][i]==0)
        {
            cnt++;
            arr[rx][i]=2;
        }
        else if(arr[rx][i]==1) break;
    }
  //  cout << cnt << endl;
    for(int i=ry-1;i>0;i--)
    {
        if(arr[rx][i]==0)
        {
            cnt++;
            arr[rx][i]=2;
        }
        else if(arr[rx][i]==1) break;
    }
 //   cout << cnt << endl;
    for(int i=bx-1,j=by-1;;i--,j--)
    {
        if(i==0 or i>=9 or j==0 or j>=9)    break;
        if(arr[i][j]==0)
        {
            cnt++;
            arr[i][j]=2;
        }
        else if(arr[i][j]==1) break;
    }
    for(int i=bx-1,j=by+1;;i--,j++)
    {
        if(i==0 or i>=9 or j==0 or j>=9)    break;
        if(arr[i][j]==0)
        {
            cnt++;
            arr[i][j]=2;
        }
        else if(arr[i][j]==1) break;
    }
    for(int i=bx+1,j=by-1;;i++,j--)
    {
        if(i==0 or i>=9 or j==0 or j>=9)    break;
        if(arr[i][j]==0)
        {
            cnt++;
            arr[i][j]=2;
        }
        else if(arr[i][j]==1) break;
    }
    for(int i=bx+1,j=by+1;;i++,j++)
    {
        if(i==0 or i>=9 or j==0 or j>=9)    break;
        if(arr[i][j]==0)
        {
            cnt++;
            arr[i][j]=2;
        }
        else if(arr[i][j]==1) break;
    }
   // cout << "bishop " << cnt << endl;
    if(kx-2>0)
    {
        if(ky-1>0)
        {
            if(arr[kx-2][ky-1]==0)
            {
                cnt++;
                arr[kx-2][ky-1]=2;
            }
        }
        if(ky+1<9)
        {
            if(arr[kx-2][ky+1]==0)
            {
                cnt++;
                arr[kx-2][ky+1]=2;
            }
        }
    }
   // cout << cnt<< endl;
    if(kx+2<9)
    {
        if(ky-1>0)
        {
            if(arr[kx+2][ky-1]==0)
            {
                cnt++;
                arr[kx+2][ky-1]=2;
            }
        }
        if(ky+1<9)
        {
            if(arr[kx+2][ky+1]==0)
            {
                cnt++;
                arr[kx+2][ky+1]=2;
            }
        }
    }
  //  cout << cnt << endl;
    if(ky-2>0)
    {
        if(kx-1>0)
        {
            if(arr[kx-1][ky-2]==0)
            {
                cnt++;
                arr[kx-1][ky-2]=2;
            }
        }
        if(ky+1<9)
        {
            if(arr[kx+1][ky-2]==0)
            {
                cnt++;
                arr[kx+1][ky-2]=2;
            }
        }
    }
    //cout << cnt << endl;
    if(ky+2<9)
    {
        if(kx-1>0)
        {
            if(arr[kx-1][ky+2]==0)
            {
                cnt++;
                arr[kx-1][ky+2]=2;
            }
        }
        if(kx+1<9)
        {
            if(arr[kx+1][ky+2]==0)
            {
                cnt++;
                arr[kx+1][ky+2]=2;
            }
        }
    }

    cout << cnt << endl;
    return 0;
}
