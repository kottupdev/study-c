/*
 * conf.h
 *
 *  Created on: 2014/04/12
 *      Author: kottup
 */

#ifndef CONF_H_
#define CONF_H_
#include <stdio.h>
#include <string>
using namespace std;

class conf {
public:
	//conf();
	//virtual ~conf();
	static conf * getInstantce();
	int aaa();
	std::string bbb();

protected:
	conf();
	virtual ~conf();
private:
	static conf* instance_;
	int aaa_;
	std::string bbb_;
};

#endif /* CONF_H_ */
