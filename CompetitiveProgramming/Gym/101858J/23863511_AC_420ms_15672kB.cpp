#include<bits/stdc++.h>
using namespace std;

int tree[4*1000007];
//be is the beginning of the range in the node
//en is the ending of the range in the node

void init_tree(int node,int be,int en)
{
   // cout << be << ' ' << en << endl;
    if(be==en)
    {
        tree[node]=0;
        return ;
    }

    int left = node*2;
    int right = (2*node)+1;
    int mid = be+en;
    mid/=2;
    init_tree(left,be,mid);
    init_tree(right,mid+1,en);
    tree[node]=tree[left]+tree[right];
}

int query(int node, int be, int en, int i,int j)  //carry used to pass the propagated value
{
    if(i>en or j<be)  return 0; //out of range
    if(be>=i and en<=j) // range ta node range er che boro
        return tree[node];
    int left = 2*node;
    int right = (2*node) +1;

    int mid = be+en;
    mid/=2;

    int left_subtree_result = query(left,be,mid,i,j);
    int right_subtree_result = query(right,mid+1,en,i,j);
    return left_subtree_result+right_subtree_result;
}

void update(int node,int be,int en,int i)
{
 //   cout << be << ' ' << en << endl;
    if(i>en or i<be)    return;
    if(be==i and en==i)
    {
        tree[node]+=1;
        return;
    }
    int left = 2*node;
    int right = (2*node)+1;
    int mid=be+en;
    mid/=2;
    update(left,be,mid,i);
    update(right,mid+1,en,i);
    tree[node]=tree[left]+tree[right];
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    //memset(arr,INT_MAX,sizeof(arr));
    int n=1000005;
    //cout << "done\n";
    init_tree(1,1,n);
    //cout << "done\n";
    int q;
    cin >> q;
    int b=q;
    while(q--)
    {
        int x;
        cin >> x;
        cout << b-query(1,1,n,x,n) << endl;
        update(1,1,n,x);
    }
    //for(int i=1;i<n;i++)    cout << tree[i] << ' ';
    return 0;
}
