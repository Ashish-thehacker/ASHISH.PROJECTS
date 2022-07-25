#include<iostream>
#include<list>
using namespace std;
void display(list<int> & lst){
    list<int> :: iterator it;
    for(it = lst.begin(); it != lst.end(); it++){
        cout<<*it<<" ";
    }
}
int main(){
    list<int> list1; // empty list of 0 length 
    list1.push_back(10);    
    list1.push_back(20);    
    list1.push_back(30);    
    list1.push_back(40);    
    list1.push_back(50);    
    list1.push_back(60);   
    // list1.insert(10);
    display(list1) ;

    return 0;
}



