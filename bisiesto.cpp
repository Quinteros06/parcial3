#include <iostream>
#include <math.h>

using namespace std;

bool bisiesto(int b=0){
	if(b % 400==0){
		return true;
	}if(b % 4==0 || b % 100==1){
	 return true;	
	}
	else{
		return false;
	}
}

int main(){
	
	int bb=0;
	cout<<"Ingrese el year que necesita saber si es o no bisiesto: ";
	cin>>bb;
	cout<<"El year: ";
	
	if(bisiesto(bb)){
		cout<<"Es bisiesto";
	}else{
	  cout<<"No es bisiesto";
	}
	
	return 0;
	}
