#include<iostream>
#include<vector>
#include<string>
using namespace std;



vector<char>pairableCharacter;
vector<char>middleCharacter;
set<string>allPermutationWhichArePalindrome;



void generateAllPalindromePermutation(string givenString,int position,int stringSize,int inputStringSize)
{
    if(position==stringSize-1)
    {
        if(inputStringSize%2==1)
        {
            string temporaryString = givenString + middleCharacter[0] ;
            reverse(givenString.begin(),givenString.end());
            temporaryString+=givenString;
            allPermutationWhichArePalindrome.insert(temporaryString);
        }
        else
        {
            string temporaryString = givenString;
            reverse(givenString.begin(),givenString.end());
            temporaryString+=givenString;
            allPermutationWhichArePalindrome.insert(temporaryString);
        }
    }
    for(int j=position;j<stringSize;j++)
    {
        swap(givenString[position],givenString[j]);
        generateAllPalindromePermutation(givenString,position+1,stringSize,inputStringSize);
        swap(givenString[position],givenString[j]);
    }
}


void printAllPalindromicPermutations(string inputString)
{

    string halfStringForPermutation;
    map<char,int>characterCount;
    for(int i=0;i<inputString.size();i++)
    {
        characterCount[inputString[i]]++;
    }
    for(auto it:characterCount)
    {
       if(it.second%2==0)
       {
           for(int i=0;i<it.second/2;i++)   pairableCharacter.push_back(it.first);
       }
       else if(it.second>2)
       {
           for(int i=0;i<it.second/2;i++)    pairableCharacter.push_back(it.first);
           middleCharacter.push_back(it.first);
       }
       else
       {
           middleCharacter.push_back(it.first);
       }
    }
    if(inputString.size()==1)
    {
        cout << inputString << endl;
    }
    if(inputString.size() and inputString.size()%2==0 and middleCharacter.size()==0)
    {
        halfStringForPermutation = "";
        for(int i=0;i<pairableCharacter.size();i++)   halfStringForPermutation += pairableCharacter[i];
        generateAllPalindromePermutation(halfStringForPermutation,0,halfStringForPermutation.size(),inputString.size());
    }
    else if(inputString.size() and inputString.size()%2==1 and middleCharacter.size()==1)
    {

        halfStringForPermutation = "";
        for(int i=0;i<pairableCharacter.size();i++)   halfStringForPermutation += pairableCharacter[i];
        generateAllPalindromePermutation(halfStringForPermutation,0,halfStringForPermutation.size(),inputString.size());

    }
    else
    {
        cout << "Not Possible\n";
        return;
    }
    for(auto it:allPermutationWhichArePalindrome)
    {
        cout << it << endl;
    }
}

int main()
{
    string inputString;
    cin >> inputString;
    printAllPalindromicPermutations(inputString);
    return 0;
}
