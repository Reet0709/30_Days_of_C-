//There are n friends, we have to find all the pairings possible. Each person can be paired with only one person or does not pair with anyone.


#include <iostream>
using namespace std;

int pairing(int n){
    if (n==0||n==1||n==2){
        return n;
    }
    return pairing(n-2)*(n-1)+ pairing(n-1);
}

int main() {
   cout<<pairing(4);
	return 0;
}
