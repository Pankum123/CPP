#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void insert(vector<int> &v){
   v.push_back(100);
}



int main(){

vector<int> v1={1,2,3,4,5};
display(v1);

insert(v1);
display(v1);
return 0;
}