#include <iostream>
using namespace std;

int main()
{
  int t,x,y;
  cin>>t;
  while(t--)
  {int count=0,sum;
     cin>>x>>y;
     sum=x+y;
    while(sum!=0)
    { sum=sum/10;
        count++;
    }
    cout<<count<<endl;
  }


}

