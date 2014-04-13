//============================================================================
// Name        : study-c.cpp
// Author      : kottup
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdio.h>
#include "conf.h"
#include "SampleFunc.h"
#include "SampleClass.h"
#include "SampleVector.h"
using namespace std;

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	// 静的メソッド
	SampleFunc::error(100);
	SampleFunc::warn("call warn.");
	SampleFunc::info("call info.");

	// サンプルクラス
	SampleClass * sc = new SampleClass();
	printf("call SampleClass getNum = %d !\n",sc->getNum(5));

	// サンプルベクター返すクラス
	vector<int> param;
	int i;
	for( i = 0; i < 10; ++i )
	{
		param.push_back(i);
	}

	SampleVector * sv = new SampleVector();
	vector<int> re;
	re = sv->getVector(param);
	int len = re.size();
	for( i = 0; i < len; ++i )
	{
		printf("call SampleVector re[%d] = %d !\n", i, re[i]);
	}

	vector<Data> re2 = sv->getData(param);
	len = re2.size();
	for( i = 0; i < len; ++i )
	{
		printf("call SampleVector re2[%d] = %d, %s !!\n", i, re2[i].datanum, re2[i].dataname);
	}

	return 0;
}
