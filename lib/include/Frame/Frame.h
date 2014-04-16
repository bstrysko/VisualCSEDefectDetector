#ifndef _VISUAL_CSE_DEFECT_DETECTOR_FRAME_FRAME_H_
#define _VISUAL_CSE_DEFECT_DETECTOR_FRAME_FRAME_H_

#include <string>

#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

class Frame
{
  private:
    Mat frame;
  protected:
    void create(Mat frame);
  public:
    ~Frame();
    Mat getMat();

    int getWidth();
    int getHeight();

    void resize(Size size);

    void printText(Point point, Scalar color, ostringstream& stream);
    void printText(Point point, Scalar color, string text);
};

#endif
