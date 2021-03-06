//************************************************/
//* @file  :ConstantNumber.h
//* @brief :よく使う定数まとめ
//* @date  :2017/05/10
//* @author:S.Katou
//************************************************/
#pragma once

namespace ShunLib
{
	class ConstantNumber
	{
	public:
		//円周率
		static const float PI;
	
		//方向
		enum DIRECTION_2D
		{
			TOP,
			BOTTOM,
			RIGHT,
			LEFT,
			num,
		};
	};

}