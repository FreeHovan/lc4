void Sort(int* arr, int n) {
	int a = 0;
	for (int i = 0; i < n - 1; i++) {
		for (int j = n - 1; j > i; j--) {
			if (arr[j] < arr[j - 1]) {
				a = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = a;
			}
		}
	}
}