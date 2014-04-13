/*
 * SampleClass.cpp
 *
 *  Created on: 2014/04/13
 *      Author: kottup
 */

#include "SampleClass.h"

SampleClass::SampleClass() {

	SampleClass::num_ = 0;
}

SampleClass::~SampleClass() {
}

int SampleClass::getNum(int add){
	return num_ + add;
}
