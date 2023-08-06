#include<iostream>
using namespace std;
int differentwaytoclimb(int n){
    if(n==0)
        return 1;
    if(n<0)
        return 0;
    int ans=differentwaytoclimb(n-1)+differentwaytoclimb(n-2);

    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<differentwaytoclimb(n);
}
