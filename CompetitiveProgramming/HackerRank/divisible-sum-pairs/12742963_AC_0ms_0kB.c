#include<stdio.h>

int main()
{
    int k,n,i,j,count=0;
    int num[100]={0};
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
        scanf("%d",&num[i]);
    for(i=0;i<n-1;i++)
     {
            for(j=i+1;j<n;j++)
        {
            //printf("%d + %d = %d\n",num[i],num[j],num[i]+num[j]);


            if(  (num[i]+num[j])% k == 0)
                    count++;
        }
     }


    printf("%d",count++);
    return 0;
}
