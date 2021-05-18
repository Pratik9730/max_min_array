#include<iostream>
using namespace std;
int main()
{
    int n,maxNo,minNo;
    cout<<"Enter Size of an Array : ";
    cin>>n;
    int array[n];

    cout<<"Enter values of an Array : \n";
    for(int i=0;i<n;i++)
    {
       cin>>array[i];
    }

    cout<<"Your Submitted Array is \n";
    for(int i=0;i<n;i++)
    {
        cout<<array[i]<<"\n";
    }

    maxNo=minNo=array[0];  //Initializing maxNo and minNo=array[0]
    for(int i=0;i<n;i++)
    {
        if(maxNo<array[i]) //if maxNo is less than value inside array
        {
            maxNo= array[i]; //then value of array at that index is copied to maxNo
        }

        if(minNo>array[i])  //if minNo is greater than value inside array
        {
            minNo=array[i];  //then value of array at that index is copied to minNo
        }
    }
    cout<<"Maximum Number is "<<maxNo<<" and Minimum Number is "<<minNo; // printing the values
    return 0;
}
