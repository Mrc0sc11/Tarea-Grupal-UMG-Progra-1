#include <iostream>

using namespace std;

class marco{
	int x1, x2, y1, y2;
	char m;
	public:
		marco(): x1(0),x2(79),y1(2),y2(22),m(219){};
		
	void pintar_marco(){
		
		for(int i=0;i<x2;i++){
			
			gotoxy(i+1,y1); cout<<(char)m;
			gotoxy(i+1,y2); cout<<(char)m;
		}
			for(int j=0;j<y2-1;j++){
			
			gotoxy(x1,y1+j); cout<<(char)m;
			gotoxy(x2,y1+j); cout<<(char)m;
	}
	
};	
