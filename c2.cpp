#include <bits/stdc++.h>
#include<string>
using namespace std;

int main()
{

	
	map<string, int> m;

	
	m.insert({ "Maharashtra", 12372333 });
	m.insert({ "Rajasthan", 68548437 });
	m.insert({ "Karnataka", 61095297 });
	m.insert({ "Gujarat", 60439692 });
    string s;
	cout<<"Enter State name"<<endl;
    cin>>s;
	
	if(m.find(s)!=m.end()){
	
	cout<<" : found : population of "<<s<<" : "<<m[s]<<endl;
	
	}
	else cout<<" : Not found"<<endl;

	return 0;
}

/* output
g++ c2.cpp
./a.out
Enter State name
Gujarat
: found : population of Gujarat : 60439692

Without corret state
./a.out
Enter State name
Kerala
: Not found
*/