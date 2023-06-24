#include "Energy.h"
#include <Windows.h>
using namespace Energy;
[STAThread] // использование многопоточности. В одном процессе два окна
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew MyForm); 
    return 0;
     
}