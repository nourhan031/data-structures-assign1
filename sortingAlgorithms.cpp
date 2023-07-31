//
// Created by nourh on 7/31/2023.
//

//vectors instead of arrays bec dynamic sizing and easy manipulation is req
//since we're reading data from a file with an unkown num of elements
//
//INSERTION SORT
template<typename T>
int insertionSort(vector<T>& arr){
    int comparison=0;
    int n = arr.size();

    for(int i=1; i<n; ++i){
        T key = arr[i];
        int j = i-1;

        while(j>=0 && ++comparison && arr[j]>key){
            arr[j+1] = arr[j];
            --j;
        }
        arr[j+1] = key;
    }
    return comparison;
}

//SELECTION SORT
template<typename T>
int selectionSort(vector<T>& arr){
    int comparison = 0;
    int minIdx;
    int n = arr.size();

    for (int i = 0; i < n-1; ++i) {
        minIdx = i;
        for (int j = i+1; j < n; ++j) {
            if (++comparison && arr[j]<arr[minIdx]){
                minIdx = j;
            }
        }

        if (minIdx != 1){
            swap(arr[i],arr[minIdx]);
        }
    }
    return comparison;
}

//BUBBLE SORT

//SHELL SORT

//MERGE SORT

//QUICK SORT