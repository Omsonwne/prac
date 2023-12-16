#include<iostream>
#include<string.h>
using namespace std;
class usr{
public: int age,income;
char name[20],city[10];
bool wheel4;
void exp()
{
cout<<"\nSome part of data is not valid";
}
};
int main()
{
usr obj;
int a=1;
try{
cout<<"\n Enter name";
cin>>obj.name;
cout<<"\n Enter Age";
cin>>obj.age;
if(obj.age<18)
	throw a;
else if(obj.age>55)
	throw a;
cout<<"\n Enter Income";
cin>>obj.income;
if(obj.income<50000)
	throw a;
else if(obj.income>100000)
	throw a;
cout<<"\n Enter City";
cin>>obj.city;
if(strcmp(obj.city,"Pune")==0||strcmp(obj.city,"Mumbai")==0||strcmp(obj.city,"Banglore")==0||strcmp(obj.city,"Chennai")==0){
}
else
{
throw a;
}
cout<<"\n Do you have 4Wheeler ent 1 if yes else 0";
cin>>obj.wheel4;
if(obj.wheel4!=1)
	throw a;
else
{
    cout<<"\nName=\t"<<obj.name;
    cout<<"\nAge=\t"<<obj.age;
    cout<<"\nIncome=\t"<<obj.income;
    cout<<"\n4 wheeler=\t"<<obj.wheel4;
}

}
catch(int a1)
{
obj.exp();
}
return 0;
}
/* Output with Valid Data
g++ b1.cpp
./a.out
Enter nameXYZ
Enter Age36
Enter Income51000
Enter CityMumbai
Do you have 4Wheeler ent 1 if yes else 01
Name=	XYZ
Age=	36
Income=	51000
4 wheeler=	1

Output with inalid Data
g++ b1.cpp
./a.out
Enter Age36
Enter Income52000
Enter CityNashik
Some part of data is not valid
*/