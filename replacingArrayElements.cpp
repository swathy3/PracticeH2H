#include <iostream>
#include<vector>
using namespace std;

int main() {
	int n,input,i,sum=0,lim=1000;
	std::vector<int> a;
	cin>>n;
	while(cin>>input)
	{
	    sum=sum+input;
	    a.push_back(input);    
	}
	for(i=1;i<=lim;i++)
	{
	    if((n*i)>sum)
	        break;
	}
	cout<<i;
	return 0;
}
