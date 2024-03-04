#include <iostream>
#include <vector>

void insertionSort(std::vector<int>& arr, int n) {

  std::cin >> arr[0];

  for (int i = 1; i < n; i++) {
    std::cin >> arr[i];
    int key = arr[i];

    int j = i - 1;

    while (j >= 0 && arr[j] > key) {
      arr[j + 1] = arr[j];
      j--;
    }

    arr[j + 1] = key;
  }
}

int main() {

  int n;
  std::cin >> n;
  std::vector<int> arr(n);

  insertionSort(arr, n);

  for (int i = 0; i < n; i++) {
      std::cout << arr[i] << " ";
  }

  return 0;
}
