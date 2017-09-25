//************************************************/
//* @file  :SL_Window.h
//* @brief :�E�B���h�E�֘A�̍쐬�A�Ǘ�
//* @date  :2017/09/26
//* @author:S.Katou
//************************************************/
#pragma once
#include <Windows.h>
#include <SL_Singleton.h>

#include <d3d11.h>
#include <d3dcompiler.h>

class AppBase;

namespace ShunLib
{
	class Window :public Singleton<Window>
	{
		friend Singleton<Window>;

		enum WINDOW_TYPE{
			EDITOR = 0,
			DEBUGER,
			typeNum,
		};

	private:
		//�E�B���h�E�T�C�Y
		float m_width;         //��
		float m_height;        //�c
		WCHAR* m_name;         //�E�B���h�E��
		HWND m_hWnd[typeNum];  //�E�B���h�E�n���h��
		HINSTANCE m_instApp;   //���̃E�B���h�E���쐬�����A�v���P�[�V����

		//�S�̂łP��
		ID3D11Device* m_device;
		ID3D11DeviceContext* m_deviceContext;
		IDXGISwapChain* m_swapChain;
		ID3D11RenderTargetView* m_recderTargetView;
		ID3D11DepthStencilView* m_depthStencilView;
		ID3D11Texture2D* m_texture2D;

		//�G�f�B�^�[�ƍ쐬�����Q�[��
		AppBase* m_game[typeNum];

	public:
		//�E�B���h�E�쐬
		HRESULT Create(HINSTANCE);

		HRESULT CreateSecondWindow();

		//DirectX�֘A�̏�����
		HRESULT InitD3D();

		//�v���V�[�W��
		LRESULT CALLBACK MsgProc(HWND hWnd, UINT iMag, WPARAM wParam, LPARAM lParam);

		//���b�Z�[�W���[�v
		void Run();

		//Setter
		void Width(float width) { m_width = width; }
		void Height(float height) { m_height = height; }
		void Name(WCHAR* name) { m_name = name; }
		void SetApp(AppBase* game, WINDOW_TYPE type);

		//Getter
		float Width() { return m_width; }
		float Height() { return m_height; }
		WCHAR* Name() { return m_name; }
		ID3D11Device* Device() { return m_device; }
		ID3D11DeviceContext* DeviceContext() { return m_deviceContext; }

	private:
		//�R���X�g���N�^���f�X�g���N�^
		//�V���O���g���̂��߉B��
		Window() :
			m_width (640.0f),
			m_height(480.0f),
			m_name  (L"�^�C�g��"){
			for (int i = 0; i < typeNum; i++)
			{
				m_game[i] = nullptr;

			}
		}

		~Window();

		//�Q�[���̍X�V
		void GameUpdate();
		void GameRender();

		//��ʃN���A
		void Clear();
	};
}