#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
int main()
{
    int n,ca=0,ce=0,ci=0,co=0,cu=0;
 string str;
 cout<<"enterr string"<<endl;
 cin>>str;
 cout<<"your string"<<str<<endl;
 int len;
len=str.size();
cout<<len<<endl;
 for(int i=0;i<len;i++)
 {
    if(str[i]=='a')
    {
        ca++; 
    }
       if(str[i]=='e')
    {
        ce++; 
    }
       if(str[i]=='i')
    {
        ci++; 
    }
       if(str[i]=='o')
    {
        co++; 
    } 
	  if(str[i]=='u')
    {
        cu++; 
    }

 }
  
cout<<ca<<" "<<ce<<" "<<ci<<" "<<co<<" "<<cu<<endl;
if(ca>=2 && ce>=2&& ci>=2&& co>=2&& cu>=2)
{
	cout<<"GOOD"<<endl;
}
else
{
	cout<<"BAD"<<endl;
}
      

}
