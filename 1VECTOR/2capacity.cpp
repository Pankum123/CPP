#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){

    vector<int> v1;

    // capacity() function
    cout<<"current capacity is = "<<v1.capacity()<<endl;

    // push_back() function
    v1.push_back(10);
    cout<<"current capacity is = "<<v1.capacity()<<endl;

    v1.push_back(20);
    cout<<"current capacity is = "<<v1.capacity()<<endl;

    v1.push_back(30);
    cout<<"current capacity is = "<<v1.capacity()<<endl;

    v1.push_back(40);
    cout<<"current capacity is = "<<v1.capacity()<<endl;

    v1.push_back(50);
    cout<<"current capacity is = "<<v1.capacity()<<endl;

    v1.push_back(60);
    cout<<"current capacity is = "<<v1.capacity()<<endl;

//     for(int i=0;i<5;i++){
//     cout<<v1[i]<<" ";
//    }
    display(v1);
return 0;
}