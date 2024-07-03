/*#include<iostream>
#include<vector>
using namespace std;


int main(){

    vector<int> v;
    /*cout<<"Size :"<<v.size()<<endl;
    cout<<"capacity :"<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Size :"<<v.size()<<endl;
    cout<<"capacity"<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Size : "<<v.size()<<endl;
    cout<<"capacity"<<v.capacity()<<endl;

    return 0;

}*/

/*for(int i = 0; i<5; i++){
    int element;
    cin>>element;
    v.push_back(element);
}
for(int i=0; i<v.size(); i++){
    cout<<v[i]<<" ";
}

cout<<endl;

//for each loop

for(int ele:v){
    cout<<ele<<" ";
}

return 0;

}*/
/*#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int>v(6);
    for(int i =0; i<6;i++){
        cin>>v[i];
    }
    cout<<"enter the x:";
    int x;
    cin>>x;

    int occurence=-1;
    for(int i=0; i<v.size(); i++){
        if(v[i]==x){
            occurence=i;
            break;
        }
    }
    cout<<occurence<<endl;
    return 0;

}*/
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v(6);
    for(int i=0; i<6;i++){
        cin>>v[i];

    }
    cout<<"Enter x:";
    int x;
    cin>>x;
    int occurences=0;

    for(int ele:v){
        if(ele==x){
            occurences++;
        }
    }
    cout<<occurences<<endl;
    return 0;
}