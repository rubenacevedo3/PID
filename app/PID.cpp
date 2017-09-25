/*
 * @file PID.cpp
 * @brief PID class implementation
 *
 * @author Pranav Inani
 * @copyright 2017
 */

#include<PID.h>
/**
 * @brief compute function definition
 *
 * Computes new velocity for a given
 * target velocity or setpoint (sp) and
 * actual velocity or process variable (pv)
 *
 *
 * @param error is the difference between sp and pv
 * @param sumError is the sum off all errors over time multiplied by dt
 * @param prevError is the previous error
 * @param sumError is the sum of all errors multiplied by dt
 * @param changeError is the differnece of error and previous error over dt
 * @param nv is the new calculated velocity
 * @param cv is the control variable. it is calculated by
 * muliplying error, sumError and prevError to their respective gains and then adding them
 *
 * @return nv, the new velocity
 */


double PID::compute(double sp, double pv) {
  double cv;
  double nv = 5;  // stub implementation
  double error;
  double prevError = 0;  // Initialize
  double sumError;
  double changeError;
  return nv;
}

/**
 * @brief constructor to take in values of Kp, Kd, Ki, dt
 */
PID::PID(const double& a, const double& b, const double& c, const double& d) {
  Kp = a;
  Kd = b;
  Ki = c;
  dt = d;
}

/**
 * @brief overloaded constructor with default values of Kp, Kd, Ki, dt
 */

PID::PID() {
  Kp = 1;
  Kd = 1;
  Ki = 1;
  dt = 0;  // should not be zero to pass test

}
