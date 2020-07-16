#include "mainFORM.h"
//#include "Convertire.h"
//#include "globalVariable.h"


using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Proiect::mainFORM form;
	Application::Run(%form);
}