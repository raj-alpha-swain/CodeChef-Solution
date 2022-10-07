#include <iostream>
using namespace std;

int main() {
    long int a,b,c;
    cin>>a>>b>>c;
        if(a >= b && a >= c)
    {
        if(b >= c)
        {
            cout<<b;
        }
        else
        {
            cout<<c;
        }
    }
    else if(b >= a && b >= c)
    {
        if(a >= c)
        {
            cout<<a;
        }
        else
        {
            cout<<c;
        }
    }

    // c is the largest number of the three
    else if(a >= b)
    {
        cout<<a;

    }
    else
    {
        cout<<b;
    }


// your code goes here
	return 0;
}

