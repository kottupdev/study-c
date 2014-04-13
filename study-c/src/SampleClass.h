/*
 * SampleClass.h
 *
 *  Created on: 2014/04/13
 *      Author: kottup
 */

#ifndef SAMPLECLASS_H_
#define SAMPLECLASS_H_

class SampleClass {
public:
	SampleClass();
	virtual ~SampleClass();

	/**
	 * なんかメソッド
	 */
	int getNum(int add);

private:
	int num_;
};

#endif /* SAMPLECLASS_H_ */
