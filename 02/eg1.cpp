#include<iostream>
#include<list>
using namespace std;
int main()
{
list<int> lst{11,22,33,44,55,66};
for(auto i:lst)
{
cout<<i<<endl;
}
return 0;
}