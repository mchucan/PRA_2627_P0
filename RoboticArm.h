#ifndef ROBOTICARM_H
#define ROBOTICARM_H

class RoboticArm {
	private:
		double x;
		double y;
		double z;
		bool holding;

	public:
		RoboticArm();
		
		double get_x();
		double get_y();
		double get_z();
		bool is_holding();

		void grab();
		void release();
		void move(double x, double y, double z);
};

#endif


