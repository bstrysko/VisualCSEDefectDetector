#include <Frame/TextFrame.h>

TextFrame::TextFrame(Frame frame)
{
    create(frame.getMat().clone());
	getMat().setTo(Scalar(0,0,0));
}

TextFrame::~TextFrame()
{
}
