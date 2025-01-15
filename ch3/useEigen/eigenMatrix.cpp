#include <iostream>
using namespace std;

#include <ctime>
#include <eigen3/Eigen/Core>
#include <eigen3/Eigen/Dense>
using namespace Eigen;

#define MATRIX_SIZE 50

int main(int argc, char** argv)
{
    Matrix<float, 2, 3> matrix_23;
    Vector3d v_3d;
    Matrix<float, 3, 1> vd_3d;

    Matrix3d matrix_33 = Matrix3d::Zero();

    Matrix<double, Dynamic, Dynamic> matrix_dynamic;

    MatrixXd matrix_x;

    matrix_23 << 1, 2, 3, 4, 5, 6;
    cout << matrix_23 << endl << endl;

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            cout << matrix_23(i, j) << "\t";
        }

        cout << endl;
    }
    cout << endl;

    v_3d << 3, 2, 1;
    vd_3d << 4, 5, 6;

    Matrix<double, 2, 1> result = matrix_23.cast<double>() * v_3d;
    cout << result << endl << endl;

    Matrix<float, 2, 1> result2 = matrix_23 * vd_3d;
    cout << result2 << endl << endl;

    matrix_33 = Matrix3d::Random();
    cout << matrix_33 << endl << endl;

    cout << matrix_33.transpose() << endl << endl;
    cout << matrix_33.sum() << endl << endl;
    cout << matrix_33.trace() << endl << endl;
    cout << 10 * matrix_33 << endl << endl;
    cout << matrix_33.inverse() << endl << endl;
    cout << matrix_33.determinant() << endl << endl;

    SelfAdjointEigenSolver<Matrix3d> eigen_solver(matrix_33.transpose() * matrix_33);
    cout << "Eigen values = \n" << eigen_solver.eigenvalues() << endl << endl;
    cout << "Eigen vectors = \n" << eigen_solver.eigenvectors() << endl << endl;

    Matrix<double, MATRIX_SIZE, MATRIX_SIZE> matrix_NN;
    matrix_NN = MatrixXd::Random(MATRIX_SIZE, MATRIX_SIZE);

    Matrix<double, MATRIX_SIZE, 1> v_Nd;
    v_Nd = MatrixXd::Random(MATRIX_SIZE, 1);

    clock_t time_stt = clock();

    Matrix<double, MATRIX_SIZE, 1> x = matrix_NN.inverse() * v_Nd;
    cout << "time use in normal inverse is " << 1000 * (clock() - time_stt) / (double)CLOCKS_PER_SEC << "ms"<< endl << endl;

    time_stt = clock();
    
    x = matrix_NN.colPivHouseholderQr().solve(v_Nd);
    cout << "time use in Qr decomposition is " << 1000 * (clock() - time_stt) / (double)CLOCKS_PER_SEC << "ms" << endl << endl;

    return 0;
}