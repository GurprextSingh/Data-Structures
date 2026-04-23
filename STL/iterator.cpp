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
 cout<<endl;

 // Traversing The Loop with Auto

 for (auto it=v.begin(); it !=v.end();it++)
 {
   cout<<*(it)<<" " ;
 }
 cout<<endl;
 v.erase(v.begin()+1);
 for (auto it=v.begin(); it !=v.end();it++)
 {
   cout<<*(it)<<" ";  //5 3 6 4 6
 }
 cout<<endl;
 v.erase(v.begin()+1,v.begin()+4);

 for (auto it=v.begin(); it !=v.end();it++)
 {
   cout<<*(it)<<" "; 
 }

 
}