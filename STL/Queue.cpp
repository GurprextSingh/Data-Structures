#include<bits/stdc++.h>
using namespace std;
int main(){
 queue<int> q;
 q.push(1);  //1
 q.push(5);  // 1,5
 q.emplace(8); // 1,5,8
 q.back() +=5; // 1,5,13
q.front(); //1
q.pop(); // 5,13
// size swap empty same as stack;
// Complextiy of Operation O(1)

}