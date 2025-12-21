int asmSort(int* array, int n)
{
    int movedCount = 0;
    for (int i = 1; i < n; i++) {
        int key = array[i];
        int j = i - 1;
        int changed = 0;

        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j = j - 1;
            changed = 1;
        }
        array[j + 1] = key;
        movedCount += changed;
    }
    return movedCount;
}



