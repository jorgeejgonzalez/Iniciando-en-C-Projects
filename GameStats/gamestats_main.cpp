#include <iostream>

void mostrarAtributosArma()
{
	std::cout << "================== ATRIBUTOS DEL ARMA ==================" << std::endl;
	std::cout << "Nombre: RW1" << std::endl;
	std::cout << "Variante : Guardian" << std::endl;
	std::cout << "Clase : Profesional" << std::endl;
	std::cout << "Descripción : Arma de riel de mano, capaz de detener el combate.La mejor en su clase para causar daño" << std::endl;
	std::cout << "Daño : " << 16 << std::endl;
	std::cout << "Precisión : " << 7 + 1 << std::endl;
	std::cout << "Cadencia de Fuego : " << 2 << std::endl;
	std::cout << "Rango : " << 6 << std::endl;
	std::cout << "Manejo : " << 7 - 1 << std::endl;
	std::cout << "Movilidad : " << 12 << std::endl;
	std::cout << "--------------------------------------------------------" << std::endl;
}

void mostrarFichaClan()
{
	char* nombre = "ATLAS";
	char* tag = "ATL";
	char* lema = "El poder lo cambia todo";
	int experienciaAcumulada = 90000;
	int experienciaSiguienteNivel = 20000;
	short int nivel = 11;
	unsigned short int miembros = 13;
	float relacionMuertesMuertos = 0.91f;
	float relacionVictoriasDerrotas = 0.37f;

	std::cout << "================== PERFIL DEL CLAN =====================" << std::endl;
	std::cout << "Nombre : " << nombre << std::endl;
	std::cout << "Tag : [" << tag << "]" << std::endl;
	std::cout << "Lema : " << lema;
	std::cout << "Estadísticas : " << std::endl;
	std::cout << " - Nivel : " << nivel << std::endl;
	std::cout << " - Experiencia Acumulada : " << experienciaAcumulada << std::endl;
	std::cout << " - Experiencia para Siguiente Nivel : " << experienciaSiguienteNivel << std::endl;
	std::cout << " - Miembros : " << miembros << std::endl;
	std::cout << " - Relacion Muertes/Muertos : " << relacionMuertesMuertos << std::endl;
	std::cout << " - Relacion Victorias/Derrotas : " << relacionVictoriasDerrotas << std::endl;
	std::cout << "--------------------------------------------------------" << std::endl;
}

int main()
{
	mostrarAtributosArma();
	mostrarFichaClan();
	return 0;
}

