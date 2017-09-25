/*
 * @file PID.cpp
 * @brief PID class implementation
 *
 * @author Pranav Inani
 * @copyright 2017
 */

#include<PID.h>

double dt = 0;  // Initialize for unit test

/**
 * @brief compute function definition
 *
 * Computes the control variable for a given
 * target velocity orsetpoint (sp) and
 * actual velocity or process varibale (pv)
 *
 *
 * @param error is the difference between sp and pv
 * @param sumError is the sum off all errors over time multiplied by dt
 * @param prevError is the previous error
 * @param sumError is the sum of all errors multiplied by dt
 * @param changeError is the differnece of error and previous error over dt
 * @param cv is the control variable it is calculated by
 * muliplying error, sumError and prevError to their respective gains and then adding them
 *
 * @return cv
 */

double PID::compute(double sp, double pv) {
  double cv;
  double error;
  double prevError = 0;  // Initialize
  double sumError;
  double changeError;
  return cv;
}

/**
 * @brief constructor to take in values of Kp, Kd, Ki
 */
PID::PID(double a, double b, double c) {
  Kp = a;
  Kd = b;
  Ki = c;
}
