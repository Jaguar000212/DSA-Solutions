#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int allocateBoards(vector<int> &time, int m) {
        if (time.size() < m) return -1;
        vector<int> data = max_sum(time);
        int left = data[0];
        int right = data[1];
        int answer = INT_MAX;

        while (left <= right) {
            int middle = left + (right - left) / 2;
            if (isValid(time, m, middle)) {
                answer = min(answer, middle);
                right = middle - 1;
            } else left = middle + 1;
        }
        return answer;
    }

private:
    vector<int> max_sum(vector<int> &pages) {
        int max = INT_MIN;
        int total = 0;
        for (int page : pages){
          total += page;
          if (page > max) max = page;
        }
        return {max, total};
    }

    bool isValid(vector<int> &time, int m, int maxTime) {
        int noPainter = 1;
        int noUnit = 0;

        for (int unit : time) {
            if (unit > maxTime) return false;
            if (noUnit + unit <= maxTime) noUnit += unit;
            else {
                noPainter++;
                noUnit = unit;
            }
        }
        return noPainter <= m;
    }
};
