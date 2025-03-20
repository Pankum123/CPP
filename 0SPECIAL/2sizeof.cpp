#include<iostream>
using namespace std;
int main(){

    int a;
    char b;
    double c;
    // int *p=&a;
    // char *q=&b;
    // double *r=&c;
    int *p;
    char *q;
    double *r;
    
    cout<<"size of data type "<<endl;
    // cout<<"size of a = "<<sizeof(a)<<"byte" <<endl;
    // cout<<"size of b = "<<sizeof(b)<<"byte" <<endl;
    // cout<<"size of c = "<<sizeof(c)<<"byte" <<endl;

    
    cout<<"size of *p = "<<sizeof(*p)<<"byte" <<endl;
    cout<<"size of *q = "<<sizeof(*q)<<"byte" <<endl;
    cout<<"size of *r = "<<sizeof(*r)<<"byte" <<endl;

    cout<<"size of pointer "<<endl;
    cout<<"size of p = "<<sizeof(p)<<"byte" <<endl;
    cout<<"size of q = "<<sizeof(q)<<"byte" <<endl;
    cout<<"size of r = "<<sizeof(r)<<"byte" <<endl;

    cout<<"note: size of pointer depend on compiler "<<endl;
    cout<<"note: every compiler pointer size is constant(fixed)"<<endl;
    cout<<"note: size of pointer always same all data type in a specific compiler"<<endl;
return 0;
}