#include "Energy.h"
#include <Windows.h>
using namespace Energy;
[STAThread] // ������������� ���������������. � ����� �������� ��� ����
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew MyForm); 
    return 0;
     
}