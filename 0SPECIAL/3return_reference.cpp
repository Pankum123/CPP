
#include<iostream>
using namespace std;

int &demo(int &a){ // int &a=x
    a=10;
    return a;
}
int main(){
 
int x=5;
cout<< demo(x) <<endl; //demo(x) is a variable [demo(x)=x]
cout<<"x = "<<x<<endl;
cout<< &demo(x) <<endl; //demo(x) variable ka address print hoga
cout<< &x <<endl; // x and demo(x) ka address same

cout<<"rocket"<<endl;
demo(x)=200;
cout<<"x = "<<x<<endl;
cout<<demo(x)<<endl;

return 0;
}
