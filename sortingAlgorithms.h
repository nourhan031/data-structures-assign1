//
// Created by nourh on 8/3/2023.
//

#ifndef SORTINGALGORITHMS_CPP_SORTINGALGORITHMS_H
#define SORTINGALGORITHMS_CPP_SORTINGALGORITHMS_H


template<typename T>
int insertionSort(vector<T>& arr);
int selectionSort(vector<T>& arr);
int bubble_sort(vector<T> &arr);
void merge(vector<T> &arr, int l, int r, int mid, int& comparisons);
void merge_sort(vector<T> &arr, int l, int r, int& comparisons);

#endif //SORTINGALGORITHMS_CPP_SORTINGALGORITHMS_H
