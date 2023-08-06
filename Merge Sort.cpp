#include<iostream>
using namespace std;

void merge()

void mergesort(int *arr,int s,int e){
    //base case
    if(s>=e)
        return;
    int mid=(s+e)/2;

    //right part ko todna h
    mergesort(arr,s,mid);
    //left part ko todna h
    mergesort(arr,mid+1,e);
    //last me merge bhi karna h
    merge(int )

}

int main(){
    int arr[5]={1,2,3,4,5};
    int n=15;
    mergesort(arr,0,n-1)

}
