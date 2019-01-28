#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include <iostream>

using namespace cv;
using namespace std;


int main(int argc, char **argv)
{
    namedWindow("Example2", WINDOW_AUTOSIZE);
    VideoCapture capture;
    Mat video_frame;

    capture.open(string(argv[1]));

    while (true) {
        capture >> video_frame;

        if (!video_frame.data)
            break;

        imshow("Example2", video_frame);

        if (waitKey(30) >= 0)
            break;
    }

    return 0;
}
