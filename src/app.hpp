#pragma once

#include <memory>

class app {
private:
	bool running;

public:
	app();

	void go();
	void close();

	void download();
};