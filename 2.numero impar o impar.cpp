#include <iostream>

using namespace std;

main (){
	//determinar si el numero es par o impar
	int num=0;
	cout<<"ingrese el numero:";
	cin>>num;
	//dividir un numero entre dos, su residuo es cero entonces es par caso contario es impar 
	if((num%2)==0){
		cout<<"PAR"<<endl;
	}else{
		cout<<"IMPAR"<<endl;
	}
	
	
	system("pause");
	
	
}
	
