#include<stdio.h>
int main()
{
	long long int n,rev,rev2;
	scanf("%lld",&n);
	rev=n%10;
	rev2=n/10000;
	printf("%lld\n",rev);
	printf("%lld",rev2);
}
