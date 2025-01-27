#include <iostream>

using namespace std;

const int ROWS = 5;
const int COLS = 5;

int getTotal(int [ROWS][COLS]);
int getRowTotal(int [ROWS][COLS], int);
int getColumnTotal(int [ROWS][COLS], int);
int getHighestInRow(int [ROWS][COLS], int);

double getAverage(int [ROWS][COLS], int);
void printArr(int [ROWS][COLS]);

int main(void){

    int arr[ROWS][COLS] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
    };

    int total = getTotal(arr);
    cout << "Total: " << total << endl;

    double average = getAverage(arr,total);
    cout << "Average: " << average;

    int rowTotal = getRowTotal(arr, 0);
    cout << "\nRow total: " << rowTotal;

    int colTotal = getColumnTotal(arr, 0);
    cout << "\nCol total:" << colTotal;

    int rowMax = getHighestInRow(arr,0);
    cout << "\nHighest in row: " << rowMax;

    return 0;
}

int getTotal(int arr[ROWS][COLS]){
    int total = 0;

    for (int i = 0; i < ROWS; i++){
        for (int j = 0; j < COLS; j++){
            total += arr[i][j];
        }
    }

    return total;
}

double getAverage(int [ROWS][COLS], int total){
    return total / (ROWS * COLS);
}

int getRowTotal(int arr[ROWS][COLS], int row){
    int total = 0;

    for (int i = 0; i < COLS; i++){
        total += arr[row][i];
    }

    return total;
}

int getColumnTotal(int arr[ROWS][COLS], int col){
    int total = 0;
    //     {1, 2, 3, 4, 5},
    //     {6, 7, 8, 9, 10},
    //     {11, 12, 13, 14, 15},
    //     {16, 17, 18, 19, 20},
    //     {21, 22, 23, 24, 25}
    for (int i = 0; i < COLS; i++){
        // cout << arr[i][col] << " ";
        total += arr[i][col];
    }

    return total;
}

int getHighestInRow(int arr[ROWS][COLS], int row){
    int highest = 0;
    for (int i = 0; i < COLS; i++){
        if (arr[row][i] > highest){
            highest = arr[row][i];
        }
    }

    return highest;
}

void printArr(int arr[ROWS][COLS]){
    for (int i = 0; i < ROWS; i++){
        for (int j = 0; j < COLS; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}