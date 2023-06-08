#include <iostream>
int LinearSearch(int list[ ], int key);
using namespace std;
int main()
{
int list[] = {5, 3, 7, 4, 6};
int k = 4;
int i = LinearSearch(list, k);
if(i==-1)
cout << "the search item is not found" << endl;
else
cout << "The value is found at index position " << i << endl;
return 0;
}
int LinearSearch(int list[ ], int key)
{
int index=-1;
for(int i=0; i < n; i++)
{
if(list[i]==key)
{
index=i;
break;
}
}
return index;
}
