#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <iomanip>
#include <climits>  // Include this header for INT_MAX

using namespace std;

// Function to calculate the minimum number of cells a wire touches from the intersection
int calculateTouchCells(int x1, int y1, int x2, int y2, int intersectionX, int intersectionY) {
    if (x1 == x2) {  // Vertical wire
        return abs(y1 - intersectionY) + abs(y2 - intersectionY);
    } else if (y1 == y2) {  // Horizontal wire
        return abs(x1 - intersectionX) + abs(x2 - intersectionX);
    }
    return 0;
}

// Function to find if two segments intersect
bool doIntersect(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4) {
    // Using orientation method to check intersection
    auto orientation = [](int x1, int y1, int x2, int y2, int x3, int y3) -> int {
        return (y2 - y1) * (x3 - x2) - (x3 - x1) * (y2 - y1);
    };

    int o1 = orientation(x1, y1, x2, y2, x3, y3);
    int o2 = orientation(x1, y1, x2, y2, x4, y4);
    int o3 = orientation(x3, y3, x4, y4, x1, y1);
    int o4 = orientation(x3, y3, x4, y4, x2, y2);

    return (o1 != o2 && o3 != o4);
}

int main() {
    int N;
    cin >> N;

    vector<vector<int>> wires(N, vector<int>(4));
    map<string, int> animalThresholds;
    string touchedAnimal;

    // Input wire data
    for (int i = 0; i < N; ++i) {
        cin >> wires[i][0] >> wires[i][1] >> wires[i][2] >> wires[i][3];
    }

    // Input animal voltage resistance
    string animalData;
    cin.ignore();
    getline(cin, animalData);
    size_t pos = 0;
    while ((pos = animalData.find(" ")) != string::npos) {
        string pair = animalData.substr(0, pos);
        size_t colonPos = pair.find(":");
        string animal = pair.substr(0, colonPos);
        int threshold = stoi(pair.substr(colonPos + 1));
        animalThresholds[animal] = threshold;
        animalData.erase(0, pos + 1);
    }
    size_t colonPos = animalData.find(":");
    string animal = animalData.substr(0, colonPos);
    int threshold = stoi(animalData.substr(colonPos + 1));
    animalThresholds[animal] = threshold;

    // Animal that touched the fence
    cin >> touchedAnimal;

    // Find intersections and calculate voltage
    int totalVoltage = 0;
    vector<pair<int, int>> intersections;

    for (int i = 0; i < N; ++i) {
        for (int j = i + 1; j < N; ++j) {
            int x1 = wires[i][0], y1 = wires[i][1], x2 = wires[i][2], y2 = wires[i][3];
            int x3 = wires[j][0], y3 = wires[j][1], x4 = wires[j][2], y4 = wires[j][3];

            if (doIntersect(x1, y1, x2, y2, x3, y3, x4, y4)) {
                // Find intersection (simplified for the case of vertical or horizontal lines)
                int intersectionX = 0, intersectionY = 0;
                if (x1 == x2) { // Wire 1 is vertical
                    intersectionX = x1;
                    intersectionY = max(min(y1, y2), min(y3, y4));
                } else if (y1 == y2) { // Wire 1 is horizontal
                    intersectionX = max(min(x1, x2), min(x3, x4));
                    intersectionY = y1;
                }

                intersections.push_back({intersectionX, intersectionY});

                // Calculate voltage at intersection
                int voltageAtIntersection = 0;
                int minTouch = INT_MAX;  // Now INT_MAX will be recognized

                for (int k = 0; k < N; ++k) {
                    int touch = calculateTouchCells(wires[k][0], wires[k][1], wires[k][2], wires[k][3], intersectionX, intersectionY);
                    minTouch = min(minTouch, touch);
                }
                voltageAtIntersection = intersections.size() * minTouch;
                totalVoltage += voltageAtIntersection;
            }
        }
    }

    // Check if the touched animal survives
    if (totalVoltage >= animalThresholds[touchedAnimal]) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    // Calculate the probability of animals dying
    int deathCount = 0;
    for (auto& animal : animalThresholds) {
        if (totalVoltage >= animal.second) {
            deathCount++;
        }
    }

    double probability = static_cast<double>(deathCount) / animalThresholds.size();
    cout << fixed << setprecision(2) << probability << endl;

    return 0;
}
