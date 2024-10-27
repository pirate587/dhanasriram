#include <iostream>
#include<string.h>
using namespace std;
int main() {
	int t,ty,n,sum=0,cost;
	string k;
	cin >> t;  
	while(t--)
	{
cin>>ty;
while(ty--)
{

	cin>>k>>n;
	if(k==" Perk")
	{
cost=10;

	}
	if(k=="5star")
	{
		cost=20;
	}
	else if(k=="Dairymilk")
	{
		cost=15;
	}
	else if(k=="Chocos")
	{
		cost=30;
	}
	else if(k=="Bournville")
	{
		cost=145;
	}
	else if(k=="Kitkat")
	{
		cost=60;
	}


}

	 if(ty>1)
{
	sum=sum+(cost*n);
}
 else {sum=(cost*n);}
cout<<sum<<endl;

	}  


}
