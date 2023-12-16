#include<iostream>
using namespace std;
class per{protected: char name[20];
			int age;

};
class Aca{
protected: char Quali[10];
		float perc;
public: Aca(){
cout<<"\nEnter Qualification\t";
cin>>Quali;
cout<<"\nEnter Percentage\t";
cin>>perc;
}

};
class Pro:public per,public Aca{
char Desig[10];
float Salary;
public: Pro()
{
cout<<"\nEnter name\t";
cin>>name;
cout<<"\nEnter age\t";
cin>>age;
cout<<"\nEnter Designation\t";
cin>>Desig;
cout<<"\nEnter Salary\t";
cin>>Salary;
}
void Display()
{
cout<<"\nBiodata";
cout<<"\nName:\t"<<name;
cout<<"\nAge:\t"<<age;
cout<<"\nQualification:\t"<<Quali;
cout<<"\nPercentage:\t"<<perc;
cout<<"\nDesignation:\t"<<Desig;
cout<<"\nSalary:\t"<<Salary;
}
};
int main()
{
Pro obj;
obj.Display();
return 0;
}


/* 
g++ 4.cpp
./a.out

Enter Qualification	M.Tech
Enter Percentage	72.72
Enter name	XYZ
Enter age	36
Enter Designation	Assi_Prof
Enter Salary	60000
Biodata
Name:	XYZ
Age:	36
Qualification:	M.Tech
Percentage:	72.72
Designation:	Assi_Prof
Salary:	60000
*/


