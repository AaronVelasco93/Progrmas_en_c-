#include <iostream>
#include <stdlib.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class Punto{
	private://Atrubutos
		int x,y;
	public: //metodos
		Punto();
		//set dar o establecer
		void setPunto(int, int);
		int getPuntoX();
		int getPuntoY();
};

//contructor
Punto::Punto(){
}

//establecer valores a los atrubutos
void Punto::setPunto(int _x, int _y){
	x= _x;
	y= _y;
}

//Geter es para mostrar
int Punto::getPuntoX(){
	return x;
}
int Punto::getPuntoY(){
	return y;
}
int main(int argc, char** argv) {
	
	Punto punto1;
	
	punto1.setPunto(10,20);
	
	
	cout<<punto1.getPuntoX()<<endl;
	cout<<punto1.getPuntoY()<<endl;
	return 0;
}
