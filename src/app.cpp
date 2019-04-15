#include "app.hpp"

#include "Python.h"

#include <fstream>

using namespace std;

app::app() {
	running = true;
}

/*
	@brief: start the application
*/
void app::go() {
	download();
	/*do {

	} while (running);*/
}
/*
	@brief: close the application systems, some checks maybe
*/
void app::download() {
	
}
/*
	@brief: close the application systems, some checks maybe
*/
void app::close() {

}