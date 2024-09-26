#ifdef MERGESORT_H
#define MERGESORT_H

#include <vector>

class mergeSort{
    private:
        std::vector<int> separateVector(std::vector<int> &ar, int starVal, int endVal);
    public:
        void mergeSort(std::vector<int> &ar);

};

#endif //MERGESORT_H