int maxFrequencyElements(int* nums, int numsSize) {
    int a[101] = {}; //每個格子裡,都會補0 統計數字出現的次數, 一開始是0(每個格子裡,都會補0)
    int best = 0;
    for(int i=0; i<numSize; i++){
        int now = nums[i];
        a[now]++;
        if(a[now]>best) best = a[now];
    }
    int ans = 0;
    for(int i=1; i<=100; i++){
        if(a[i]==best) ans+=a[i];

    }
    return ans;

}