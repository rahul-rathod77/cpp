/*#include<iostream>
using namespace std;
int main(){
    int arr[5] = {8,55,89,90,43};
    for(int i=0;i<=4;i++){
        cout<<arr[i]<<endl;
    }
    for(int i = 0; i<=5; i++){
        cout<<i<<endl;
    }
    return 0;
}*/

/*#include<iostream>
using namespace std;

int main(){
    int arr[]= {2,4,5,6,7,190,389,6456};
    int n = sizeof(arr)/4;
    //int product= 1;
    int mx = arr[0];
    int count =0;
    for(int i=0;i<n; i++){
        //product *= arr[i];
        mx = min(mx, arr[i]);

    }
        if(arr[1]>count; count++){
        cout<<count;
    }

    cout<<mx;
}*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    int arr[] = {1,4,9,16};
    for(int i=0;i<=4; i++){
        cout<<arr[i]<<endl;
    }
    int square = arr[0] * arr[1];
    if(arr[1] * arr[2] || arr[2]*arr[3]){
        cout<<arr<<endl;
    }
    cout<<square<<endl;
}
