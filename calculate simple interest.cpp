#include<iostream>
using namespace std;
main()
{
	int p,r,t,i;
	cout<<"Input the Principle :";
	cin>>p;
	cout<<"Input the Rate of Interest :";
	cin>>r ;
	cout<<"Input the Time :";
	cin>>t;
	i=(p*r*t)/100;
	cout<<"The Simple Interest for the amount "<<p <<" for 1 years @ 10 % is: "<<i<<endl;
	return 0;
}
