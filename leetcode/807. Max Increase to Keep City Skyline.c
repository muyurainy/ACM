int maxIncreaseKeepingSkyline(int** grid, int gridRowSize, int *gridColSizes) {
    int skyline_row[gridRowSize];
    int skyline_col[gridColSizes[0]];
    memset(skyline_row, 0, sizeof(int)*gridRowSize);
    memset(skyline_col, 0, sizeof(int)*gridColSizes[0]);
    for(int i = 0; i < gridRowSize; ++i){
        for (int j = 0; j < gridColSizes[0]; ++j){
            if (grid[i][j] > skyline_row[i])
                skyline_row[i] = grid[i][j];
            if (grid[i][j] > skyline_col[j])
                skyline_col[j] = grid[i][j];
            //printf("%d\n", skyline_row[i]);
        }
    }
    int sum = 0;
    for(int i = 0; i < gridRowSize; ++i){
        for (int j = 0; j < gridColSizes[0]; ++j){
            if (skyline_row[i]<skyline_col[j])
                sum += skyline_row[i] - grid[i][j];
            else
                sum += skyline_col[j] - grid[i][j];
        }
    }
    return sum;
}