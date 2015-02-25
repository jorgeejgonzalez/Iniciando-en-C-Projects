#include <iostream>
#include <string>
#include <conio.h>

int main() 
{
	std::string nombreJugador;
	std::cout << "Cual es tu nombre? " << std::endl;
	std::cin >> nombreJugador;
	std::cout << "Bienvenido, "<< nombreJugador <<"! Yo soy la" << std::endl;
	std::cout << "Gran Hada del Poder!" << std::endl;
	_getch();
	std::cout << "Voy a otorgarte una nueva tecnica de la espada." << std::endl;
	_getch();
	std::cout << "Recibela ahora!"<< std::endl;
	_getch();
	return 0;
}