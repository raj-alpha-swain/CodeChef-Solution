#include <iostream>
using namespace std;

int main() {

    long int num,i;
    int c=0;
    cin>>num;
    for(i=1; i <= num; i++) {
      if (num % i == 0)
       c=c+1;
   }
   cout<<c<<endl;
   for(i=1; i <= num; i++) {
      if (num % i == 0)
      cout<<i<<" ";

   }

	return 0;
}

