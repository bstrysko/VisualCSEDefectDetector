#ifndef _VISUAL_CSE_DEFECT_DETECTOR_APPLICATION_WINDOW_H_
#define _VISUAL_CSE_DEFECT_DETECTOR_APPLICATION_WINDOW_H_

#include <string>
#include <opencv2/opencv.hpp>

#include "../Frame/Frame.h"

using namespace std;
using namespace cv;

typedef void (*WindowSliderCallback)(int, void*);

class Window
{
  private:
    string name;
  public:
    Window(string name);
    ~Window(); 

    string getName();
  
    void createSlider(string sliderName, int max, WindowSliderCallback callback);

    void renderFrame(Frame frame);
    void renderFrames2(Frame frame1, Frame frame2);
    void renderFrames4(Frame frame1, Frame frame2, Frame frame3, Frame frame4);
};

#endif
