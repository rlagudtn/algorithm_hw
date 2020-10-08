#include <iostream>
#include <vector>
#include "solution.h"
#include <cmath>
using namespace std;


//vector<vector<int>> Solution::kClosest(vector<vector<int>>& points, vector<int> keypoint, int K) {
//	vector<int> distance;
//	vector<vector<int>> result;
//	//거리를 따로 저장
//	getDistance(points, keypoint, distance);
//	//k 번째 거리를 구한다.
//	//k번째 값이 되는 좌표들을 
//}
///* Put your codes */

void Solution::getDistance(vector<vector<int>>& points, vector<int> keypoint, vector<int>& distance){
	double dis;
	for (int i = 0;i < points.size();i++) {
		dis = pow(points[i][0] - keypoint[0],2) + pow(points[i][1] - keypoint[1],2);
		distance.push_back(dis);
	}

	
}
 int Solution::getSubMedian(vector<int>& distance){
	 int l = 0;
	 int r = 4;
	 int j;
	 int count,n,subMedian;
	 vector<int> median;
	 while (l < distance.size()) {
		 subMedian = this->getMedian(distance, l, r);
		 median.push_back(subMedian);
		 l = r+1;
		 if (r + 5 >= distance.size()) r = distance.size() - 1;
	 }

	 return this->getMedian(distance, 0, distance.size() - 1);

 }

 int Solution::getMedian(vector<int>& distance, int l, int r) {
	 int min;
	 int i, j;
	 int n = r-l + 1;
	 for (i = 1;i <= n/2;i++) {
		 min = distance[l];
		 for (j = l + 1;j <= r;j++) {
			 if (min > distance[j]) min = distance[j];
		 }
		 if (j <= r && min > distance[j]) {
			 distance[j] = distance[l];
			 distance[l] = min;
		 }
		 l++;
	 }
	 return distance[l - 1];
 }

 int Solution::partition(vector<int>& distance, int l, int r, int key) {
	 int i = 0;
	 while (distance[i] != key) {
		 i++;
	 }
	 i--;
	 swap(distance[i], distance[r]);

	 return 1;
 }
 void Solution::swap(int& a, int& b) {
	 int temp;
	 temp = a;
	 a = b;
	 b = temp;
 }
