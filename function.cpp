/*#include<iostream>
using namespace std;

int addition(int x, int y){
    int result= x +  y;
    return result;  
}

void fun(string name){
    cout<<"are you hero"<<name<<"@"<<endl;
}


int main(){

    int x = addition(24,67);
    cout<<x;
    fun("rahul");

    return 0;
}*/

// print square number

/*#include<iostream>
#include<math.h>
using namespace std;

int square(int x){
return  x * x;
}

int main(){
    for(int i=0; i<=5; i++){
        cout<<square(i)<<" ";
    }

    return 0;

}*/

// print circle

/*#include<iostream>
#include<math.h>
using namespace std;

int square(int x){
    return x*x;
}

double circumference(int r){
    return 2*3.14*r;
}
double area(int r){
    return 3.14*square(r);

}


int main(){
    int r = 3;
    cout<<circumference(r)<<" "<<area(r)<<endl;

    return 0;
}*/

/*#include<iostream>
using namespace std;

bool voting(int age , int limit){
    if(age >= limit){
        return true;
    } else {
        return false;
    }
}

int main(){
    int votings = 18;
    int elegible= voting( 16, votings);
    if(elegible){
        cout<<"yes,you are voting now";
    }else{
        cout<<"you are not eligible";
    }

    return 0;

}*/

/*#include<iostream>
using namespace std;

bool isOdd(int n){
    if(n%2 !=0){
        return true;
    }else{
        return false;
    }
}
int main(){
    int a = 1, b= 18;
    for(int i= a; i<=b; i++){
     if(isOdd(i)){
        cout<<i<<" ";
     } else{
        cout<<" ";
     }
     
    }

    return 0;
    
}*/

/*#include<iostream>
//using namespace std;

bool prime(int n){
    for(int i=2; i<=n-1; i++)
    if(n%i == 0){
        return false;
    } 
    
}

//int main(){
    int a = 2, b=10;
    for(int i =a; i<=b; i++){
        if(prime(i)){
            cout<<i<<" ";
        }
        else{
            cout<<" ";
        }
    }
    return 0;
}*/
#include<iostream>
using namespace std;
void swap( int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

int main(){
    int x = 9;
    int c = 1;
    int &y = x;
    swap(x,c);
    cout<<x<<" "<<c;
    return 0;
}