#ifndef _VISUAL_CSE_DEFECT_DETECTOR_FRAME_RGB_FRAME_H_
#define _VISUAL_CSE_DEFECT_DETECTOR_FRAME_RGB_FRAME_H_

#include "Frame.h"
#include <opencv2/opencv.hpp>

using namespace cv;

class RGBFrame : public Frame
{
  public:
    RGBFrame(Mat frame);
    ~RGBFrame();
};

#endif
