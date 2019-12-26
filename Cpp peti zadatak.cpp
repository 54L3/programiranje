#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double x,y,kol,raz,zbir;
	
	cout<<"Unesi prvi broj"<<endl;
	cin>>x;
	cout<<"Unesi drugi broj"<<endl;
	cin>>y;
	
	kol=x/y;
	zbir=x+y;
	raz=abs(x-y);
	
	cout<<"Zbir unetih brojeva je:"<<zbir<<endl;
	cout<<"Razlika unetih brojeva je:"<<raz<<endl;
	cout<<"Kolicnik unetih brojeva je:"<<kol<<endl;
	
	return 0;
}
