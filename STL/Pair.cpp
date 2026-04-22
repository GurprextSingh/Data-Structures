#include<bits/stdc++.h> 
using namespace std;
int main(){
    // Initlisation and Declaration of a pair:
    pair<int,int> p1= {1,2};
    cout<<p1.first<<endl;
    // Nested Pair:
    pair<int, pair<int,int>> p2 ={{3},{5,6}};
    cout<<p2.first<<" and the second Pair value are: "<<p2.second.first<<endl;

     //Pairas as a Array:
    pair<int,int> arr[]= {{1,2},{3,4},{5,6}};
    cout<<arr[1].first;

}