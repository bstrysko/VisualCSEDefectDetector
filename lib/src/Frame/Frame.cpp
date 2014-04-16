#include <Frame/Frame.h>

void Frame::create(Mat frame)
{
  this->frame = frame;
}

Frame::~Frame()
{
}

Mat Frame::getMat()
{
  return frame;
}

int Frame::getWidth()
{
	return frame.size().width;
}

int Frame::getHeight()
{
	return frame.size().height;
}

void Frame::resize(Size size)
{
	Mat dest;
	cv::resize(frame, dest, size);
	this->frame = dest;
}

void Frame::printText(Point point, Scalar color, ostringstream& stream)
{
	printText(point, color, stream.str());
}

void Frame::printText(Point point, Scalar color, string text)
{
    putText(frame, text, point, FONT_HERSHEY_SIMPLEX,
		0.5, Scalar(color[3],color[2],color[1], color[0]), 1, CV_AA);
}
