//coded by: pranonrahman-------------------------------------
//-----------------------------------------------------------
//-----------------------------------------------------------
#include<bits/stdc++.h>
using namespace std;


int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.in","r",stdin);
    freopen("output.out","w",stdout);
#endif
    long long t=1;
    //cin >> t;
    long long T = t;
    while(t--)
    {
    	multiset<int>st;
    	st.insert(1);
    	st.insert(1);
    	
    	st.insert(1);
    	st.insert(3);
    	st.insert(4);
    	st.insert(2);
    	st.insert(2);
    	for(auto it:st)	// for all element of st 
    	{
    		//cout << it << endl;
    	}
    	auto it = st.find(1);
    	it++;
    	it++;
    	it++;
    	cout << *it << endl;
    }
    return 0;
}


