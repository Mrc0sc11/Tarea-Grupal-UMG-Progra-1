#include <iostream>
 
using namespace std;


class esfera{
	int x,y,dx,dy;
	char e;
	public:
	esfera():x(38),y(10),dx(1),dy(1),e(169){};
	
	void pintar_esf(){
		gotoxy(x,y); cout<<(char)e;
		
	}
	void borrar_esf(){
		gotoxy(x,y); cout<<' ';
		
	}
	void mover(){
		borrar_esf();
		x+=dx; y+=dy;
		pintar_esf();
		Sleep(50);
		
		if(y == 21   || y==3){dy=-dy;}
		if(x == 2   || x==78){dx=-dx;}
	}
};
