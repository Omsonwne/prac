#include<iostream>
using namespace std;
template <class t>
void selection_sort()
{
   t a[5];
   t temp;
   int i,j;
   cout<<"\nEnter FIve Elements\t";
   for(i=0;i<5;i++)
   {
       cin>>a[i];
   }
   for(i=0;i<5;i++)
    for(j=i+1;j<5;j++)
    {
        if(a[i]>a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    cout<<"\n sorted array is";
    for(j=0;j<5;j++)
    {
        cout<<"\t"<<a[j];
    }
    cout<<"\n";

}
int main()
{
    cout<<"\n Integer sorting";
    selection_sort<int>();
    cout<<"\n Float sorting";
    selection_sort<float>();
    return 0;
}

/* output
g++ b3.cpp
./a.out
Integer sorting
Enter FIve Elements	5   4   6   3   7
sorted array is	3	4	5	6	7

 Float sorting
Enter FIve Elements	1.5 1.4 1.6 1.3 1.7
sorted array is	1.3	1.4	1.5	1.6	1.7
*/