// Definition of findHigh function goes here

template <typename A, typename B, typename C>
void findHigh(A arr[], B range, int &index, C &high) {
    high = arr[0];
    for (int i = 0; i < range; i++) {
        if (arr[i] > high) {
            index = i;
            high = arr[i];
        }
    }
}