#include<iostream>
using namespace std;

bool check(string& str,int s,int e){
    if(str[s]!=str[e])
        return false;
    if(s>e){
        return true;
    }
    check(str,s+1,e-1);


}

int main(){
    string str;
    cin>>str;
    cout<<check(str,0,str.size()-1);
}
