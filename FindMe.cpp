#include <iostream>
using namespace std;

int main() {
	long int n,k;
	cin>>n;
	cin>>k;
	int c=0;
	int arr[n];
	for (int i=0;i<n;i++)
	{
	    cin>>arr[i];
	    if(arr[i]==k)
	        {c=1;
	        break;}

	}
	if (c==1)
	    cout<<"1";
	else
	    cout<<"-1";
	    // your code goes here
	return 0;
}

