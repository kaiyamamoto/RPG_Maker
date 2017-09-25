//************************************************/
//* @file  :GameEditor.h
//* @brief :�G�f�B�^�[
//* @date  :2017/09/26
//* @author:S.Katou
//************************************************/
#pragma once
#include "../AppBase/AppBase.h"
#include "../../SL_Window.h"

class Game;

class GameEditor : public AppBase
{
private:
	Game* m_game;

public:
	GameEditor();
	~GameEditor();

	//��Ԃ̂��
	void Initialize()override;
	void Update    ()override;
	void Render    ()override;
	void Finalize  ()override;

private:
	void StartDebug();
};