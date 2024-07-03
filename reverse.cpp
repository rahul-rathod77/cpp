/*#include<iostream>
using namespace std;

int main(){
    int a[] = {12,34,56,78,80,53,78};
    int n = sizeof(a)/4;
    //int b[n];
    for(int i=0;i<n;i++){
        //b[i]= a[n-1-i];
        cout<<a[i]<<" ";
    }

    int i = 0;
    int j = n-1;
    while(i<j){
        int temp =a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
    cout<<endl;

}*/
#include<iostream>
using namespace std;

int multiple(int x, int y){
    if(x*y || x/y){
        cout<<"product"<<endl;
    }
    else{
        cout<<"errors are find ";
    }
    return product;
}

int main(){
    int x = 5;
    int y = 10;
    int result = multiple(x,y);
    cout<<result<<endl;

}
int n =3;
for(int i=1;i<n;i++){
 cout<<n<<endl;
 n = n *4;