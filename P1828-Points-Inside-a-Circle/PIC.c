/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* countPoints(int** points, int pointsSize, int* pointsColSize, int** queries, int queriesSize, int* queriesColSize, int* returnSize){
    int *returnArr = (int *)malloc(sizeof(int) * queriesSize);
    memset(returnArr, 0, sizeof(int) * queriesSize);
    for(int i=0 ; i<queriesSize ; ++i){
        int qx = queries[i][0], qy = queries[i][1], qr = queries[i][2];
        for(int j=0 ; j<pointsSize ; ++j){
            int px = points[j][0], py = points[j][1], sqSum = (qx-px) * (qx-px) + (qy-py) * (qy-py);
            if(sqSum <= qr*qr){
                ++returnArr[i];
            }           
        }
    }
    *returnSize = queriesSize;
    return returnArr;
}
