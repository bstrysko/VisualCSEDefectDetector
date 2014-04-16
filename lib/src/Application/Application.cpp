#include <Application/Application.h>

Application::Application()
{
	this->delay = 10;	
}

Application::~Application()
{
}

void Application::run(vector<string> argv)
{	
	setup(argv);

	while(true)
	{
		loop();

		int key = cvWaitKey(delay);

		if(key >= 0)
		{
			keyPressed(key);
		}
	}
}

int Application::getDelay()
{
	return delay;
}

void Application::setDelay(int delay)
{
	this->delay = delay;
}

Window* Application::createWindow(string name)
{
	return new Window(name);
}
