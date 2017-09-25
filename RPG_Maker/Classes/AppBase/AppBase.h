//************************************************/
//* @file  :AppBase.h
//* @brief :�A�v���P�[�V�����̊��N���X
//* @date  :2017/09/26
//* @author:S.Katou
//************************************************/
#pragma once
class AppBase
{
public:
	AppBase() {}
	virtual ~AppBase() {}

	//��Ԃ̂��
	virtual void Initialize() = 0;
	virtual void Update    () = 0;
	virtual void Render    () = 0;
	virtual void Finalize  () = 0;

private:

};
