#include <windows.h>

int WINAPI WinMain(HINSTANCE hInstance,
                   HINSTANCE hPrevInstance,
                   LPSTR lpCmdLine,
                   int nCmdShow)
{

        MessageBox(NULL, L"Hello world", L"New Window", MB_OK);
        return NULL;
}
