#include "App.h"


App::App()
	: mainWindow(nullptr) {

}

App::~App() {

}

bool App::OnInit() {

	mainWindow = new MainWindow();

	mainWindow->Show(true);

	return true;
}

wxIMPLEMENT_APP(App);