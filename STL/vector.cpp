#include<bits/stdc++.h>
using namespace std;

int main(){
  vector<int> v;

  v.push_back(1);
  v.emplace_back(2); //faster

  vector<pair<int, int>>vec;
  vec.push_back({1,2});
  vec.emplace_back(3,4);

 // Accessing elements using the [] operator
    cout << vec[0].first << " " << vec[0].second << endl;
    cout << vec[1].first << " " << vec[1].second << endl;


  vector<int> v3(5,100);
  vector<int> v4(5);

  vector<int> v1(5,20);
  vector<int> v2(v1);

//Access
  cout<<v2[0]<<endl;

  vector<int>::iterator it = v2.begin();
  it++;
  cout<<*(it)<<endl;

  *it = *it + 2;
  cout<<*(it)<<endl;

// Access last elements

  vector<int>::iterator itt = v2.end();
  itt--;
  cout<<*(itt)<<endl;

  // Acces all the elements

  for(vector<int>::iterator acc = v2.begin(); acc !=v2.end(); acc++)
  {
  	cout<<"all emplace_back"<<*(acc)<<endl;
  }

  //shorcut
  for(auto it = v2.begin(); it !=v2.end(); it++)
  {
  	cout<<*(it)<<" ";
  }
  cout<<endl;

  // forEach loop 
  for(auto i : v9)
{
	cout<<i<<" ";
}


// array ecample
  int arr[] ={2,5,5,6};
  for(auto i : arr)
  {
  	cout<<i<<endl;
  }
  cout<<endl;


  // detete element in vector

vector<int> v9;
v9.emplace_back(2);
v9.emplace_back(4);
v9.emplace_back(6);
v9.emplace_back(9);
v9.emplace_back(8);
v9.emplace_back(7);

cout<<"before delete"<<endl;
for(auto i : v9)
{
	cout<<i<<" ";
}

v9.erase(v9.begin()+2, v9.begin()+6);

cout<<"afterrr delete"<<endl;
for(auto i : v9)
{
	cout<<i<<" ";
}

// delete element in vector

 v9.erase(v9.begin()+1);
cout<<"after delete"<<endl;
for(auto i : v9)
{
	cout<<i<<" ";
}

 


  

	return 0;
}
