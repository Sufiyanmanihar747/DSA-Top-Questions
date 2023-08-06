#include<iostream>
using namespace std;

bool lsearch(int *arr,int s,int sizee,int target){
    //base case
    if(s==sizee)
        return false;
    if(arr[s]==target)
        return true;
    lsearch(arr,s+1,sizee--,target);
}

int main(){
    int arr[5]={1,2,3,4,5};
    int s=0;
    int target=5;
    cout<<lsearch(arr,s,5,target);
}
