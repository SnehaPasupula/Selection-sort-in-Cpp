#include<iostream>
using namespace std;
void Selection_Sort(int n,int a[])
{
        for(int i=0;i<n;i++)
    {
        int min_idx=i; //setting minimum index to i
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
            {
                min_idx=j;
               //Swapping
                int temp;
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
int main()
{
    int n;  //number of elements in an array
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    Selection_Sort(n,a);
    //printing the sorted array
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

}