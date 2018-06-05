int maxArea(int* height, int heightSize) {
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