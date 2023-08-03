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
    template<typename T>
    void bubble_sort(vector<T> &arr) {
        int n = arr.size();
        bool sorted = true;  // to check if the array is already sorted
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    swap(arr[j], arr[j + 1]);
                    sorted = false;
                }
            }
            if (sorted == true) // if reached this, then the array is already sored
                break;
        }
    }


//SHELL SORT

//MERGE SORT
    template<typename T>
    void merge(vector<T> &arr, int l, int r, int mid) {
        int i, j, k;
        int sz1 = mid - l + 1; // in case of odd array, put the extra on the left sub array
        int sz2 = r - mid; // size of right/left subarrays
        int *subL = new int[sz1]; // left subarray, as dynamic array
        int *subR = new int[sz2]; // Right subarray. as dynamic array (if static, the sz1,sz2 must be const)

        for (int i = 0; i < sz1; i++) {
            subL[i] = arr[l + i];  //insert element for left subarray
        }
        for (int j = 0; j < sz2; j++) {
            subR[j] = arr[mid + 1 + j];  //insert elements for right subarray
        }

        i = j = 0;
        k = l;
        // start comparing
        while (i < sz1 && j < sz2) // compare between right and left subarrays
        {
            if (subL[i] <= subR[j]) {
                arr[k] = subL[i];
                i++;
            } else {
                arr[k] = subR[j];
                j++;
            }
            k++;
        }

        while (i < sz1) //when the comarison is done but there re still elements on the left/right subarray, put the remaining element as it is
        {
            arr[k] = subL[i];
            i++;
            k++;
        }
        while (j < sz2) {
            arr[k] = subR[j];
            j++;
            k++;
        }
    }

    template<typename T>
    void merge_sort(vector<T> &arr, int l, int r) {
        if (l < r)
        {
            int mid = (l + r)  / 2;
            merge_sort<T>(arr, l, mid);
            merge_sort<T>(arr, mid + 1, r);
            merge<T>(arr, l, r, mid);
        }
    }

//QUICK SORT