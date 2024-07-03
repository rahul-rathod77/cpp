/*#include<iostream>
using namespace std;
int main(){
    int cp;
    cout<<"enter cost price : ";
    cin>>cp;
    int sp;
    cout<<"enter the selling price : ";
    cin>>sp;
    if(sp>cp){
        cout<<"profit";
    }

    else if(cp>sp){
        cout<<"loss";
    }
    else{
        cout<<"no profit no loss";
    }
    
    
}*/

/*#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;
    if(n%3==0 && n%5==0){
        cout<<"divisble 5 and 3";
    }
    if(n%15==0){
        cout<<"divisible by 15";
    }
    else{
        cout<<"not divisible by 5 and 3";
    }
}*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;
    if(n%5==0 && n%3==0){
        cout<<"divisible by 3 and 5";
    }
    else{
        cout<<"it not divisible by 3 and 5";
    }
}