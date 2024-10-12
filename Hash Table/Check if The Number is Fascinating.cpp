class Solution {
public:
    bool isFascinating(int n) {
        string answer = "";
        answer += to_string(n);
        answer += to_string(2*n);
        answer += to_string(3*n);
        sort(answer.begin(), answer.end());
        string check = "123456789";
        return (answer == check);
    }
};