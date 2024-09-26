#include <vector>
#include "quickSort.h"

using namespace std;

void quickSort::limitQuick(vector<int> &ar, int startVal, int endVal){
    if(endVal-startVal > 1){
        int pivotPoint = rand()%(endVal-startVal);
        int pivot = ar[pivotPoint];
        for(int i = startVal; i < endVal; i++){
            if(ar[i] < pivot){
                ar[pivot] = ar[i];
                ar[i] = pivot;
                pivotPoint = i;
            }
        }
        limitQuick(ar, startVal, pivotPoint);
        limitQuick(ar, pivotPoint, endVal);
    }
}

void quickSort::quickSort(vector<int> &ar){
    if(ar.size() > 1){
        int frontVal = ar.front();
        int backVal = ar.back();
        if(frontVal < backVal){
            int pivotPoint = rand()%ar.size();
            int pivot = ar[pivotPoint];
            for(int i = 0; i < ar.size(); i++){
                if(ar[i] < pivot){
                    ar[pivot] = ar[i];
                    ar[i] = pivot;
                    pivotPoint = i;
                }
            }
            limitQuick(ar, 0, pivotPoint);
            limitQuick(ar, pivotPoint, ar.size());
        }
    }
}