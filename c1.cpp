#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Item
{
 public:
 char name[10];
 int quantity;
 int cost;
 int code;
 bool operator==(const Item& i1)
 {
 if(code==i1.code)
 return 1;
 return 0;
 }
 bool operator<(const Item& i1)
 {
 if(code<i1.code)
 return 1;
 return 0;
 }
};
vector<Item> o1;
void print(Item &i1);
void display();
void insert();
void search();


int main()
{
 int ch;
 do
 {
 cout<<"\n*** Menu ***";
 cout<<"\n1.Insert";
 cout<<"\n2.Display";
 cout<<"\n3.Search";
 cout<<"\n4.Sort";
  cout<<"\n5.Exit";
 cout<<"\nEnter your choice:";
 cin>>ch;

 switch(ch)
 {
 case 1:
 insert();
 break;

 case 2:
 display();
 break;

 case 3:
 search();
 break;

 case 4:
 sort(o1.begin(),o1.end());
 cout<<"\n\n Sorted vector";
 display();
 break;

 case 5:
 exit(0);
 }

 }while(ch!=7);
 return 0;
}
void insert()
{
 Item i1;
 cout<<"\nEnter Item Name:";
 cin>>i1.name;
 cout<<"\nEnter Item Quantity:";
 cin>>i1.quantity;
 cout<<"\nEnter Item Cost:";
 cin>>i1.cost;
 cout<<"\nEnter Item Code:";
 cin>>i1.code;
 o1.push_back(i1);
}
void display()
{
 for_each(o1.begin(),o1.end(),print);
}
void print(Item &i1)
{
 cout<<"\n";
 cout<<"\nItem Name:"<<i1.name;
 cout<<"\nItem Quantity:"<<i1.quantity;
 cout<<"\nItem Cost:"<<i1.cost;
 cout<<"\nItem Code:"<<i1.code;
}
void search()
{
 vector<Item>::iterator p;
 Item i1;
 cout<<"\nEnter Item Code to search:";
 cin>>i1.code;
 p=find(o1.begin(),o1.end(),i1);
 if(p==o1.end())
 {
 cout<<"\nNot found.";
 }
 else
 {
 cout<<"\nFound."<<endl;
 cout<<"Item Name : "<<p ->name<<endl;
 cout<<"Item Quantity : "<<p ->quantity<<endl;
 cout<<"Item Cost : "<<p ->cost<<endl;
 cout<<"Item Code: "<<p ->code<<endl;
 }
}




/* Output
g++ c1.cpp
./a.out

*** Menu ***
1.Insert
2.Display
3.Search
4.Sort
5.Exit
Enter your choice:1
Enter Item Name:XYZ
Enter Item Quantity:30
Enter Item Cost:3000
Enter Item Code:5
*** Menu ***
1.Insert
2.Display
3.Search
4.Sort
5.Exit
Enter your choice:1
Enter Item Name:Book
Enter Item Quantity:30
Enter Item Cost:9000
Enter Item Code:4
*** Menu ***
1.Insert
2.Display
3.Search
4.Sort
5.Exit
Enter your choice:1
Enter Item Name:NoteBook
Enter Item Quantity:25
Enter Item Cost:625
Enter Item Code:6
*** Menu ***
1.Insert
2.Display
3.Search
4.Sort
5.Exit
Enter your choice:1
Enter Item Name:Pen
Enter Item Quantity:25
Enter Item Cost:250
Enter Item Code:2
*** Menu ***
1.Insert
2.Display
3.Search
4.Sort
5.Exit
Enter your choice:2
Item Name:XYZ
Item Quantity:30
Item Cost:3000
Item Code:5

Item Name:Book
Item Quantity:30
Item Cost:9000
Item Code:4

Item Name:NoteBook
Item Quantity:25
Item Cost:625
Item Code:6

Item Name:Pen
Item Quantity:25
Item Cost:250
Item Code:2
*** Menu ***
1.Insert
2.Display
3.Search
4.Sort
5.Exit
Enter your choice:3
Enter Item Code to search:4
Found.
Item Name : Book
Item Quantity : 30
Item Cost : 9000
Item Code: 4

*** Menu ***
1.Insert
2.Display
3.Search
4.Sort
5.Exit
Enter your choice:4
Sorted vector

Item Name:Pen
Item Quantity:25
Item Cost:250
Item Code:2

Item Name:Book
Item Quantity:30
Item Cost:9000
Item Code:4

Item Name:XYZ
Item Quantity:30
Item Cost:3000
Item Code:5

Item Name:NoteBook
Item Quantity:25
Item Cost:625
Item Code:6
*** Menu ***
1.Insert
2.Display
3.Search
4.Sort
5.Exit
Enter your choice:5
*/