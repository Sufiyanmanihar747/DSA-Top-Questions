#include<iostream>
using namespace std;

int doublepointer(int **p2){
        //p2=p2+1;
    //no change occur because we pass value not address

        //*p2=*p2+1;
    //address of ptr1 will be changed

        **p2=**p2+1;
    //value a b will be changed

}

int getsum(int *arr,int n){
    cout<<"size "<<sizeof(arr)<<endl;
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    return sum;
}

int main(){
    int a=8;
    cout<<a<<endl;
    int *ptr=&a;
    cout<<ptr<<endl;
    *ptr=*ptr+1;
    cout<<*ptr<<endl;

    int arr[5]={1,2,3,4,5};
    char ch[6]="abcde";
    cout<<"integer array "<<arr<<endl;
    cout<<"character array "<<ch<<endl;

    char *c=&ch[0];
    cout<<"when null character "<<c<<endl;
    char temp ='z';
    //value of pointer when no null character
    char *p=&temp;
    cout<<"when no null character "<<p<<endl;

    int arrr[6]={1,2,3,4,5,8};
    //this will return sum from 4 to 8
    cout<<"sum is " <<getsum(arrr+3,3)<<endl;

    //DOUBLE POINTERS
    int b=5;
    int* ptr1=&b;
    int** ptr2=&ptr1;
    cout<<b<<endl;
    cout<<*ptr1<<endl;
    cout<<**ptr2<<endl;
  //ALL VALUES ARE SAME BELOW
    cout<<&b<<endl;
    cout<<ptr1<<endl;
    cout<<*ptr2<<endl;
    //BEFORE FUNCTION EXECUTED
    cout<<"before function is executed"<<endl;
    cout<<b<<endl;
    cout<<ptr1<<endl;
    cout<<ptr2<<endl;
    doublepointer(ptr2);
    cout<<"after function is executed"<<endl;
    cout<<b<<endl;
    cout<<ptr1<<endl;
    cout<<ptr2<<endl;

}
