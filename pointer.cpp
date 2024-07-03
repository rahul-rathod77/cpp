/*#include<iostream>
using namespace std;
void swap(int* a, int* b){
    int temp= *a;
    *a=*b;
    *b=temp;
}

int main(){
    int x =12;
    int y = 45;
    cout<<x<<" "<<y<<endl;

     swap(&x,&y);
    cout<<x<<" "<<y<<endl;
}*/

#include<iostream>
using namespace std;

void print(int x ){
    cout<<x<<endl;
    print(x-1);

}
int main(){
    print(3);

}

#include<iostream>
using namespace std;
int main(){
    
}
