//************************************************/
//* @file  :RandomNumber.h
//* @brief :乱数生成クラス
//* @date  :2017/05/18
//* @author:S.Katou
//************************************************/
#pragma once

namespace ShunLib
{
	class RandomNumber
	{
	public:
		int operator()(int min, int max);
		float operator()(float min, float max);
		double operator()(double min, double max);
	};
}