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

   vector<int> v1; // 0 length
   vector<char> v2(4); // 4 length
   vector<int> v3(5,8); // 5 length with initialize 10
   vector<string> v4(3,"Hello"); // 3 length with initialize Hello
   vector<int> v5{10,20,30,40,50};

   cout<<"vector 2"<<endl;
   v2[0]='a';
   v2[1]='b';
   v2[2]='c';
   v2[3]='d';
   cout<<v2[0]<<endl;
   cout<<v2[1]<<endl;
   cout<<v2[2]<<endl;
   cout<<v2[3]<<endl;

   cout<<"vector 3"<<endl;
   cout<<v3[0]<<endl;
   cout<<v3[1]<<endl;
   cout<<v3[2]<<endl;

   cout<<"vector 4"<<endl;
   cout<<v4[2]<<endl;
   cout<<v4[2]<<endl;

   //use normaly
   cout<<"vector 5"<<endl;
   cout<<v5[0]<<endl;
   cout<<v5[1]<<endl;
   cout<<v5[2]<<endl;
   cout<<v5[3]<<endl;
   cout<<v5[4]<<endl;

    
   //use loop
   cout<<"use for loop"<<endl;
   for(int i=0;i<5;i++){
    cout<<v5[i]<<" ";
   }
   cout<<endl;

   //use each loop
   cout<<"use for loop each ele"<<endl;
   for(int ele:v5){
    cout<<ele<<" ";
   }
    cout<<endl;
   //use function
   cout<<"use khud se banaye function"<<endl;
   display(v5);

   //use iterator
   cout<<"use iterator"<<endl;
   vector<int>::iterator i;
   for(i=v5.begin();i!=v5.end();i++){
      cout<< *i <<" ";
   }
   cout<<endl;


return 0;
}