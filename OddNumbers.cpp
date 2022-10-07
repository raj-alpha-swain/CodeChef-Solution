#include <iostream>
using namespace std;

int main() {
    long int a;
    cin>>a;
    long int arr[a],arr1[a];


    for(long int i=0;i<a;i++)
        cin>>arr[i];
    for(long int i=a-1;i>=0;i--)

        cout<<arr[i]<<" ";    // your code goes here
	return 0;
}
