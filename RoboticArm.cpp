#include "RoboticArm.h"

RoboticArm::RoboticArm() {
	x = 0.0;
	y = 0.0;
	z = 0.0;
	holding = false;
}

double RoboticArm::get_x() {
	return x;
}
double RoboticArm::get_y() {
        return y;
}
double RoboticArm::get_z() {
	return z;
}
bool RoboticArm::is_holding() {
	return holding;
}
void RoboticArm::grab() {
	holding = true;
}
void RoboticArm::release() {
	holding = false;
}

void RoboticArm::move(double x, double y, double z) {
	this->x = x;
	this->y = y;
	this->z = z;
}

