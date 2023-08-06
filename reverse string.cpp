#include<iostream>
using namespace std;

void rev(string& str,int s,int e){
    cout<<str<<endl;
    if(s>e)
        return;
    swap(str[s],str[e]);
    rev(str,s+1,e-1);
}

int main(){
    string str="bott";
    cin>>str;
    rev(str,0,str.length()-1);
    cout<<str;
}
