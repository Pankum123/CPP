#include<iostream>
#include<vector>
using namespace std;

int lastoccurance(vector<int> v,int value){
    int occurance=-1;
    // begin se aage badhao
    /*
    for(int i=0;i<v.size();i++){
        if(value==v[i]){
            occurance=i;
        }
    }
    */
    //last se shuru karo
    for(int i=v.size()-1;i>=0;i--){
        if(value==v[i]){
            occurance=i;
            break;
        }
    }

    return occurance;
}
int main(){
    vector<int> v1{1,2,3,2,1,3,1,5};
    vector<int> v2(5);

    cout<<"enter vactor element "<<endl; 
    for(int i=0;i<5;i++){
        cin>>v2[i];
    }
    cout<<"enter a value ";
    int x;
    cin>>x;
    
    cout<<"lastoccurancr in vector 1 = "<<lastoccurance(v1,x)<<endl;
    cout<<"lastoccurancr in vector 2 = "<<lastoccurance(v2,x)<<endl;
return 0;
}