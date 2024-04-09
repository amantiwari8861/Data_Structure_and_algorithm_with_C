#include<iostream>
using namespace std;

int main(void)
{
	char g;
	cout<<"enter your grade:";
	cin>>g;
	switch(g)
	{
	case 'A':cout<<"90-100"<<endl;
		break;
	case 'B':cout<<"your average is 80-89"<<endl;
		break;
	default:cout<<"your average is below 60"<<endl;
	}
	return 0; 
}