#include<iostream>
#include<vector>
using namespace std;

int no__of_occurance(vector<int> v,int value){
    int occurance=0;
   /* 
    for(int i=0;i<v.size();i++)
    {
        if(value==v[i]){
            occurance++;
        }
    }
    */

    for(int ele:v)
    {
        if(ele==value){
            occurance++;
        }
    }
    
    return occurance;
}

int main(){
     vector<int> v1(5);

    cout<<"enter vactor element "<<endl; 
    for(int i=0;i<5;i++)
    {
        cin>>v1[i];
    }
    cout<<"enter a value ";
    int x;
    cin>>x;
    
    cout<<"number of occurance = "<<no__of_occurance(v1,x)<<endl;
return 0;
}