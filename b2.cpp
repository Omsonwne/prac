#include<iostream>
#include<fstream>
using namespace std;
class student{
public: int roll,marks;
	char name[20];
	void set()
	{
	cout<<"Enter Roll Number"<<endl;
	cin>>roll;
	cout<<"Enter  name"<<endl;
	cin>>name;
	cout<<"Enter  marks"<<endl;
	cin>>marks;	
	}
};
int main()
{
int n;
cout<<"\nHow many records u want to insert";
cin>>n;
student obj;
ofstream f1("output.txt");
if(!f1.is_open())
	cout<<"File is not open";
for(int i=0;i<n;i++)
{
obj.set();
f1<<obj.roll<<"\t"<<obj.name<<"\t"<<obj.marks<<endl;
}
f1.close();
ifstream f2("output.txt");
if(!f2.is_open())
	cout<<"File is not open";
string ln;
while(getline(f2,ln))
{
cout<<"\n"<<ln;
}
f2.close();
return(0);
}
/* output
g++ b2.cpp
./a.out
How many records u want to insert3
Enter Roll Number
30
Enter  name
ABC
Enter  marks
60
Enter Roll Number
31
Enter  name
PQR
Enter  marks
61
Enter Roll Number
32
Enter  name
XYZ
Enter  marks
62
30	ABC	60
31	PQR	61
32	XYZ	62

also the output.txt and show the content of the file.
*/









