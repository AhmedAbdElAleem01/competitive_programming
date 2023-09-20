  // sum((i, j) (k, l)) where (k, l) is the bottom right
  int sum_range(int i, int j, int k, int l, vector<vector<int>> & S) {
    return S[k][l] - S[k][j-1] - S[i-1][l] + S[i-1][j-1];
  }

  void accumSum2D() {
    // 1-based matrix
    // Append extra top row and col with zero
    vector<vector<int>> A =
        { { 0, 0, 0, 0, 0, 0 },
          { 0, 1, 2, 2, 4, 1 },
          { 0, 3, 4, [1, 5, 2 ]},
          { 0, 2, 3, [3, 2, 4 ]},
          { 0, 4, 1, 5, 4, 6 },
          { 0, 6, 3, 2, 1, 3 }, };

    // Accumulate each row
    for (int i = 1; i < (int) A.size(); i++)
      for (int j = 1; j < (int) A[0].size(); j++)
        A[i][j] += A[i][j-1];

    // Accumulate each col
    for (int j = 1; j < (int) A[0].size(); j++)
      for (int i = 1; i < (int) A.size(); i++)
          A[i][j] += A[i-1][j];

    // 1, 5, 2
    // 3, 2, 4
    cout << sum_range(2, 3, 3, 5, A) << "\n";
  }

int main() {
#ifndef ONLINE_JUDGE
  freopen("test.txt", "rt", stdin);
#endif

  accumSum2D();

  return 0;
}
