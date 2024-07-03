/*#include<iostream>
#include<cmath>
using namespace std;

int fact(int x){
    int f = 1;
    for(int i = 1; i<=x; i++){
        f *=i;
    }
    return f;
}
//void sum(int a, int b){
    //cout<<a+b;
//} 

int main(){
    //sum(7,9);
    int n;
    cout<<"Enter the n :";
    cin>>n;

    int r;
    cout<<"Enter the r : ";
    cin>>r;
    int a = fact(n);
    int b = fact(r);
    int c = fact(n-r);
    cout<<a/(b*c);


}*/

// permautation
#include<iostream>
using namespace std;

int fact(int x){
    int f = 1;
    for(int i =1; i<=x; i++){
        f *=1;

    }
    return f;

}
int main(){
    int n;
    cout<<"Enter the n : ";
    cin>>n;
    int r;
    cout<<"Enter the r : ";
    cin>>r;

    int a = fact(n);
    int b = fact(n-r);
    cout<<a/(a*b);

} 
