#include <iostream>

using namespace std;

bool sorted(int arr[], int n){
    if (n==1){
        return true;
    }
    bool rest = sorted(arr+1,n-1);
    return (arr[0]<arr[1] && rest );
}
int main()
{
int arr[] = {3,9,1,14};
cout<<sorted(arr, 4);

    return 0;
}
