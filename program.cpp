#include<iostream>
using namespace std;
int main()
{
  int a[50],n,i,j,counter=0;
  cin>>n;
  int s=n/2;//majority element = elements which occure more than n/2
  for(i=0;i<n;i++)
  {
    cin>>a[i];
  }
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      if(a[i]==a[j])
      {
        counter=counter+1;//to count the same elements
      }

    }
  if(counter>s)
  {
  cout<<a[i]<<endl;
  break;
  }
  else
  {
  cout<<"There is no element which occures more than n/2"<<endl;
  break;
  }
}
return 0;
}
