#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
     long long n,sum=0,total=0;
     scanf("%lld",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
    scanf("%lld",&a[i]);
    sum=sum+a[i];
}
 total=sum-n+1;
printf("%lld\n",total);
}
}