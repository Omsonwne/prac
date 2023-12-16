#include<iostream>
using namespace std;
class Calculator
{
 private:
 float num1,num2,result;
 char op;
 public:
 void get()
 {
 cout<<"\nEnter operator:";
 cin>>op;
 cout<<"\nEnter first number:";
 cin>>num1;
 cout<<"\nEnter Second number:";
 cin>>num2;
}
 void calculate()
 {
 switch(op)
 {
 case '+':
 result=num1+num2;
 cout<<" Answer = "<<result;
 break;
 case '-':
 result=num1-num2;
 cout<<" Answer = "<<result;
break;
 case '*':
 result=num1*num2;
 cout<<" Answer = "<<result;
 break;
 case '/':
 if(num2==0)
 cout<<"\n Error. Not valid.";
 result=num1/num2;
 cout<<" Answer = "<<result;
 break;
 }

}
};
int main()
{
 char ag;
 Calculator obj;
 x:obj.get();
 obj.calculate();
 cout<<"\n Do another (y/n)? ";
 cin>>ag;
 if(ag=='y'||ag=='Y')
 goto x;
 return 0;
} 
/*
g++ 2.cpp
./a.out

Enter operator:+

Enter first number:30

Enter Second number:20
 Answer = 50
 Do another (y/n)? y

Enter operator:-

Enter first number:60

Enter Second number:70
 Answer = -10
 Do another (y/n)? y

Enter operator:*

Enter first number:60

Enter Second number:12
 Answer = 720
 Do another (y/n)? y

Enter operator:/

Enter first number:30

Enter Second number:6
 Answer = 5
 Do another (y/n)? y

Enter operator:/

Enter first number:30

Enter Second number:0

 Error. Not valid. Answer = inf
 Do another (y/n)? n
*/