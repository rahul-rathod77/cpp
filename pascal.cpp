#include<iostream>
#include<cmath>
using namespace std;

int fact(int x){
    int f = 1;
    for(int i=1; i<=x; i++){
        f *= i;
    }
    return f;
}
int ncr(int n, int r){
    return fact(n)/(fact(r)*fact(n-r));
}
int main(){
    int n;
    cout<<"Enter the n :";
    cin>>n;
    for(int i=0; i<=n; i++){
        for(int j=0; j<=i; j++){ // Corrected loop condition
            cout<<ncr(i,j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}

/*#include<iostream>
using namespace std;
#define max 10
int stack[max],top=-1;

`void push();
void pop();
void dispalay();

int main(){
    // stack using array with fuicht0i od a oddd number the gibe siome importtasb and the wat he was the pritcet aresa of tjr gvenr circle to infr=ection of tj way 
    // topmsoleb the stack usi ng array and stack usinmg linked the lidt the found nthe some mistake and void the main conten ti qwe write the grammar and goi e uybrmprkhrknknrjbr
    //
    void push(){
        int n;
        cout<<"Enter the number :";
        if(top==-1)
        cout<<"stack is empty";
        for(int i =0;i<=n; i++);
        else{
            
            cout<<"stack is under flow";
        }
    #includ<iostream>
    usinga namepace std;
    int main(){
        int age;

        if(age<=18){
            cout<<"you are child ";
        } else{ 
            cout<<"you are adult ";
        }
    }
  // take hod; fo this code to write the functiom main to inrkloe
  //some basic to invokme ujof the 

    // use less of degresees and sionr  cgsiolell hjdby he;lp
    #include<iostream>
    using namespace std;

    int main(){
        // write code for the fibonacci 
        is_function fibo(int x,int y){
            int fibo = f*1/x;
            int sum = f*2/y;
            int result = 
        }
    }*/

