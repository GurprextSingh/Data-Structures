#include<bits/stdc++.h>
using namespace std;
int main(){
 vector<int> v;
 for (int i = 0; i <6; i++)
 {   cout<<"Enter a value:"<<endl;
     int x;
    cin>>x;
    v.push_back(x);
 }
 cout<<" Values Entered are:"<<endl;
 vector<int>::iterator it =v.begin();
 for (vector<int>::iterator it =v.begin(); it!=v.end(); it++)
 {
    cout<< *(it) << " ";

 }
 for (auto it  i < cout; i++)
 {
    /* code */
 }
 
}