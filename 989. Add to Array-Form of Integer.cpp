class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {

        // int n = num.size() - 1;
        // int rest = 0;
        // while(k || n >= 0) {
        //     if (n < 0) {
        //         num.insert(num.begin(), k % 10 + rest);
        //         rest  = 0;
        //         if (num[0] >= 10) {
        //             rest = num[0] / 10;
        //             num[0] %= 10;
        //         }
        //         k /= 10;
        //         continue ;
        //     }
        //     num[n] += ((k % 10) + rest);
        //     rest = 0;
        //     k /= 10;
        //     if (num[n] >= 10) {
        //         rest = num[n] / 10;
        //         num[n] %= 10;
        //     }
        //     n--;
        // }

        // if (rest)
        //     num.insert(num.begin(), rest);
        // return (num);

        for (int i = num.size() - 1; i >= 0 ; i--) {
            num[i] += k;
            k = num[i] / 10;
            num[i] %= 10;
        }
        while(k) { 
            num.insert(num.begin(), k % 10);
            k /= 10;
        }
        return (num);
    }
};