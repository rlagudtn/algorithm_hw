#include <iostream>
#include <vector>
using namespace std;

class Solution
{
/* DO NOT change this core function prototype. 
 * The main function of the evaluation system will access your codes through this entry point
 */
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, vector<int> keypoint, int K);
/* DO NOT change by here */

/* Put your codes */
    void getDistance(vector<vector<int>>& points, vector<int> keypoint, vector<int>& distance);

    int getSubMedian(vector<int>& distance, int l, int r);

    int getMedian(vector<int>& distance, int l, int r);

    int partition(vector<int>& distance, int l, int r, int key);

    void swap(int& a, int& b);

    int select(vector<int>& distance, int l, int r, int key);
};


