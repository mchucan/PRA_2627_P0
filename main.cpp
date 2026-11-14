#include <iostream>
#include "RoboticArm.h"

void print_status(RoboticArm &arm) {
	std::cout << "Posicion ("<<arm.get_x () << ","
		<<arm.get_y() << "," <<arm.get_z() << ")"
		<< "| Sujetando objeto: "
		<<(arm.is_holding() ? "si" : "no") << std::endl;
}

int main () {
	RoboticArm arm;


	std::cout << " Estado inicial: " << std::endl;
	print_status(arm);

	std::cout << "\n Moviendo el brazo a (1.5, 2.0, 3.0)..." << std::endl;
	print_status(arm);

	std::cout << "\n Cogiendo un objeto..." << std::endl;
	arm.grab();
	print_status(arm);

	std::cout << "\n Moviendo el brazo a (0.0, 5.0, 1.0)..." << std::endl;
	arm.move(0.0, 5.0, 1.0);
	print_status(arm);

	std::cout << "\n Soltando el objeto..." << std::endl;
	arm.release();
	print_status(arm);
	
	return 0;

}	       
