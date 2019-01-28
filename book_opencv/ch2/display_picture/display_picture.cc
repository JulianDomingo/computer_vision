#include "opencv2/highgui/highgui.hpp"
#include <iostream>

using namespace cv;

int main(int argc, char** argv)
{
    Mat img = imread(argv[1], -1);

    if (img.empty()) {
        std::cout << "Empty image!" << std::endl;
        return -1;
    }

    namedWindow("Example1", WINDOW_AUTOSIZE);
    imshow("Example1", img);
    waitKey(0);
    destroyWindow("Example1");

    return 0;
}
