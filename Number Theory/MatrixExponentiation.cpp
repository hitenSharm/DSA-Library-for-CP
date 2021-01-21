#define N 101
template <typename T>
class matrixExponentation {
public:
	T ar[N][N], I[N][N];
	void identity(T dim) {
		memset(I, 0, sizeof(I));
		for (T i = 1; i <= dim; i++) {
			I[i][i] = 1;
		}
	}
	void multiply(T Ix[][N], T Ax[][N], T dim) {
		T res[dim + 1][dim + 1];
		for (T i = 1; i <= dim; i++) {
			for (T j = 1; j <= dim; j++) {
				res[i][j] = 0;
				for (T k = 1; k <= dim; k++) {
					res[i][j] += Ix[i][k] * Ax[k][j];
				}
			}
		}
		for (T i = 1; i <= dim; i++) {
			for (T j = 1; j <= dim; j++) {
				Ix[i][j] = res[i][j];
			}
		}
	}
	void power(T A[][N], T dim, T n) {
		identity(dim);
		while (n) {
			if (n & 1) {
				multiply(I, A, dim);
				n--;
			}
			else {
				multiply(A, A, dim);
				n /= 2;
			}
		}
		for(T i=1; i<=dim; i++) {
			for(T j=1; j<=dim; j++) {
				A[i][j] = I[i][j];
			}
		}
	}
	void printResMatrix (T A[][N], T dim) {
		for (T i = 1; i <= dim; i++) {
			for (T j = 1; j <= dim; j++) {
				cout << A[i][j] << " ";
			}
			cout << "\n";
		}
	}
	/* In main()
	matrixExponentation<int> M;
	cin >> M.ar[i][j];
	M.power(M.ar, dim, n);
	M.printResMatrix(dim);
	*/
};
