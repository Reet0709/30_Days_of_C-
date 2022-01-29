#include <iostream>
using namespace std;

int firstoccur(int arr[],int n, int i, int key){
    if (i==n){
        return -1;
    }
    if (arr[i]==key){
        return i;
    }
    return firstoccur(arr, n , i+1, key);
}

//confusion
int lastoccur(int arr[], int n, int i, int key ){
    if (i==n){
        return -1;
    }
    int rest = lastoccur(arr, n , i+1, key);
    while(rest!=-1){
        return rest;
    }
    if (arr[i]==key){
        return i;
    }
    return -1;
}

int main()
{
 int arr[] = {4,5,2,7,2,9,4,2};
 cout<<firstoccur(arr,8,0,2);
 cout<<lastoccur(arr,8,0,2);

    return 0;
}
