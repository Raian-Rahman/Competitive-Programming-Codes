#include<bits/stdc++.h>


using namespace std;

#define SIZE 100007

int a[SIZE];
int n;


long long upd(int i, int val)
{

	while(i <= n) {
		a[i] = a[i] + val;
		i = i + (i & (-i));
	}

}

long long qr(int i)
{
	long long ans;
	ans = 0;

	while(i > 0) {
		ans = ans + a[i];
		i = i - (i & (-i));
	}

	return ans;
}

int main()
{
	int t;
	int x;
	int y;
	int w;
	int choice;
	long long ans;
	int q;
	int ch;

	scanf("%d", &t);

	for (int xx = 1; xx <= t; xx++)
    {
		scanf("%d", &n);
		scanf("%d", &q);

		memset(a, 0, sizeof a);

		for (int i = 1; i <= n; i++) {
			scanf("%d", &x);
			upd(i, x);
		}



		printf("Case %d:\n", xx);
		for (int i = 0; i < q; i++)
        {
			scanf("%d", &ch);

			if(ch==1)
            {
                scanf("%d", &x);
                x++;
                ans = qr(x) - qr(x-1);
                upd(x, -ans);
                printf("%lld\n", ans);
            }
			else if(ch==2)
            {
                scanf("%d", &x);
                x++;
                scanf("%d", &w);
                upd(x, w);
            }

			else
            {
				scanf("%d", &x);
                scanf("%d", &y);
                x++;
                y++;
                ans = qr(y) - qr(x -1);
                printf("%lld\n", ans);


            }
        }
    }


	return 0;
}
