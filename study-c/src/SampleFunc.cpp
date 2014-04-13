/*
 * SampleFunc.cpp
 *
 *  Created on: 2014/04/13
 *      Author: kottup
 */

#include "SampleFunc.h"

// Confクラスのインスタンス
conf * SampleFunc::conf_ = conf::getInstantce();

void SampleFunc::error(int a){

	printf("SampleFunc %d \n", a);
}

void SampleFunc::warn(std::string str){

	printf("SampleFunc %s \n", str.c_str());
}

void SampleFunc::info(std::string str){
	try{
		// シングルトンをよんでみる
		//	Conf * conf_;
		//	conf_ = Conf::getInstantce();
		//	printf("SampleFunc aaa=%d \n", conf_->aaa());

		printf("SampleFunc aaa=%d \n", SampleFunc::conf_->aaa());
		printf("SampleFunc %s \n", str.c_str());

	}catch (const char* str ){
		printf("%s", str);
	}

}
