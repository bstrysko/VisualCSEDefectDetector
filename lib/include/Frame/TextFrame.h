#ifndef _VISUAL_CSE_DEFECT_DETECTOR_FRAME_TEXT_FRAME_H_
#define _VISUAL_CSE_DEFECT_DETECTOR_FRAME_TEXT_FRAME_H_

#include "Frame.h"

class TextFrame : public Frame
{
  public:
    TextFrame(Frame frame);
    ~TextFrame();
};

#endif
