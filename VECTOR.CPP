#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }cout<<"\n";
}
int main(){
    vector<int> vec1;
    int element, size;
    cout<<"ENTER THE SIZE OF YOUR VECTOR "<<endl;
    cin>>size;
    for(int i=0;i<size;i++){
        cout<<"ENTER AN ELEMENT TO ADD TO THIS VECTOR: " ;
        cin>>element;
        vec1.push_back(element);
    }
    display(vec1);
    vec1.pop_back();
    display(vec1);
    vector<int>:: iterator iter = vec1.end();
    vec1.insert(iter, 600);
    display(vec1);
    return 0;
}


