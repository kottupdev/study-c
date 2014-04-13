/*
 * SampleFunc.h
 *
 *  Created on: 2014/04/13
 *      Author: kottup
 */

#ifndef SAMPLEFUNC_H_
#define SAMPLEFUNC_H_

#include <stdio.h>
#include <string>
#include "conf.h"

using namespace std;

class SampleFunc {
public:
	static void error(int a);
	static void warn(std::string str);
	static void info(std::string str);

private:
	static conf * conf_;
};

#endif /* SAMPLEFUNC_H_ */
