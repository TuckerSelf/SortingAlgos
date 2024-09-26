#include <vector>
#include "selectionSort.h"

using namespace std;

void selectionSort::selectionSortA(vector<int> &ar){
    int length = ar.size();
    if(length > 1){
        for(int i = 0; i < length; i++){
            for(int j = i++; j < length; j++){
                if(ar[j] < ar[i]){
                    int temp = ar[j];
                    ar[j] = ar[i];
                    ar[i] = temp;
                }
            }
        }
    }
}

void selectionSort::selectionSortB(vector<int> &ar){
    int length = ar.size();
    if(length > 1){
        for(int i = 0; i < length; i++){
            int min = i;
            for(int j = i++; j < length; j++){
                if(ar[j] < ar[min]){
                    min = j;
                }
            }
            int temp = ar[i];
            ar[i] = ar[min];
            ar[min] = temp;
        }
    }
}