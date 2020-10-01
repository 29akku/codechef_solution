#include<bits/stdc++.h>
using namespace std;


int main()
{
    std::string string1 = "akramkeeanany";
    std::string string2 = "aka";
    std::string string_difference, string_intersection, string_union;

    std::sort(string1.begin(), string1.end());
    std::sort(string2.begin(), string2.end());

    std::set_difference(string1.begin(), string1.end(), string2.begin(), string2.end(), std::back_inserter(string_difference));
    std::cout << "In string1 but not string2: ->" << string_difference <<"<- "<< std::endl;

    std::set_intersection(string1.begin(), string1.end(), string2.begin(), string2.end(), std::back_inserter(string_intersection));
    std::cout << "string1 intersect string2: ->" << string_intersection <<"<- "<< std::endl;

    std::set_union(string1.begin(), string1.end(), string2.begin(), string2.end(), std::back_inserter(string_union));
    std::cout << "string1 union string2: ->" << string_union <<"<- "<< std::endl;

   //----------------------------------
   //string sorting
   //----------------------------------
   
   sort(string1.begin(),string1.end());
   cout<<string1;
    
   // there are several methods to declare string ,following are methods:
    // these are created in stack
    char name[20]={'j','o','n','\0'};
    char midname[]={'w','i','c','k','\0'};
    char lastname[]="geller";
   // while these is created in heap
    char *naam="john";
    
    // string class library
    //its a dunamic allocation
    string str="samriddhi kumari";
  
    return 0;
}
