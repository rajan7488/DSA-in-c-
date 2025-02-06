#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int find_days_to_reach_rostering(int n, vector<pair<int, int>>& friendships, int K) {
    // Initialize friendships (adjacency list)
    vector<unordered_set<int>> friends(n);
    for (auto& p : friendships) {
        friends[p.first].insert(p.second);
        friends[p.second].insert(p.first);
    }
    
    // Initialize the status of employees (true = WFO, false = WFH)
    vector<bool> status_today(n, true);  // All employees start with WFO on day 1
    int total_rostering = 0;
    int days = 0;
    
    while (total_rostering < K) {
        days++;
        
        // Count how many employees are working from office today
        int attendees_today = 0;
        for (int i = 0; i < n; ++i) {
            if (status_today[i]) {
                attendees_today++;
            }
        }
        total_rostering += attendees_today;
        
        // If we reach the target rostering, stop
        if (total_rostering >= K) {
            break;
        }
        
        // Prepare for the next day
        vector<bool> status_next_day(n, false);  // Initially all are WFH
        
        // Update status for the next day
        for (int i = 0; i < n; ++i) {
            int friends_wfo = 0;
            for (int f : friends[i]) {
                if (status_today[f]) {
                    friends_wfo++;
                }
            }
            
            if (status_today[i]) {  // WFO today
                if (friends_wfo == 3) {
                    status_next_day[i] = true;  // Continue WFO
                } else {
                    status_next_day[i] = false; // Switch to WFH
                }
            } else {  // WFH today
                if (friends_wfo < 3) {
                    status_next_day[i] = true;  // Switch to WFO
                } else {
                    status_next_day[i] = false; // Continue WFH
                }
            }
        }
        
        // Update the status for the next day
        status_today = status_next_day;
    }
    
    return days;
}

int main() {
    int n, m, K;
    cin >> n >> m;  // n is number of employees, m is number of friendships
    vector<pair<int, int>> friendships(m);
    
    // Read the friendships (0-based index)
    for (int i = 0; i < m; ++i) {
        cin >> friendships[i].first >> friendships[i].second;
        // Adjust for 0-based indexing
        friendships[i].first--;
        friendships[i].second--;
    }
    
    // Read the target rostering value
    cin >> K;

    // Call the function to calculate the number of days
    int result = find_days_to_reach_rostering(n, friendships, K);
    
    // Output the result
    cout << result << endl;
    
    return 0;
}
