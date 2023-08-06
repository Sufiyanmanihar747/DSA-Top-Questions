#include<iostream>
using namespace std;

int power(int a,int b){
    cout<<a<<b<<endl;
    if(b==0)
        return 1;
    if(b==1)
        return a;
    int ans=power(a,b/2);
    cout<<"answer is "<<ans<<endl;
    if(!(b&1))//b is even
        return ans*ans;
    else  //b is odd
        return a*ans*ans;
}

int main(){
    int a;
    cin>>a;
    int b;
    cin>>b;
   cout<<power(a,b);

}
