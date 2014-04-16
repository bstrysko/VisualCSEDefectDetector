#ifndef _VISUAL_CSE_DEFECT_DETECTOR_CAMERA_H_
#define _VISUAL_CSE_DEFECT_DETECTOR_CAMERA_H_

#include <Frame/RGBFrame.h>

#include <opencv2/opencv.hpp>

using namespace cv;

class Camera
{
  private:
    VideoCapture camera;
  public:
    Camera();
    Camera(Size size);
    ~Camera(); 

    RGBFrame getRGBFrame();
};

#endif
