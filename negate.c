static const int ARRAY_SIZE = 5;

int main() {
    int array[] = { 1, -2, 5, -6, 2 };

    for (int i = 0; i < ARRAY_SIZE; i ++) {
        if (array[i] < 0) {
            array[i] = 0 - array[i];
        }
    }

    return 0;
}
