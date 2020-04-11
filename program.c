#include<stdio.h>
int main()
{
  int a[50],n,i,j,counter=0;
    scanf("%d",&n);
  int s=n/2;//majority element = elements which occure more than n/2
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
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
      printf("%d",a[i]);
      break;
    }
    else
    {
      printf("There is no element which occures more than n/2");
      break;
    }
}
  return 0;
}
