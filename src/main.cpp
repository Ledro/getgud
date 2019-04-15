#include "app.hpp"

int main(int argc, char** argv) {
	std::unique_ptr<app> getgud (new app);
	getgud->go();
	getgud->close();
	return EXIT_SUCCESS;
}