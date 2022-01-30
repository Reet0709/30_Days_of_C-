//Find the number of ways to tile the floor with 2xn and 2x1 tiles

#include <iostream>
using namespace std;

int tillingways(int n){
    if(n==0 || n==1){
        return n;
    }
    return tillingways(n-1) +tillingways(n-2);
}

int main() {
   cout<<tillingways(4);
	return 0;
}
