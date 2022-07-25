#include<bits/stdc++.h>
#include<vector>
using namespace std;
// defining the rows and columns of vector of vectors
#define ROW 3
#define COL 3
int main(){
// initialising the vector of vectors 
vector<vector<int>> vec;
// elements to insert in column
int num =10;
// Inserting  elements into vector
for(int i=0;i<ROW;i++){
    // vector to store column elements 
    vector<int> v1; 
    for(int j=0;j<COL;j++){
        v1.push_back(num);
        num += 5;
    }
    //Pushing back above 1D vector
    // to create the 2D vector 
    vec.push_back(v1);
}
// Displaying the 2D vector 
for(int i=0;i<vec.size();i++){
    for(int j=0;j<vec[i].size();j++)
    cout<<vec[i][j]<<" ";
    cout<<endl;
}
return 0;
}