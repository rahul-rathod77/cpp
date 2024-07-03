/*#include<iostream>
using namespace std;

int main(){
    int array [] = {1,2,3,4};
    //cout<<sizeof(array)<<endl<<sizeof(array[3]);

    int size = sizeof(array);
    cout<<size<<endl;

    return 0;
}*/
/*#include<iostream>
using namespace std;

int main(){
    int array [] = {2,4,3,1};
    int size = sizeof(array)/sizeof(array[0]);

int sum =0;
for(int i=0; i<=size; i++){
    sum+=array[i];
}

cout<<sum<<endl;

return 0;
}*/
/*#include<iostream>
using namespace std;

int main(){
    int array [] = {1,3,4,48,7,28};
    int max=array[0];

    for(int i=1;i<6; i++){
        if(max<array[i]){
            max=array[i];
        }
    }

    cout<<max<<endl;
}*/

//leaner search

#include<iostream>
using namespace std;

int main(){
    int arrays []= {2,5,18,24,44};
    int key = 0;

    int ans= -1;

    for(int i=0;i<5;i++) {
        if(arrays[i]==key){
            ans=i;
            break;
        }
    }

    cout<<ans<<endl;
}