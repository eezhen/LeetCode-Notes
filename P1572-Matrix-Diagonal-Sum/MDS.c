int diagonalSum(int** mat, int matSize, int* matColSize){
    int dsum=0;
    if(matSize%2==1){
        for(int i=0 ; i<matSize ; ++i){
            dsum += (mat[i][i] + mat[i][matSize-1-i]);
        }
        return dsum-mat[matSize/2][matSize/2];
    }
    if(matSize%2==0){
        for(int i=0 ; i<matSize ; ++i){
            dsum += (mat[i][i] + mat[i][matSize-1-i]);
        }
        return dsum;
    }
    return NULL;

}
