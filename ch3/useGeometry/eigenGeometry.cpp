#include <iostream>
#include <cmath>
using namespace std;

#include <eigen3/Eigen/Core>
#include <eigen3/Eigen/Geometry>
using namespace Eigen;

int main(int argc, char** argv)
{
    Matrix3d rotation_matrix = Matrix3d::Identity();
    AngleAxisd rotation_vector(M_PI / 4, Vector3d(0 ,0, 1));

    cout.precision(3);
    cout << "rotation matrix =\n" << rotation_vector.matrix() << endl << endl;

    rotation_matrix = rotation_vector.toRotationMatrix();

    Vector3d v(1, 0, 0);
    Vector3d v_rotated = rotation_vector * v;
    
    cout << "(1,0,0) after rotation = " << v_rotated.transpose() << endl << endl;

    v_rotated = rotation_matrix * v;

    cout << "(1,0,0) after rotation = " << v_rotated.transpose() << endl << endl;

    Vector3d euler_angles = rotation_matrix.eulerAngles(2, 1, 0);

    cout << "yaw pitch roll = " << euler_angles.transpose() << endl << endl;

    Isometry3d T = Isometry3d::Identity();
    T.rotate(rotation_vector);
    T.pretranslate(Vector3d(1, 3, 4));
    //T.translate(Vector3d(10, 0, 0));

    cout << "Transform matrix = \n" << T.matrix() << endl << endl;

    Vector3d v_transformed = T * v;

    cout << "v tranformed = " << v_transformed.transpose() << endl << endl;

    Quaterniond q = Quaterniond(rotation_vector);

    cout << "quaternion = \n" << q.coeffs() << endl << endl;

    q = Eigen::Quaterniond(rotation_matrix);

    cout << "quaternion = \n" << q.coeffs() << endl << endl;

    v_rotated = q * v;

    cout << "(1,0,0) after rotation = " << v_rotated.transpose() << endl << endl;

    return 0;
}