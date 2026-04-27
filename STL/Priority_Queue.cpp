#include<bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<int> pq;
    pq.push(8);  //8
    pq.push(5);   // 8,5
    pq.push(10);  // 10,8,5
    pq.top();  // 10 Largest at top
    pq.pop(); // Top most element will delete
    
    //size swap empty funcs. are same as others

    // Min. Heap
    priority_queue<int,vector<int>,greater<int>>mh;
    mh.push(4); // 4
    mh.push(2);// 2,4
    mh.push(7);  // 2,4,7
    mh.top();  // prints 2

    // push --- O(1)
    // pop --  log(n)
}