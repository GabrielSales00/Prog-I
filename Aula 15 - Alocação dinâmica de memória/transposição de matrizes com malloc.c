
float** transposta(int m, int n, float** mat)
{
    int i, j;
    float** trp;
    trp = (float**) malloc(n*sizeof(float*));
    for (i=0; i<n; i++)
        trp[i] = (float*) malloc(m*sizeof(float));
    for (i=0; i<m; i++)
        for (j=0; j<n; j++)
        trp[j][i] = mat[i][j];
    return trp;
}