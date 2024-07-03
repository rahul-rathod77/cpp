/*#include<iostream>
using namespace  std;

void changevalue(int &z, int &y){
    z = 100;
    y = 200;
}


int main(){
    int a= 5;
    int b = 90;
    changevalue(a,b);
    cout<<a<<" "<<b<<endl;

}*/
//actaul parameters

#include<iostream>
using namespace std;

int add(int a, int b= 2, int c= 3){
    return a+b+c;
}
int main(){
    cout<<add(2)<<endl; //7
    cout<<add(2,3,4)<<endl;//9
    cout<<add(2,3,6)<<endl; //11
    cout<<add(2,8,0)<<endl; // 10

    return 0;
}