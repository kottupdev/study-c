/*
 * SampleVector.h
 *
 *  Created on: 2014/04/13
 *      Author: kottup
 */

#ifndef SAMPLEVECTOR_H_
#define SAMPLEVECTOR_H_
#include <vector>
#include <stdio.h>
using namespace std;

typedef struct {
	int datanum;
	char *dataname;

} Data;
class SampleVector {
public:
	SampleVector();
	virtual ~SampleVector();

	/**
	 * なんかメソッド
	 */
	vector<int> getVector(const vector<int> param);
	vector<Data> getData(const vector<int> param);
};

#endif /* SAMPLEVECTOR_H_ */
