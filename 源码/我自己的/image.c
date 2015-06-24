/*
 * ==================================================================
 * 文件名           ：      IMAGE_C
 * 文件功能         ：      测试图像的例子
 * 编写人           ：      dxm
 * ------------------------------------------------------------------
 *  修改人          修改时间        文件版本        修改内容
 *  dxm             2015-06-24        V1.0          原始版本
 *  ==================================================================
 *  */

#include  "cv.h"
#include  "highgui.h"

int main(int argc, char *argv[])
{
    IplImage *img = cvLoadImage(argv[1],1);
    cvNamedWindow("test1",CV_WINDOW_AUTOSIZE);
    cvShowImage("test1",img);
    cvWaitKey(0);
    cvReleaseImage(&img);
    cvvDestroyWindow("test1");
    return 0;
}
