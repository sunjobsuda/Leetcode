int longestMountain(int* A, int ASize) {
    if(ASize < 3)return 0;
    int i, count, max;
    int flag;   //-1 mountain uping; 0 mountain not start; 1 mountain downing
    flag = 0;
    max = 0;
    for(i = 0; i < ASize-1; i++){
        //printf("max:%d\n",max);
        if(flag == 0){
            count = 0;
            if(A[i] < A[i+1]){
                flag = -1;
                count++;
            }
        }else{
            if(flag < 0){
                if(A[i] < A[i+1]){
                    count++;
                }else{
                    if(A[i] > A[i+1]){
                        flag = 1;
                        count++;
                    }else{
                        flag = 0;
                    }
                }
            }else{
                if(A[i] <= A[i+1])     {
                    max = max < count+1 ? count+1 : max;
                    if(A[i] < A[i+1]){
                        flag = -1;
                        count = 1;
                    }else{
                        flag = 0;
                    }
                }else{
                    count++;
                }
            }
        }
    }
    if(flag > 0)max = max < count+1? count+1 : max; 
    return max;
}