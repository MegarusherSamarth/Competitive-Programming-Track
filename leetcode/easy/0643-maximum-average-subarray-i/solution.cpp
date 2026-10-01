class Solution {
public:
    double findMaxAverage(vector<int>& arr, int k) {
        int n = arr.size();
        int window=0;
        for (int i=0; i<k; i++){
            window += arr[i];
        }
        int result = window;
        for (int j=k; j<n; j++){
            window += arr[j] - arr[j-k];
            result = max(result, window);
        }
        double sum = (double)result / k;
        return sum;
    }
};