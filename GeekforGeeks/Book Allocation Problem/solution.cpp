#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int allocateBook(vector<int> &pages, int m) {
        if (pages.size() < m) return -1;

        int left = 0;
        int right = sum(pages);
        int answer = INT_MAX;

        while (left <= right) {
            int middle = left + (right - left) / 2;
            if (isValid(pages, m, middle)) {
                answer = min(answer, middle);
                right = middle - 1;
            } else left = middle + 1;
        }
        return answer;
    }

private:
    int sum(vector<int> &pages) {
        int total = 0;
        for (int page : pages) total += page;
        return total;
    }

    bool isValid(vector<int> &pages, int m, int maxPages) {
        int noStudent = 1;
        int noPages = 0;

        for (int page : pages) {
            if (page > maxPages) return false;
            if (noPages + page <= maxPages) noPages += page;
            else {
                noStudent++;
                noPages = page;
            }
        }
        return noStudent <= m;
    }
};
