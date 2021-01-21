int knapsack(int w[], int val[], int W, int n) {
	if (n == 0 || W == 0) {
		return 0;
	}
	if (w[n - 1] <= W) {
		return max(val[n - 1] + knapsack(w, val, W - w[n - 1], n - 1), knapsack(w, val, W, n - 1));
	}
	else {
		return knapsack(w, val, W, n - 1);
	}
}
