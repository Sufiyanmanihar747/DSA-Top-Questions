#include<iostream>
using namespace std;

void print(int arr[],int sizee){
    for(int i=0;i<sizee;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

bool sortedornot(int *arr,int sizee){
    print(arr,sizee);
    if(sizee==0)
        return true;
    if(arr[0]>arr[1])
        return false;
    else
        return sortedornot(arr+1,sizee-1);
}

int main(){
    int arr[6]={1,2,3,4,5,6};
    cout<<sortedornot(arr,6);
}
