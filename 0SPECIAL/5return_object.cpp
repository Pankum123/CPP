#include<iostream>
using namespace std;

class test{
    int a,b;
    public:
    void getdata(int x,int y){
        a=x;
        b=y;
    }
    friend test sum(test,test);
    void display(test);
};
test sum(test t1,test t2){
    test t;
    t.a=t1.a+t2.a;
    t.b=t1.b+t2.b;
}
void test::display(test t){
    cout<<"value of a = "<<t.a<<endl;
    cout<<"value of b = "<<t.b<<endl;
}
int main(){

    test A,B,C;
    A.getdata(10,20);
    B.getdata(30,40);
    C=sum(A,B);
    A.display(A);
    B.display(B);
    C.display(C);

return 0;
}