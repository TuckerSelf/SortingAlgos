#include <vector>
#include "mergeSort.h"

using namespace std;

vector<int> mergeSort::separateVector(vector<int> &ar, int startVal, int endVal){
    vector<int> output;
    int startPos = 0;
    while(ar[startPos] != startVal){
        startPos++;
    }
    while(ar[startPos] != endVal && startPos < ar.size()){
        output.push_back(ar[startPos]);
        startPos++;
    }
    return output;
}

void mergeSort::mergeSort(vector<int> &ar){
    if(ar.size() > 1){
        int frontVal = ar.front();
        int backVal = ar.back();
        if(frontVal < backVal){
            int midVal = (frontVal + backVal)/2;
            vector<int> frontHalf = separateVector(ar, frontVal, midVal);
            vector<int> backHalf = separateVector(ar, midVal, backVal);
            mergeSort(frontHalf);
            mergeSort(backHalf);
            int length = backHalf.size();
            for(int i = 0; i < length; i++){
                frontHalf.push_back(backHalf[i]);
            }
            for(int i = 0; i < ar.size(); i++){
                ar[i] = frontHalf[i];
            }
        }
    }
}