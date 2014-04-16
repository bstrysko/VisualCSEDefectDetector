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

int Application::stringToInt(string s)
{
    int result;

    result = atoi(s.c_str());

    if(result == 0 && s[0] != '0')
    {
        stringstream o;
        o << s << " is not a number";
        throw ios_base::failure(o.str());
    }

	return result;
}
