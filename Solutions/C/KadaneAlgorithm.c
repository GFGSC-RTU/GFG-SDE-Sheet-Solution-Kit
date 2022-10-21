// C++ program to illustrate
// page faults in LRU
 
#include <bits/stdc++.h>
using namespace std;
 
/* Counts no. of page faults */
int pageFaults(int n, int c, int pages[])
{
    // Initialise count to 0
    int count = 0;
 
    // To store elements in memory of size c
    vector<int> v;
    int i;
    for (i = 0; i <= n - 1; i++) {
 
        // Find if element is present in memory or not
        auto it = find(v.begin(), v.end(), pages[i]);
 
        // If element is not present
        if (it == v.end()) {
 
            // If memory is full
            if (v.size() == c) {
               
                // Remove the first element
                // As it is least recently used
                v.erase(v.begin());
            }
 
            // Add the recent element into memory
            v.push_back(pages[i]);
 
            // Increment the count
            count++;
        }
        else {
 
            // If element is present
            // Remove the element
            // And add it at the end as it is
            // the most recent element
            v.erase(it);
            v.push_back(pages[i]);
        }
    }
 
    // Return total page faults
    return count;
}
 
/* Driver program to test pageFaults function*/
int main()
{
 
    int pages[] = { 1, 2, 1, 4, 2, 3, 5 };
    int n = 7, c = 3;
 
    cout << "Page Faults = " << pageFaults(n, c, pages);
    return 0;
}
 
// This code is contributed by rajsanghavi9.
