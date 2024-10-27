#include<stdio.h>
int palin_check(int n)
{int temp,rem,sum;

scanf("%d",&n);
temp=n;
while(n!=0)
{
rem=temp%10;
sum=(sum*10)+rem;
temp=temp/10;

}
if(n==sum)
  return 1;
else 
return 0;


}
int main()
{
   int test;
   scanf("%d",&test);
   while(test--)
   {
     int num;
     scanf("%d",&num);
     printf("%d\n",palin_check(num));
   }
   
}
