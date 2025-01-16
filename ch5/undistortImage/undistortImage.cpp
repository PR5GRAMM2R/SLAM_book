#include <opencv2/opencv.hpp>
#include <math.h>
#include <string>
using namespace std;
using namespace cv;

string image_file = "../distorted.png";

double k1_temp = -0.28340811;
double k2_temp = 0.07395907;

double p1_temp = 0.00019359;
double p2_temp = 1.76187114e-05;

double k1 = k1_temp, k2 = k2_temp, p1 = p1_temp, p2 = p2_temp;
double fx = 458.654, fy = 457.296, cx = 367.215, cy = 248.375;

int undistort(Mat image)
{
    int rows = image.rows;
    int cols = image.cols;
    Mat image_undistort = Mat(rows, cols, CV_8UC1);

    for(int v = 0; v < rows; v++){
        for(int u = 0; u < cols; u++){
            double x = (u - cx) / fx;
            double y = (v - cy) / fy;
            double r = sqrt(x * x + y * y);

            double x_distorted = x * (1 + k1 * pow(r, 2) + k2 * pow(r, 4)) + 2 * p1 * x * y + p2 * (pow(r, 2) + 2 * pow(x, 2));
            double y_distorted = y * (1 + k1 * pow(r, 2) + k2 * pow(r, 4)) + 2 * p2 * x * y + p1 * (pow(r, 2) + 2 * pow(y, 2));

            double u_distorted = fx * x_distorted + cx;
            double v_distorted = fy * y_distorted + cy;

            if(u_distorted >= 0 && v_distorted >= 0 && u_distorted < cols && v_distorted < rows){
                image_undistort.at<uchar>(v, u) = image.at<uchar>((int)v_distorted, (int)u_distorted);
            }
            else{
                image_undistort.at<uchar>(v, u) = 0;
            }
        }
    }

    imshow("distorted", image);
    imshow("undistorted", image_undistort);

    return 0;
}

int main(int agrc, char** agrv)
{
    cout << "Press q to quit." << endl;
    cout << "Press w to increase k1 10%." << endl;
    cout << "Press s to decrease k1 10%." << endl;
    cout << "Press d to increase k2 10%." << endl;
    cout << "Press a to decrease k2 10%." << endl;
    cout << "Press r to set k1 to default." << endl;
    cout << "Press f to set k2 to defaul." << endl;
    cout << "Press u to increase p1 10%." << endl;
    cout << "Press j to decrease p1 10%." << endl;
    cout << "Press k to increase p2 10%." << endl;
    cout << "Press h to decrease p2 10%." << endl;
    cout << "Press o to set p1 to default." << endl;
    cout << "Press l to set p2 to defaul." << endl;

    Mat image = imread(image_file, 0);

    while(1){
        undistort(image);
        char inputKey = waitKey();
        if(inputKey == 'q')
            break;
        else if(inputKey == 'w')
            k1 *= 1.1;
        else if(inputKey == 's')
            k1 *= 0.9;
        else if(inputKey == 'd')
            k2 *= 1.1;
        else if(inputKey == 'a')
            k2 *= 0.9;
        else if(inputKey == 'r')
            k1 = k1_temp;
        else if(inputKey == 'f')
            k2 = k2_temp;
        else if(inputKey == 'u')
            p1 *= 1.1;
        else if(inputKey == 'j')
            p1 *= 0.9;
        else if(inputKey == 'k')
            p2 *= 1.1;
        else if(inputKey == 'h')
            p2 *= 0.9;
        else if(inputKey == 'o')
            p1 = k1_temp;
        else if(inputKey == 'l')
            p2 = k2_temp;

        destroyAllWindows();
    }

    return 0;
}