#ifndef _VISUAL_CSE_DEFECT_DETECTOR_FRAME_HSV_FRAME_H_
#define _VISUAL_CSE_DEFECT_DETECTOR_FRAME_HSV_FRAME_H_

#include "Frame.h"
#include "RGBFrame.h"

class HSVFrame : public Frame
{
  public:
    HSVFrame(RGBFrame frame);
    ~HSVFrame();
};

#endif
