class Solution {
public:
    string multiply(string num1, string num2) {
        int len1 = num1.length(), len2 = num2.length();
        vector<int> result(len1 + len2, 0);

        for (int i = len1 - 1; i >= 0; i--) {
            for (int j = len2 - 1; j >= 0; j--) {
                int product = (num1[i] - '0') * (num2[j] - '0');
                int sum = product + result[i + j + 1];
                result[i + j + 1] = sum % 10;
                result[i + j] += sum / 10;
            }
        }

        int i = 0;
        while (i < result.size() && result[i] == 0) {
            i++;
        }

        string productStr = "";
        if (i == result.size()) {
            productStr = "0";
        } else {
            for (; i < result.size(); i++) {
                productStr += to_string(result[i]);
            }
        }

        return productStr;
    }
};