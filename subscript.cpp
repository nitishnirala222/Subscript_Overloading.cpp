#include<iostream>
using namespace std;
const int limit=10;
class Subscript
{
int arr[limit];
public:
Subscript()
{
for(int i=0;i<limit;i++)
arr[i]=i;
}
int &operator [](int i)
{
if(i>limit){
cout<<"Index is out of bound."<<endl;
return arr[0];}
else
return arr[i];
}};
int main()
{
Subscript obj;
cout<<obj[74];
}
