//************************************************/
//* @file  :Game.h
//* @brief :�G�f�B�^�[�ō쐬�����Q�[��
//* @date  :2017/09/26
//* @author:S.Katou
//************************************************/
#pragma once
#include "../AppBase/AppBase.h"

//�Q�[���N���X
//���s�{�^���ō쐬
//�G�f�B�^�[�Ƃ͕ʂ̃E�B���h�E�ɕ`��
class Game : public AppBase
{
public:
	Game();
	~Game();

	//��Ԃ̂��
	void Initialize()override;
	void Update    ()override;
	void Render    ()override;
	void Finalize  ()override;

private:

};