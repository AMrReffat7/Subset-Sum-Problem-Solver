#include <iostream>
#include <vector>

using namespace std;

int sum, n, tmp;
vector<int> arr, path;

void solve(int i)
{
    if (tmp > sum)
        return; // If the current sum exceeds the target sum, stop exploring this branch
    if (i == n)
    { // If we have considered all elements in the array
        if (tmp == sum)
        { // If the current sum equals the target sum
            for (int x : path)
                cout << x << ' '; // Print the current combination
            cout << '\n';
        }
    }
    else
    {
        // Option 1: Include the current element in the sum
        tmp += arr[i];          // Add the current element to the current sum
        path.push_back(arr[i]); // Add the current element to the path
        solve(i + 1);           // Recursively call solve with the next index
        tmp -= arr[i];          // Backtrack: Remove the current element from the current sum
        path.pop_back();        // Backtrack: Remove the current element from the path
        // Option 2: Exclude the current element from the sum

        solve(i + 1); // Recursively call solve with the next index
    }
}

int main()
{
    // Input the number of elements and the target sum
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    arr.resize(n);
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    cout << "Enter the target sum: ";
    cin >> sum;

    // Initialize temporary variables
    tmp = 0;
    path.clear();

    // Call the solve function with the initial index 0
    solve(0);

    return 0;
}
