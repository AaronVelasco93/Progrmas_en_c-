//Ejrcicios: contruye una clase llamda traiangulo que tenga los siguientes atributos: largo y ancho
//metodos: perimetro() y area()
#include <iostream>
#include <stdlib.h>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//Declaracion de la clase
class Rectangulo {
	private://antributos
		float largo, ancho;
		
	public://Metodos o acciones que hace o se requieren
		Rectangulo(float,float);//contructor
		void perimetro();
		void area();
};

//inicializa el contructor
Rectangulo::Rectangulo(float _largo, float _ancho){
	largo=_largo;
	ancho= _ancho;
}

void Rectangulo::perimetro(){//PRIMER METODO
	float _perimetro;
//El perimetro es la suma de todos los lados	
	_perimetro = (2*largo)+(2*ancho);
	
	cout<<"El perimetro es: "<<_perimetro<<endl;
}
void Rectangulo::area(){//SEGUNDO METODO
	float _area;
	//el area es laego por acho
	_area=largo*ancho;
	cout<<"El area es: "<<_area<<endl;
}



int main(int argc, char** argv) {//MAIN
//crear un objeto de la clase rectangulo

Rectangulo miRectangulo(5,3);

 miRectangulo.area();


	return 0;
}
