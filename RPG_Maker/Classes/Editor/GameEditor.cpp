//************************************************/
//* @file  :GameEditor.cpp
//* @brief :�G�f�B�^�[
//* @date  :2017/09/26
//* @author:S.Katou
//************************************************/
#include "GameEditor.h"
#include "../Game/Game.h"

GameEditor::GameEditor()
{
}

GameEditor::~GameEditor()
{
}

//������
void GameEditor::Initialize()
{
}

//�X�V
void GameEditor::Update()
{
}

//�`��
void GameEditor::Render()
{
}

//�I��
void GameEditor::Finalize()
{
}

/// <summary>
/// �f�o�b�O�J�n
/// </summary>
void GameEditor::StartDebug()
{
	ShunLib::Window::GetInstance()->SetApp(m_game, ShunLib::Window::WINDOW_TYPE::DEBUGER);
}