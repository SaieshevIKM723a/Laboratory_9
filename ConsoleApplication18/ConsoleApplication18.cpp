#include <iostream>

using namespace std;

int main() {
    const int size = 100; 
    double matrix[size][size];
    int n; 

    cout << "Enter size of matrix: ";
    cin >> n;

    cout << "Enter elements of matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    
    double mainDiag = 0.0, sideDiag = 0.0;
    for (int i = 0; i < n; i++) {
        mainDiag += matrix[i][i];
        sideDiag += matrix[i][n - 1 - i]; 
    }
    double mainDiagAvg = mainDiag / n;
    double sideDiagAvg = sideDiag / n;

    cout << "The average arithmetic value of the elements of the main diagonal: " << mainDiagAvg << endl;
    cout << "The average arithmetic value of the elements of the side diagonal: " << sideDiagAvg << endl;

    double maxElement = matrix[0][0];
    int maxr = 0, maxc = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] > maxElement) {
                maxElement = matrix[i][j];
                maxr = i;
                maxc = j;
            }
        }
    }

    cout << "Max element of array: " << maxElement << endl;
    cout << "The location of the max element: line " << maxr + 1 << ", column " << maxc + 1 << endl;

    return 0;
}

