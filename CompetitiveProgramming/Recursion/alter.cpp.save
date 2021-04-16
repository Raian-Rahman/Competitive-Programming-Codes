#include<bits/stdc++.h>
using namespace std;

void palindromicPermutation(string inputString)
{

    map<char, int> characterCount;
    for(auto K:inputString)
        characterCount[K]++;
    string halfString, middleCharacter;
    for(auto K: characterCount)
    {

        for(int i=0; i<K.second/2; i++)
            halfString.push_back(K.first);
        if(K.second%2)
            middleCharacter.push_back(K.first);


    }
    if(middleCharacter.size()>1)
    {
        cout<<"Not Possible\n";
        return ;
    }
    else
    {
        string p=halfString;
        do
        {
            string rv=halfString;
            reverse(rv.begin(),rv.end());
            cout<<halfString+middleCharacter+rv<<endl;
            next_permutation(halfString.begin(),halfString.end());
        }while(halfString!=p);
    }
    return;
}


int main()
{
    string inputString;
    cin>>inputString;
    palindromicPermutation(inputString);
    return 0;
}
