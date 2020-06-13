#include <iostream>

using namespace std;
float suma(float n3, float n4);
float trabajo(float n, float h);

int main(){
	
	int n1;
	float hh, h3;
	
    cout<<"Ingrese el numero de usuarios: ";
    cin>>n1;
	for(int i=0; i<n1;i++){
	cout<<endl<<"Ingrese las horas trabajadas: ";
	cin>>hh;
	cout<<endl<<"Ingrese las horas extras trabajadas: ";
	cin>>h3;
	cout<<endl<<"Su salario actual es de: "<<suma(hh, h3)<<endl;
	cout<<endl<<"Su salario actual con los descuento es de: "<<trabajo(hh, h3);
   }	
	return 0;
}

float suma(float n3, float n4){
	
	float resulta;
	resulta= ((n3*1.75)+(n4*2.50));
	
	return resulta;
}

float trabajo(float h, float h1){
	
	float resu;
	
	resu=(h*1.75)+(h1*2.50);	
	resu=(((h*1.75)+(h1*2.50)-0.4)-0.625);
	if(resu>=500){
		resu==resu;
	}else{
		resu-=0.10;
	}
	return resu;
}
