#include<bits/stdc++.h>
using namespace std;

int arr[1000007];
vector<pair<int,int>>tree(1000007*3);


//be is the beginning of the range in the node
//en is the ending of the range in the node

void init_tree(int node,int be,int en)
{
    if(be==en)
    {
        tree[node].first=arr[be];
        return ;
    }

    int left = node*2;
    int right = (2*node)+1;
    int mid = be+en;
    mid/=2;
    init_tree(left,be,mid);
    init_tree(right,mid+1,en);
    tree[node].first=min(tree[left].first,tree[right].first);
}

int query(int node, int be, int en, int i,int j)  //carry used to pass the propagated value
{
    if(i>en or j<be)  return INT_MAX; //out of range
    if(be>=i and en<=j) // range ta node range er che boro
        return tree[node].first;
    int left = 2*node;
    int right = (2*node) +1;

    int mid = be+en;
    mid/=2;

    int left_subtree_result = query(left,be,mid,i,j);
    int right_subtree_result = query(right,mid+1,en,i,j);
    return min(left_subtree_result,right_subtree_result);
}


int main()
{
    memset(arr,INT_MAX,sizeof(arr));
    int n;
    cin >> n;
    for(int i=1;i<=n;i++)   cin >> arr[i];
    init_tree(1,1,n);
    int q;
    cin >> q;
    while(q--)
    {
        int pp,pq;
        cin >> pp >> pq;
        cout << query(1,1,n,pp+1,pq+1) << endl;
    }

    //for(int i=1;i<n;i++)    cout << tree[i] << ' ';
    return 0;
}
