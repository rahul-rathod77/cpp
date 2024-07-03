/*#include<iostream>
using namespace std;
int main(){
    int array[]={3,1,4,0,5,6};
    int targetsum=5;
    int size =6;

    int triplets=0;

    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            for(int k=j+1;k<size;k++){
                if(array[i]+array[j]+array[k]==targetsum){
                    triplets++;
                }
            }
        }
    }
    cout<<triplets<<endl;

    return 0;
}*/

/*#include<iostream>
using namespace std;

int main(){

    int array[] = {2,3,4,5,1,4,4,5,1};
    int size =9;


    for(int i=0;i<size;i++){

        for(int j=i+1; j<size;j++){

            if(array[i]==array[j]){
                array[i]=array[j]=-1;
            }
        }
    }

    for(int i=0;i<size;i++){
        if(array[i]>0){
            cout<<array[i]<<endl;
        }
    }

    return 0;

}*/

/*#include<iostream>
#include<climits>
using namespace std;

int largestElementIndex(int array[], int size){
    int max=INT_MIN;
    int maxindex=-1;
    for(int i=0;i<size;i++){
        if(array[i]>max){
            max=array[i];
            maxindex=i;
        }
    }
    return maxindex;

}


    int main(){

        int array[]={2,3,5,0,6,1,7};
        int n=7;
        int indexoflargest = largestElementIndex(array,n);
        cout<<array[indexoflargest]<<endl;
        array[indexoflargest]=-1;

        int largestelement = array[indexoflargest];
        for(int i=0;i<n;i++){
            if(array[i]==largestelement){
                array[i]=-1;
            }
        }

        int indexofsecondlargest = largestElementIndex(array,n);
        cout<<array[indexofsecondlargest]<<endl;

        return 0;
    }*/

    #include<iostream>
    #include<vector>
    using namespace std;
    int main(){
        int n;
        cin>>n;

        vector<int>v(n);
        for(int i=0;i<n; i++){
            cin>>v[i];
        }

        const int N = 1e5 + 10;
        vector<int> freq(N,0);
        for(int i=0;i<n; i++){
            freq[v[i]]++;
        }
        cout<<"Enter queries: ";
        int q;
        cin>>q;

        while(q--){
            int queryelement;
            cin>>queryelement;
            cout<<freq[queryelement]<<endl;
        }


        return 0;

    }

    

