#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> st;
    st.push(5);  // {5}
    st.push(2);  // {2,4}
    st.emplace(8); // {8,2,5}
    cout<<"Element at Top is "<<st.top()<<endl;; // element at top
    cout<<"Size of Stack: "<<st.size();
    stack<int>s2;
    st.swap(s2);
    cout<<s2.top();
}