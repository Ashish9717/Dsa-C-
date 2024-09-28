//Vector is  similar to Arrays and Vectors are dynamic in nature . means the size of vector can be modified.
//Stl -- Standard template library in c++ .it is like a tool box . IN that many od data stucture  code of implimentation are allrady written.  ALl data sturcure are known as data containers

#include<iostream>
#include<vector>
using namespace std;

int main(){
        vector<int> vec;
        // vector<char> vec={'A','b','c' ,'d'};

        cout<< "Size  = "<<vec.size() <<endl;

        vec.push_back(25);
         vec.push_back(85); 
          vec.push_back(5);
          vec.push_back(1);
          vec.push_back(788);
        //   vec.pop_back();
         cout<< " After push back Size  = "<<vec.size() <<endl;
         cout<<"Capacity =" <<vec.capacity()<<endl;
        // vector<int> vec(3,0);
        // for(int val : vec ){   //for each loop that can used to read the values not the index
        //         cout<< val<<endl ;
        // }
        cout<<vec.front()<<endl;
        cout<<vec.back()<<endl;
        cout<<vec.at(1)<<endl;
        // cout  << vec[0] <<endl;
        return 0;
}

//Vector Functions --
// Size -- It returns the size of a function
// Push_back -- It is used to Insert or push values at the end of Vector;
// Pop_back -- It is used to to delete the  last element of vector ;
// Front-- It is used to print the front value of Vector.
// Back -- It is used to print the last value of the vector.
// At -- It is used Access the specific index value .