#include <iostream>
using namespace std;

int main()
{
	int arr[20],n,i,sum=0;
	cout<<"How many element enter: ";
   cin>>n;
   cout<<"Enter any "<<n<<" elements in Array: ";
   for(i=0;i<n;i++)
   {
   cin>>arr[i];
   }
   cout<<"Sum of the Elements are: ";

   for(i=0;i<n;i++)
   {
    sum=sum+arr[i];
   }
   for(i=0;i<n;i++)
   {
   }
  cout<<sum;
  return 0;
}
