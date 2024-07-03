#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the marks : ";
    cin>>n;
    if(n<=50){
        cout<<"good"<<endl;
    }
    else if(n<=100){
        cout<<"very good";
    }

    else{
        cout<<"fail sorry";
    }
}