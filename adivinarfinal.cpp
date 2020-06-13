#include <iostream>
#include <math.h>

using namespace std;

bool juguemos(int b=0){
	if(b==21){
		return true;
	}if(b>21){
	 return false;	
	}if(b>21){
		return false;
	}
	else{
		return false;
	}
}

int main(){
	
	int bb=0;
	cout<<"Bienvenido, jugaremos a encontrar el numero magico"<<endl;
	cout<<"Ingrese un numero del 1-100:";	
	cin>>bb;
	cout<<"";
	
	if(juguemos(bb)){
		cout<<"Felicidades el numero es el 21";
	}if(juguemos(bb)){
	  cout<<"El numero tiene que ser mayor";
	}
	else{
	  cout<<"El numero tiene que ser menor";
	}
	
	return 0;
	}
