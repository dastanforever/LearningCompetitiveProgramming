#include <ctime>
#include <iostream>

using namespace std;

int main(void)
{
	int d,m,y;
	cin>>d>>m>>y;
	tm time_in = {0,0,0,d,m,y};
	time_t time_temp = mktime( & time_in );
	tm const *time_out = localtime( & time_temp );
	cout<<time_out->tm_wday;
	return 0;
}