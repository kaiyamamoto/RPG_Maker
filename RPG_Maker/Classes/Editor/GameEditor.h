//************************************************/
//* @file  :GameEditor.h
//* @brief :�G�f�B�^�[
//* @date  :2017/09/26
//* @author:S.Katou
//************************************************/
#pragma once
#include "../AppBase/AppBase.h"

class GameEditor : public AppBase
{
public:
	GameEditor();
	~GameEditor();

	//��Ԃ̂��
	void Initialize()override;
	void Update    ()override;
	void Render    ()override;
	void Finalize  ()override;
private:

};