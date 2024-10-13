class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        int size = timePoints.size();
        vector<int> minutes;

        // Convert time strings to minutes for efficient comparison
        for (const string& timePoint : timePoints) {
            int hours = stoi(timePoint.substr(0, 2));
            int mints = stoi(timePoint.substr(3, 2));
            minutes.push_back(hours * 60 + mints);
        }

        // Sort minutes for efficient comparison
        sort(minutes.begin(), minutes.end());

        // Calculate minimum difference, considering potential wrap-around
        int minimum = INT_MAX;
        for (int i = 1; i < size; ++i) {
            minimum = min(minimum, minutes[i] - minutes[i - 1]);
        }
        // Handle potential wrap-around (e.g., 23:59 and 00:01)
        minimum = min(minimum, minutes[0] + 1440 - minutes[size - 1]);

        return minimum;
    }
};