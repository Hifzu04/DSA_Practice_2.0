#include <iostream>
#include <vector>
#include <algorithm>

int maxActivities(std::vector<std::pair<int, int>> &activities)
{
    int n = activities.size();

    // Sort the activities by their end times
    std::sort(activities.begin(), activities.end(), [](const std::pair<int, int> &a, const std::pair<int, int> &b)
              { return a.second < b.second; });

    int count = 1; // The first activity is always included
    int prevEnd = activities[0].second;

    // Iterate through the activities and choose non-overlapping ones
    for (int i = 1; i < n; i++)
    {
        if (activities[i].first >= prevEnd)
        {
            count++;
            prevEnd = activities[i].second;
        }
    }

    return count;
}

int main()
{
    std::vector<std::pair<int, int>> activities = {{7, 9}, {0, 10}, {4, 5}, {8, 9}, {4, 10}, {5, 7}};
    int max = maxActivities(activities);
    std::cout << "Maximum number of activities: " << max << std::endl;
    return 0;
}
