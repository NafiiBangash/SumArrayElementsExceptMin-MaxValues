#include <iostream>
using namespace std;

int minVal(int arr[],int size){
    int min = arr[0];
    for(int i=0;i<size;i++){
        if(min > arr[i]){
            min = arr[i];
        }
    }
    return  min;
}

int maxVal(int arr[],int size){
    int max = arr[0];
    for(int i=0;i<size;i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    return max;
}

int sumArrayValExceptMinMax(int arr[],int size){
    int minValue = minVal(arr,size);
    int maxValue = maxVal(arr,size);
    int sum  = 0;
    for(int i=0;i<size;i++){
        sum += arr[i];
    }
    return sum - minValue - maxValue;
}

int main() {
    int size = 8;
    int array[size] = {1,2,3,4,5,6,7,8};
    int res = sumArrayValExceptMinMax(array,size);
    cout << "Result = " << res << endl;
    int min = minVal(array,size);
    int max = maxVal(array,size);
    cout << "min = " << min <<endl;
    cout << "max = " <<max << endl;
    
    return 0;
}