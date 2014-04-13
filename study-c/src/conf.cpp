/*
 * conf.cpp
 *
 *  Created on: 2014/04/12
 *      Author: kottup
 */

#include "conf.h"

using namespace std;
conf * conf::instance_ = new conf();
int aaa_;
std::string bbb_;

conf::conf() {
	aaa_ = 0;
	bbb_ = "new";
}

conf::~conf() {
}

conf * conf::getInstantce(){
	return instance_;
}

int conf::aaa(){
	aaa_ = 10;
	return aaa_;

}

std::string conf::bbb(){
	bbb_ = "bbb";
	return bbb_;
}

