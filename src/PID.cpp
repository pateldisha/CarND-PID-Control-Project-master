#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
	this->Kp = Kp ;
	this->Ki = Ki;
	this->Kd = Kd;
	
	p_error = 0;
	i_error = 0;
	d_error = 0;
}

void PID::UpdateError(double cte) {
	double diff_cte;
	diff_cte = cte - p_error;
	p_error = cte ;
	i_error += cte;
	
	d_error = diff_cte;
	
	
	
	
}

double PID::TotalError() {
	double steer;
	steer = -Kp * p_error - Kd * d_error - Ki * i_error;
	if ( steer > 1) {steer = 1;}
	if (steer < -1) {steer = -1;}
	return steer;
	
}

