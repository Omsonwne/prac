#include<iostream>
#include<string>
using namespace std;
class publication{
  protected: string title;
            float price;
            public:
};
class book:public publication
{
    int pcount;
public:
    book()
    {
        price=0;
        title="";
        pcount=0;
    }
    void reset(){
        price=0;
        title="";
        pcount=0;
    }
    void set()
    {
        int t;
        t=1;
        cout<<"\nEnter Title of Book\t";
        cin>>title;
        cout<<"\nEnter price of Book\t";
        cin>>price;
        if(price<0)
            throw t;
        cout<<"\nEnter total pages of Book\t";
        cin>>pcount;
        if(pcount<10)
            throw t;
    }
    void display()
    {
        cout<<"\n Title\t"<<title;
        cout<<"\n Price\t"<<price;
        cout<<"\n Total Pages\t"<<pcount;
    }
};
class tape:public publication
{
    int length;
public:
    tape()
    {
        price=0;
        title="";
        length=0;
    }
    void reset(){
        price=0;
        title="";
        length=0;
    }
    void set()
    {
        int t;
        t=1;
        cout<<"\nEnter Title of Tape\t";
        cin>>title;
        cout<<"\nEnter price of Tape\t";
        cin>>price;
        if(price<0)
            throw t;
        cout<<"\nEnter total length\t";
        cin>>length;
        if(length<1)
            throw t;
    }
    void display()
    {
        cout<<"\n Title\t"<<title;
        cout<<"\n Price\t"<<price;
        cout<<"\n legth\t"<<length;
    }
};
int main()
{
    book b;
    tape tp;
    try{
        b.set();
        tp.set();
        
    }catch(int t)
    {
        b.reset();
        tp.reset();
    }
    b.display();
    tp.display();
    return 0;
}
/*   output with valid data
g++ 3.cpp
./a.out
Enter Title of Book	Let_us_c
Enter price of Book	360
Enter total pages of Book	660
Enter Title of Tape	Arijit_singh
Enter price of Tape	390
Enter total length	5
Title	Let_us_c
 Price	360
 Total Pages	660
 Title	Arijit_singh
 Price	390
 legth	5

*/
/*  Output with wrong Data
g++ 3.cpp
./a.out
Enter Title of Book	Let_us_c
Enter price of Book	-30
Title	
 Price	0
 Total Pages	0
 Title	
 Price	0
 legth	0
*/