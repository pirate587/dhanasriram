#include <iostream>
using namespace std;
int main() {
	int n;
  //Reading input from STDIN
int px=1;
int py=n*2-1;
int i,j,t;
cin>>t;
while(t--)
{
cin>>n;

for(i=1;i<=n;i++)
{
	for(j=1;j<=n*2;j++)
	{
		if(j==px||j==py)
		{
		cout<<"*";

		
		}
		else {
		cout<<" ";
	
		}
	}
	px++;
	py--;
	cout<<endl;
}
}
return 0;
}
