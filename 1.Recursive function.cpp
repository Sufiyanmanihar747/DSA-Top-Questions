#include<iostream>
using namespace std;

//FACTORIAL FUNCTION
int fact(int n){
    if(n==0)
        return 1;              //base case
    int smallprob=fact(n-1); //smallproblem
    int largeprob=n*smallprob;      //big problem
    //f(n)=n*f(n-1)
    return largeprob;
}
int countt(int n){
    if(n==0)
        return 0;
    cout<<n<<endl;
    countt(n-1);

}
//POWER OF 2
int power(int n){
    if(n==0)
        return 1;
    int small=power(n-1);
    int big=2*small;
    //f(n)=2*f(n-1)
    return big;
}
//FIBONACCI
int fibo(int n)
{
    if(n==0)
        return 0;
    if(n==1)
        return 1;
   int ans=fibo(n-1)+fibo(n-2);
   return ans;
}
int main()
{
    int n;
    cout<<"enter postion for fibonacci ";
    cin>>n;
    //cout<<fact(n);
    //cout<<power(n);
    //countt(5);
    cout<<fibo(n);
}
