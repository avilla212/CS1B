#include <iostream>
#include <string> 
#include <cstring>

using namespace std;

const int ROW = 2;
const int COL = 3;

void printArr(int [][COL]);
void summingRows(int [][COL]);

int main(void){
    int arr[ROW][COL] = {{1,2,3},
                        {4,5,6}};

    printArr(arr);

    return 0;
}

void printArr(int arr[ROW][COL]){
    for (int i = 0; i < ROW; i++){
        for (int j = 0; j < COL; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
void summingRows(int [][COL]);