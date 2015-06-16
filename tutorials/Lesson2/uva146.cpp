#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(void)
{
	string arr;
	while(getline(cin,arr), arr != "#")
	{
		if(next_permutation(arr.begin(),arr.end()))
			cout<<arr<<endl;
		else
			cout<<"No Successor"<<endl;
	}
	return 0;
}