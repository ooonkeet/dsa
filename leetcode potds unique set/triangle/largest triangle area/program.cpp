#include<bits/stdc++.h>
using namespace std;
double largestTriangleArea(vector<vector<int>>& points) {
    int n = points.size();
    double maxArea = 0.0;


    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            for(int k = j+1; k < n; k++) {
                double x1 = points[i][0];
                double y1 = points[i][1];

                double x2 = points[j][0];
                double y2 = points[j][1];

                double x3 = points[k][0];
                double y3 = points[k][1];

                double a = hypot(x2-x1, y2-y1); //Math.hypot
                double b = hypot(x2-x3, y2-y3);
                double c = hypot(x3-x1, y3-y1);

                double s = (a + b + c) * 0.5;

                double heron = sqrt(s * (s-a) * (s-b) * (s-c));

                double shoelace = 0.5 * abs(x1 * (y2-y3) + x2 * (y3-y1) + x3 * (y1 - y2));


                maxArea = max({maxArea, heron, shoelace});
            }
        }
    }

    return maxArea;

}
int main() {
    int n;
    cout<<"Enter number of co-ordinates in your graph: ";
    cin>>n;
    vector<vector<int>> points(n);
    for(int i = 0; i < n; i++) {
        vector<int> point(2);
        cout<<"Enter coordinates of a point "<<i+1<<", enter x and then space then y (x y): ";
        for(int j = 0; j < 2; j++) {
            cin>>point[j];
        }
        points[i] = point;
    }
    double area = largestTriangleArea(points);
    cout<<"The largest triangle area is: "<<area<<endl;
}