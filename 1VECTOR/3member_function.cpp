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
    cout<<"current capacity is = "<<v1.capacity()<<endl;

    for(int i=0;i<=9;i++)
    v1.push_back(10*(i+1));
    cout<<"current capacity is = "<<v1.capacity()<<endl;
    display(v1);


   // pop_back() function
   cout<<"after pop"<<endl;
    
    v1.pop_back();
    cout<<"current capacity is = "<<v1.capacity()<<endl;
    v1.pop_back();
    cout<<"current capacity is = "<<v1.capacity()<<endl;
    v1.pop_back();
    cout<<"current capacity is = "<<v1.capacity()<<endl;
    v1.pop_back();
    cout<<"current capacity is = "<<v1.capacity()<<endl;

    // size() function - no of element 
    cout<<"total no of element "<<v1.size()<<endl;
    display(v1);

   // clear() function it removes all element
    //    v1.clear();
    //    cout<<"current capacity is = "<<v1.capacity()<<endl;
    //    cout<<"total no of element "<<v1.size()<<endl;

    // at() function it return ith element
    cout<<"value at index 1 is = "<<v1.at(1)<<endl;
    cout<<"value at index 3 is = "<<v1.at(3)<<endl;

    // front() function - return first element 
    cout<<"first value is = "<<v1.front()<<endl;

    // back() function - return last element
    cout<<"last value is = "<<v1.back()<<endl;

    // insert at  given position use iterator(pointer) and insert() function
    vector<int>::iterator pankaj=v1.begin();

    // insert at 0th position
    v1.insert(pankaj,35);
    for(int i=0;i<v1.size();i++){ 
        cout<<v1[i]<<" ";
     }
     cout<<endl;
    // insert at 1st position
    v1.insert(pankaj+1,40);
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
     }
     cout<<endl;
    // insert at 3rd position
    v1.insert(pankaj+3,50);
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
     }
    cout<<endl;
    // print value use iterator
    cout<<"print value use iterator"<<endl;
    while(pankaj != v1.end()){
      cout<< *pankaj <<" ";
      pankaj++;
    }

    cout<<endl;
    //use insert function to insert
    cout<<"use insert function to insert"<<endl;
    v1.insert(v1.begin()+3,500);
    display(v1);

    //use erase function to delete
    cout<<"use erase function to delete"<<endl;
    v1.erase(v1.end()-4);
    display(v1);
return 0;
} 