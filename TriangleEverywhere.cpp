#include <iostream>
using namespace std;

int main() {
	long int a,b,c;
	cin>>a>>b>>c;
	if(a > b + c or b > a + c or c > a + b)
        cout<<"-1";
	else
    {
        if(a==b&&b==c)
	        cout<<"1";
	    else if(a==b||b==c)
	        cout<<"2";
	    else
	        cout<<"3";
    }
	    // your code goes here
	return 0;
}


