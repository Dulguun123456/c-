#include<iostream>
using namespace std;
int main()
{	
	char c;
	cout<<"Enter a character: ";
	cin>>c;
	
	if(c>='A' && c<='Z'){
		cout<<c<<" is "<<"alphabet";
	}else if(c>='a' && c<='z'){
			cout<<c<<" is "<<" alphabet";
	}else{
			cout<<c<<" is "<<" not alphabet";
	}
	return 0;
}
