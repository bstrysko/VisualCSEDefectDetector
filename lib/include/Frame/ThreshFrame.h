#ifndef _VISUAL_CSE_DEFECT_DETECTOR_FRAME_THRESH_FRAME_H_
#define _VISUAL_CSE_DEFECT_DETECTOR_THRESH_FRAME_H_

#include <Frame/Frame.h>
#include <Frame/RGBFrame.h>
#include <Frame/HSVFrame.h>

class ThreshFrame : public Frame
{
  private:
    Mat singleChannelMat;
    ThreshFrame(Mat m, Scalar lowBound, Scalar highBound);

  public:
    ThreshFrame(RGBFrame frame, Scalar lowBound, Scalar highBound);
    ThreshFrame(HSVFrame frame, Scalar lowBound, Scalar highBound);
    ~ThreshFrame();

    Mat getSingleChannelMat();
};

#endif
