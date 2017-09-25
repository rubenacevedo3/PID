/*
 * @file PID.h
 *
 * @brief Declares Class PID
 *
 * Declares gains Kp, Kd, Ki as private members
 * Declares compute function which calculates control variable
 * Declares PID constructor
 * Declares time interval dt as public member
 *
 * @param Kp is the proportinal gain
 * @param Ki is the integral gain
 * @param Kd is the derivative gain
 * @param dt is the time interval
 *
 * @author: Pranav Inani
 * @copyright 2017
 *
 */
#ifndef INCLUDE_PID_H_
#define INCLUDE_PID_H_
class PID {
  double Kp, Kd, Ki;
 public:
  double dt;
  PID(const double&, const double&, const double&, const double&);
  PID();
  double compute(double, double);
};
#endif
