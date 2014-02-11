#include <iostream.h>
#include <conio.h>
#include <stdlib.h>

void main(){ int r,d,n,inv=0,par=0,impar=0, nd,sump=0,sumimpar=0;	
	char resp='s';
	while(resp=='s'){ 
		gotoxy(8,3);cout<<"Ingrese un numero con mas de 1 digito : "; cin>>n;
		r = n; nd=0;// inicializó contador de dígitos
		while(n>0){ // descompongo el número n ingresado 
			d=n%10; nd=nd+1;
			if (d%2==0) { 
				par++; sump+=d; 
			}else { 
				impar++; sumimpar+=d; 
			}
			inv=inv*10+d;
			n=n/10; 
		}
		gotoxy(8,5); cout<<" El numero "<<r<<" tiene :";
		gotoxy(12,7); cout<<" "<< nd<< " digitos ";
		gotoxy(12,8); cout<<" Invertido es = "<<inv;
		gotoxy(12,9); cout<<" Tiene "<<par<<" digitos pares";
		gotoxy(12,10); cout<<" La suma de los numeros pares es = "<<sump;
		gotoxy(12,11); cout<<" Tiene "<<impar<<" digitos impares";
		gotoxy(12,12); cout<<" La suma de los numeros impares es = "<<sumimpar;
		gotoxy(20,16); cout<<"Desea continuar..(s/n)";cin>>resp;clrscr(); 
	}
	getche(); 
}
