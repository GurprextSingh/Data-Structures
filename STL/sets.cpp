#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int>st;
    st.insert(1); // 1
    st.emplace(2); // 2
    st.insert(2);  // 1,2 -- it stores only in sorted an unique order
    st.insert(4);  //1,2,4
    st.insert(3);  // 1,2,3,4

    // Functions:
    //begin(), end(),rbegin(),size()
    //empty(), swap();

    // {1,2,3,4,5}
    //auto it = st.find(3);
      auto it = st.find(6);
    cout<<*it;


}