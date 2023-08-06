#include<iostream>
using namespace std;
int main(){
    int a=8;
    cout<<a<<endl;
    int *ptr=&a;
    cout<<ptr<<endl;
    *ptr=*ptr+1;
    cout<<*ptr<<endl;
}
