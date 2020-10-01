#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;

main()
{ vector<int> A;

  A.push_back(11);
  A.push_back(2);
  A.push_back(3);
  A.push_back(4);
  A.push_back(100);
  A.push_back(123);
  A.pop_back();
  A.pop_back();
 // To sort the vector 
 // sort(A.begin(),A.end());

 // To make 2D vector
 vector<vector<int>> arr;
 //this is how we can insert into 2D vector in c++
 for(int i=0;i<3;i++)
 { 
   vector<int> temp;
   for(int j=0;j<9;j++)
   temp.push_back(i);
   
   arr.push_back(temp);
 } 
 
 
 for(int x:A)
  cout<<x<<" ";
  
  
}

