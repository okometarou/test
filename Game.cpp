#include "DxLib.h"

//�v���O������WinMain����n�܂�܂�
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR IpCmdLine, int nCmdShow)
{
	if (DxLib_Init() == -1) {
		return -1;
	}

	DrawPixel(320, 240, GetColor(255, 255, 100));

	WaitKey();

	DxLib_End();

	return 0;
}