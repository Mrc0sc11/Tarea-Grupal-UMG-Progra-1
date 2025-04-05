#include <iostream>
#include <gotoxy.h>
#include "marco.h"
#include "esfera.h"


using namespace std;


int main(){
	marco cuadro;
	esfera ball;
	
	cuadro.pintar_marco();
	
	while(1){
		ball.mover();
		
	}
}
