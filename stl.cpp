//code online (works on c++ and later only)

#include<iostream>
#include<utility>
#include<vector>
using namespace std;

//vectors
int main()
{
  //for unitialized length vectors
  vector<int> v;
  v.push_back(1);
  v.emplace_back(2);
  cout<<v[0]<<v[1]<<endl;
  //for pair() of vectors(dynamic arrays)
  vector<pair<int,int> >vec;
  vec.push_back({1,2});
  vec.emplace_back(4,9); //it assumes vec to be a pair, hence, no need to put it in {} unlike push_back
  cout<<vec[0].first<<vec[0].second<<vec[1].first<<vec[1].second<<endl;
  
  //for initialized length vectors
  vector<int> iv(5); //vector of 5 elements 
  vector<int> iv1(5,20); //vector of 5 elements each having value as 20
  
 //Built-in keywords 
  vector<int> vb;
  vb.emplace_back(1);
  vb.emplace_back(2);
  vb.emplace_back(3);
  vb.emplace_back(4);
  cout<<&(*((vb.begin())))<<endl; //acessing address directly by use of built-in functions
  vector<int>::iterator x=vb.begin();//assigning address to some variable of vector vb
  vector<int>::iterator y=vb.end();
  vector<int>::reverse_iterator a=vb.rend();
  vector<int>::reverse_iterator b=vb.rbegin();
  cout<<&(*x)<<&(*(--y))<<&(*(--a))<<&(*b)<<endl;
  
  //Different ways of acessing elements of a vector
  for (int i=0; i<vb.size(); i++)
    cout<<v[i]<<" ";
  cout<<endl;
  for (vector<int>::iterator i=vb.begin(); i!=vb.end(); i++)
    cout<<*(i)<<" ";
  cout<<endl;
  for (auto i=vb.begin(); i!=v.end(); i++) //auto assigns the same data type as vb to i, if vb was int it would have assigned int directly to i
    cout<<*(i)<<" ";
  cout<<endl;
  for (auto i: vb) //range-based loops; for i on vb, incerements i each time
    cout<<i<<" ";
  cout<<endl;
  
  cout<<vb.back()<<endl;
  return 0;
}


//pair 
//(for modern compilers : pair<int,int> p={1,2};
// pair<int, pair<int,int> > x={7,{8,9}};)
// int main()
// { 
//   pair<int,int> p=make_pair(1,2);
//   cout<<p.first<<p.second<<endl;
//   pair<int, pair<int,int> > x=make_pair(7,make_pair(8,9));
//   cout<<x.first<<x.second.first<<x.second.second<<endl;
//   pair<int, int> arr[]={make_pair(2,4),make_pair(1,5),make_pair(5,6),make_pair(8,9)};
//   cout<<arr[1].second;
//   return 0;
// }
