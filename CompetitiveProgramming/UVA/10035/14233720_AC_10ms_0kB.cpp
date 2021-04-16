#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x=1;
    int n1,n2;
    while(1)
    {
        int cnt=0;
        int carry=0;
        cin >> n1 >> n2 ;
        if(n1==0 && n2==0)
            break;
        else
        {
            while(1)

            {
                if(n1==0 && n2==0)
                        break;
                if(n1%10+n2%10+carry > 9)
                {
                    cnt++;


                }

                carry = (n1%10+n2%10+carry)/10;
                //cout << carry <<" "<< cnt << endl;
                n1/=10;
                n2/=10;
            }
        }
        //cout << x++ << " ";
        if(cnt==0)
            printf("No carry operation.\n");
        else if(cnt==1)
            printf("1 carry operation.\n");
        else
            printf("%d carry operations.\n",cnt);
    }
    return 0;
}
