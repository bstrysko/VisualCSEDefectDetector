#include <Camera.h>

Camera::Camera()
{
	camera.open(0);
}

Camera::Camera(Size size)
{
	camera.open(0);

	camera.set(CV_CAP_PROP_FRAME_WIDTH, size.width);
    camera.set(CV_CAP_PROP_FRAME_HEIGHT, size.height);
}

Camera::~Camera()
{
	camera.release();
}

RGBFrame Camera::getRGBFrame()
{
	Mat frame;

	while(!frame.data)
	{
		camera >> frame;
	}
	
	return RGBFrame(frame);
}
