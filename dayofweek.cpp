#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the no of day\n";
	cin>>n;
	switch(n)
	{
		case1:
			cout<<"sunday";
			break;
		case 2:
			cout<<"monday";
			break;
		case 3:
			cout<<"tusday";
			break;
		case 4:
			cout<<"wednesday";
			break;
		case 5:
			cout<<"thursday";
			break;
		case 6:
			cout<<"friday";
			break;
		case 7:
			cout<<"suterday";
			break;
	    default :
	    	cout<<"you enter wrong value";
	}
}
