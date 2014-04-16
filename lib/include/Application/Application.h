#ifndef _VISUAL_CSE_DEFECT_DETECTOR_APPLICATION_APPLICATION_H_
#define _VISUAL_CSE_DEFECT_DETECTOR_APPLICATION_APPLICATION_H_

#include <string>
#include <vector>

#include <opencv2/opencv.hpp>

#include <Application/Window.h>

using namespace std;
using namespace cv;

class Application
{
  private:
    int delay;
  protected:
    Application();

    int getDelay();
    void setDelay(int delay);

    Window* createWindow(string name);

    virtual void setup(vector<string> argv) = 0;
    virtual void loop() = 0;
    virtual void keyPressed(int key) = 0;

    static int stringToInt(char* s); 
  public:
    ~Application();

    void run(vector<string> argv);
};

#endif
