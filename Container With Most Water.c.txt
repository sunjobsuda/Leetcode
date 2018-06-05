int maxArea(int* height, int heightSize) {
    // int i, j, size;
    // int maxSize = 0;
    // for(i = 0;i < heightSize; i++){
    //     if((heightSize-1-i) * height[i] < maxSize)continue;
    //     for(j = i + 1; j < heightSize; j++){
    //         size = height[i] > height[j] ? height[j]*(j-i) : height[i]*(j-i);
    //         maxSize = maxSize < size ? size : maxSize;
    //     }
    // }
    // return maxSize;
    
    int i, j, cap;
    int max = 0;
    for(i = 0, j = heightSize - 1; i < j;){
        if(height[i] < height[j]){
            cap = height[i] * (j - i);
            max = max < cap ? cap : max;
            i++;
        }else{
            cap = height[j] * (j - i);
            max = max < cap ? cap : max;
            j--;
        }
    }
    return max;
}