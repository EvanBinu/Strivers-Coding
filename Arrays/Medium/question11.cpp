#include <iostream>
using namespace std;

int main(){
    int r,c;
    cin >> r >> c;
    int arr[r][c];
    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            cin >> arr[i][j];
        }
    }
    bool firstrowzero = false;
    bool firstcolzero = false;
    for(int i = 0;i<c;i++){
        if(arr[0][i] == 0){
            firstrowzero = true;
            break;
        }
    }
    for(int j = 0;j<r;j++){
        if(arr[j][0] == 0){
            firstcolzero = true;
            break;
        }
    }
    

    for(int i = 1;i<r;i++){
        for(int j = 1;j<c;j++){
            if(arr[i][j] == 0){
                arr[i][0] = 0;
                arr[0][j] = 0;
            } 
            break;
        }
    }
    for(int i = 1;i<r;i++){
        for(int j = 1;j<c;j++){
            if(arr[i][0] == 0 || arr[0][j] == 0){
                arr[i][j] = 0;
            } 
        }
    }
    if(firstcolzero){
        for(int j = 0;j<r;j++){
            arr[j][0] = 0;
        }
    }
    if(firstrowzero){
        for(int i = 0;i<c;i++){
            arr[0][i] = 0;
        }
    }
    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }


}