#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iterator>
#include <numeric>
#include <set>

using namespace std;

// Function to parse the 3x3 grid representation of digits from 0 to 9
vector<vector<vector<int>>> parse_grid(const vector<string>& lines) {
    vector<vector<vector<int>>> digit_grids(10, vector<vector<int>>(3, vector<int>(3)));
    
    for (int i = 0; i < 10; ++i) {
        for (int r = 0; r < 3; ++r) {
            for (int c = 0; c < 3; ++c) {
                digit_grids[i][r][c] = lines[r][i*3 + c] - '0';
            }
        }
    }
    
    return digit_grids;
}

// Function to check if we can toggle at most one LED in 'faulty' to make it 'original'
bool is_single_toggle_possible(const vector<vector<int>>& original, const vector<vector<int>>& faulty) {
    int diff = 0;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (original[i][j] != faulty[i][j]) {
                diff++;
            }
            if (diff > 1) {
                return false;
            }
        }
    }
    return diff == 0 || diff == 1;
}

// Function to get all possible valid digits for each faulty digit
vector<vector<int>> get_possible_numbers(const vector<string>& faulty_number_grid, const vector<vector<vector<int>>>& digit_grids) {
    vector<vector<int>> possible_numbers;
    for (int i = 0; i < faulty_number_grid.size() / 3; ++i) {
        vector<vector<int>> faulty_digit(3, vector<int>(3));
        for (int r = 0; r < 3; ++r) {
            for (int c = 0; c < 3; ++c) {
                faulty_digit[r][c] = faulty_number_grid[r][i * 3 + c] - '0';
            }
        }
        
        vector<int> valid_digits;
        for (int digit = 0; digit < 10; ++digit) {
            if (is_single_toggle_possible(digit_grids[digit], faulty_digit)) {
                valid_digits.push_back(digit);
            }
        }
        
        if (valid_digits.empty()) {
            return {};  // If no valid digit, return empty to indicate "Invalid"
        }
        
        possible_numbers.push_back(valid_digits);
    }
    
    return possible_numbers;
}

// Function to calculate the sum of all possible numbers that can be formed
int calculate_sum(const vector<vector<int>>& possible_numbers) {
    int total_sum = 0;
    
    // Generate all combinations of valid digits using backtracking (or product of combinations)
    int n = possible_numbers.size();
    vector<int> indices(n, 0);  // Start with the first digit of each possible number
    
    while (true) {
        // Calculate the number formed by this combination of digits
        int number = 0;
        for (int i = 0; i < n; ++i) {
            number = number * 10 + possible_numbers[i][indices[i]];
        }
        total_sum += number;
        
        // Move to the next combination
        int i = n - 1;
        while (i >= 0) {
            if (indices[i] + 1 < possible_numbers[i].size()) {
                indices[i]++;
                break;
            } else {
                indices[i] = 0;
                i--;
            }
        }
        
        if (i < 0) {
            break;  // No more combinations
        }
    }
    
    return total_sum;
}

// Main function to solve the problem
string solve_problem(const vector<string>& input_lines) {
    // First, parse the input lines to extract the digit grids and the faulty number
    vector<vector<vector<int>>> digit_grids = parse_grid({input_lines.begin(), input_lines.begin() + 3});
    vector<string> faulty_number_grid(input_lines.begin() + 3, input_lines.end());
    
    // Get possible valid digits for each faulty digit
    vector<vector<int>> possible_numbers = get_possible_numbers(faulty_number_grid, digit_grids);
    
    if (possible_numbers.empty()) {
        return "Invalid";
    }
    
    // Calculate the sum of all possible numbers
    int sum = calculate_sum(possible_numbers);
    return to_string(sum);
}

int main() {
    // Input
    vector<string> input_lines(6);
    for (int i = 0; i < 6; ++i) {
        cin >> input_lines[i];
    }
    
    // Solve the problem and print the result
    cout << solve_problem(input_lines) << endl;
    
    return 0;
}
