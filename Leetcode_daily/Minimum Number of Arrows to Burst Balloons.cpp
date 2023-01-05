class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
    // Sort the points by the end point
    sort(points.begin(), points.end(), [](vector<int>& a, vector<int>& b) {return a[1] < b[1];});

    // Minimum arrows required = 1
    int arrows = 1;

    // Initialize the end point of the first balloon
    int end = points[0][1];

    // Loop through the points
    for (int i = 1; i < points.size(); i++)
    {
        // If the start point of the current balloon is greater than the end point of the previous balloon
        if (points[i][0] > end)
        {
            // Increment the number of arrows
            arrows++;
            
            // Update the end point of the previous balloon
            end = points[i][1];
        }
    }
    // Return the number of arrows
    return arrows;
}
};
