#include <iostream>
void mostrarAtributosArma()
{
	std::cout << "================== ATRIBUTOS DEL ARMA ==================" << std::endl;
	std::cout << "Nombre: RW1" << std::endl;
	std::cout << "Variante : Guardian" << std::endl;
	std::cout << "Clase : Profesional" << std::endl;
	std::cout << "Descripci�n : Arma de riel de mano, capaz de detener el combate.La mejor en su clase para causar da�o" << std::endl;
	std::cout << "Da�o : " << 16 << std::endl;
	std::cout << "Precisi�n : " << 7 + 1 << std::endl;
	std::cout << "Cadencia de Fuego : " << 2 << std::endl;
	std::cout << "Rango : " << 6 << std::endl;
	std::cout << "Manejo : " << 7 - 1 << std::endl;
	std::cout << "Movilidad : " << 12 << std::endl;
	std::cout << "--------------------------------------------------------" << std::endl;
}
int main()
{
	mostrarAtributosArma();
	return 0;
}