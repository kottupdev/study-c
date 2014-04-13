/*
 * SampleVector.cpp
 *
 *  Created on: 2014/04/13
 *      Author: kottup
 */

#include "SampleVector.h"

SampleVector::SampleVector() {
}

SampleVector::~SampleVector() {
}

vector<int> SampleVector::getVector(const vector<int> param){
	vector<int> re;
	int i;
	int len = param.size();
	for( i = 0; i < len; i++ )
	{
		re.push_back(param[i] + 10);
	}
	return re;
}

vector<Data> SampleVector::getData(const vector<int> param){
	vector<Data> re;
	int i;
	int len = param.size();
	for( i = 0; i < len; i++ )
	{
		Data data;
		data.datanum = i+10;
		char name[9] = {'\0'};
		sprintf(name, "%d", i+10);
		data.dataname = name;
		re.push_back(data);
	}
	return re;
}
