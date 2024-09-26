#include <iostream>
#include <vector>
#include "selectionSort.h"
#include "mergeSort.h"
#include "quickSort.h"

using namespace std;

void regenerateVector(vector<int> &ar, int amount);

void printVector(vector<int> ar);

int main() {
    vector<int> ranVect;
    cout << "Using SelectionSortA..." << endl;
    regenerateVector(ranVect, 100);
    selectionSortA(ranVect);
    printVector(ranVect);
    cout << "Using SelectionSortB..." << endl;
    regenerateVector(ranVect, 100);
    selectionSortB(ranVect);
    printVector(ranVect);
    cout << "Using MergeSort..." << endl;
    regenerateVector(ranVect, 100);
    mergeSort(ranVect);
    printVector(ranVect);
    cout << "Using QuickSort..." << endl;
    regenerateVector(ranVect, 100);
    quickSort(ranVect);
    printVector(ranVect);

    ranVect.clear();

    return 0;
}

void regenerateVector(vector<int> &ar, int amount){
    ar.clear();
    for(int i = 0; i < 100; i++){
        ar.push_back(rand()%500);
    }
}

void printVector(vector<int> ar){
    int vectLength = ar.size();
    for(int i = 0; i < vectLength; i++){
        cout << ar[i] << " ";
        if(i % 20 == 0)
            cout << endl;
    }
}