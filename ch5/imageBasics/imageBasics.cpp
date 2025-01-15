#include <iostream>
#include <chrono>
using namespace std;

#include <opencv4/opencv2/core/core.hpp>
#include <opencv4/opencv2/highgui/highgui.hpp>
using namespace cv;

int main(int argc, char** argv)
{
    Mat image;
    image = imread(argv[1]);

    if(image.data == nullptr){
        cerr << "문서 " << argv << " 존재하지 않음" << endl;
        return 0;
    }

    cout << "이미지 열 : " << image.cols << " , 행 : " << image.rows << ", 채널 수 : " << image.channels() << endl;
    imshow("image", image);
    waitKey(0);

    if(image.type() != CV_8UC1 && image.type() != CV_8UC3){
        cout << "이미지 요구사항 충족 불가" << endl;
        return 0;
    }

    chrono::steady_clock::time_point t1 = chrono::steady_clock::now();

    for(size_t y = 0; y < image.rows; y++){
        unsigned char* row_ptr = image.ptr<unsigned char> (y);

        for(size_t x = 0; x < image.cols; x++){
            unsigned char* data_ptr = &row_ptr[x * image.channels()];

            for(int c = 0; c != image.channels(); c++){
                unsigned char data = data_ptr[c];
            }
        }
    }

    chrono::steady_clock::time_point t2 = chrono::steady_clock::now();
    chrono::duration<double> time_used = chrono::duration_cast<chrono::duration<double>>(t2 - t1);
    cout << "이미지 처리시간 : " << time_used.count() << " 초" << endl;

    Mat image_another = image;
    image_another(Rect(0, 0, 100, 100)).setTo(0);
    imshow("image", image);
    waitKey(0);

    Mat image_clone = image.clone();
    image_clone(Rect(0, 0, 100, 100)).setTo(255);
    imshow("image", image);
    imshow("image_clone", image_clone);
    waitKey(0);

    destroyAllWindows();
    return 0;
}