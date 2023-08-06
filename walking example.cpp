#include<iostream>
using namespace std;

int steps(int src,int destination){
    //base case
    if(src==destination)
         return 0;
    cout<<"source "<<src<<" destination"<<destination<<endl;
    src++;
    steps(src,destination);
}

int main(){
    int src;
    cin>>src;
    int destination;
    cin>>destination;
    cout<<steps(src,destination);
    return 0;
}
