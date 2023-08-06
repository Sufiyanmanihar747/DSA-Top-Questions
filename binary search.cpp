#include<iostream>
using namespace std;

void print(int arr[],int s,int e){
    for(int i=s;i<=e;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

bool bsearch(int *arr,int s,int e,int target){
    if(s>e)
        return false;
    print(arr,s,e);

    int mid=s+(e-s)/2;
    cout<<"mid element "<<arr[mid]<<endl;

    if(arr[mid]==target)
        return true;
    if(arr[mid]<target)
        return bsearch(arr,mid+1,e,target);
    else
        return bsearch(arr,s,mid-1,target);
}

int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int s=0;
    cout<<bsearch(arr,s,9,10);


}
