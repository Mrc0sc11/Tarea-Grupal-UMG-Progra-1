//Conversi�n de n�mero decimal a n�mero binario

#include  <stdio.h>

int  main () {	
	int  n,c,k;
	
	printf ( "Ingresa el n�mero decimal: " );
	scanf ("%d",&n);
	
	printf ( "%d en binario es: ",n);
	
	for (c =7;c>=0;c--){
		k=n>>c;
		if (k&1){
			printf ("1");
		} else {
			printf ("0");
		}
	}	
	return 0 ;
}
