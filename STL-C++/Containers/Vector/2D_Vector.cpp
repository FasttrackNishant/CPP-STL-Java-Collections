#include <iostream>
using namespace std;

void print2DVector(const vector<vector<int>>&vec)
{

}

int main() {

    vector<vector<int>> matrix(4, vector<int>(4, 0)); // 4x4 matrix initialized with 0

    int rowCount = matrix.size(); // number of rows
    int colCount = matrix[0].size(); // number of columns
    
    cout<<"Row Count: " << rowCount << endl;
    cout<<"Column Count: " << colCount << endl;

    // Diff number of Columns in each row
    // This is a jagged array (2D vector with different column sizes)
    vector<vector<int>> arr(4);

    arr[0] = {1, 2, 3};
    arr[1] = {4, 5};
    arr[2] = {6, 7, 8, 9};
    arr[3] = {10};

    cout << "Jagged Array:" << endl;
    int totalRows = arr.size();

    cout<<"Total Rows: " << totalRows << endl;
    int TotalColumns = 0;
    for (int i = 0; i < totalRows; i++) {
        int currentRowSize = arr[i].size();
        TotalColumns += currentRowSize;
        cout << "Row " << i << " has " << currentRowSize << " columns" << endl;
    }




    return 0;
}