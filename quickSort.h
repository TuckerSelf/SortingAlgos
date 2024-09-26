#ifdef QUICKSORT_H
#define QUICKSORT_H

#include <vector>

class quickSort{
    private:
    void limitQuick(std::vector<int> &ar, int startVal, int endVal);
    public:
    void quickSort(std::vector<int> &ar);
};

#endif //QUICKSORT_H