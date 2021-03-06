#include <Windows.h>

#include "SL_Window.h"
#include "Classes\Editor\GameEditor.h"

LRESULT CALLBACK WndProc(HWND hWnd, UINT iMag, WPARAM wParam, LPARAM lParam);

HRESULT InitWindow(HINSTANCE hInst);

/// <summary>
/// エントリーポイント
/// ・ここからプログラムが始まる
/// ・ウィンドウを作成
/// ・メッセージループの実装
/// </summary>
INT WINAPI WinMain(HINSTANCE hInst, HINSTANCE hPrevInst, LPSTR szStr, INT iCmpShow)
{
	auto window = ShunLib::Window::GetInstance();

	//エディター設定
	GameEditor editor;
	window->SetApp(&editor, ShunLib::Window::WINDOW_TYPE::EDITOR);

	//ウィンドウ作成
	if (SUCCEEDED(InitWindow(hInst)))
	{
		//作成に成功したらループ
		window->Run();
	}
	ShunLib::Window::Destroy();

	//終了
	return 0;
}


/// <summary>
/// ウィンドウプロシージャ
/// </summary>
LRESULT CALLBACK WndProc(HWND hWnd, UINT iMag, WPARAM wParam, LPARAM lParam)
{
	auto window = ShunLib::Window::GetInstance();

	//エディター用
	return window->MsgProc(hWnd, iMag, wParam, lParam);
}


/// <summary>
/// ウィンドウ初期化
/// </summary>
HRESULT InitWindow(HINSTANCE hInst)
{
	auto window = ShunLib::Window::GetInstance();

	//ウィンドウ情報設定
	window->Width(800.0f);
	window->Height(600.0f);
	window->Name(L"RPGツクールツクール");

	//ウィンドウ作成
	if (SUCCEEDED(window->Create(hInst)))
	{
		//DirectX関連の初期化
		if (SUCCEEDED(window->InitD3D()))
		{
			//window->CreateSecondWindow();
			return S_OK;
		}
	}

	return E_FAIL;
}
