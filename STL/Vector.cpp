#include<bits/stdc++.h>
using namespace std;
int main(){
 
    // Declaration Of Vector
    vector<int> v;

    // Adding Values to Vector v:
    v.push_back(4);
    v.emplace_back(2);
    cout<<" Values added in Vector are:"<<v[0]<<" and " <<v[1]<<endl;
    // Size of Vector:
    cout<<"Size of Array is "<<v.size()<<endl;
    // some another Operations:
    vector<int>v2(5,100);
    for (int  i = 0; i < v2.size(); i++)
    {
       cout<<v2[i]<<" "<<endl;
    }
   // Deletion iN Vector:

   v.pop_back(); // Removes Last Element From Vector
   v.empty();   // Checks is the vector Empty
   v.clear();   // Removes all elements 
   
    

}