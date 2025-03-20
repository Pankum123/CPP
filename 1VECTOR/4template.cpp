#include<iostream>
#include<vector>
using namespace std;
template<class T>

void display(vector<T> &v){
    cout<<"displaying this vector"<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){

    vector<int> v1;
    display(v1);

    vector<char> v2(4);
    v2.push_back('5');
    v2.push_back('a');
    display(v2);

    vector<char> v3(v2);
    display(v3);

    vector<int> v4(6,13);
    display(v4);

return 0;
}