#include<iostream>
using namespace std;

int x=5;
int &demo(){
    x=10;
    return x;
}
int main(){

cout<<"x = "<<x<<endl;
cout<<"x = "<<demo()<<endl;
demo()=200;
cout<<"x = "<<x<<endl;
return 0;
}