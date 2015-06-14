#include <cstdio>
#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main(void)
{
	regex reg("[[:digit:]][[:digit:]]");
	if (regex_match("34",reg))
		cout<<"YES";
	else
		cout<"NO";

	//if (std::regex_match ("subject", std::regex("(sub)(.*)") ))
    //std::cout << "string literal matched\n";

	return 0;
}