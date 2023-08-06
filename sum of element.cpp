#include<iostream>
using namespace std;

void print(int arr[],int sizee){
    for(int i=0;i<sizee;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

int sumfunc(int*arr,int sizee){
    print(arr,sizee);
    if(sizee==0)
        return 0;
    int sum=0;
    sum=arr[0];
    return sum+sumfunc(arr+1,sizee-1);

}

int main(){
    int arr[5]={6,5,3,4,5};
    cout<<sumfunc(arr,5);


}
