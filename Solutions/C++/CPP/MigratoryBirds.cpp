/*
Question : Given an array of bird sightings where every element represents a bird type id, 
determine the id of the most frequently sighted type. If more than 1 type has been spotted that maximum amount, 
return the smallest of their ids.
Example :
Input :
n = 5
arr = [1,1,2,2,3]
Output : 1.
Explanation : There are two each of types 1 and 2, and one sighting of type 3. So we pick the smallest id among both
*/

// function to find the most frequently sighted type bird with smallest id

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int migratoryBirds(vector<int> arr) {
    unordered_map<int, int> umap;
    for (int i=0;i<arr.size();i++)
    {
        umap[arr[i]]++;
    }
    
    int maxFreq = 0;
    pair<int,int> p;
    for(auto i:umap)
    {
        if (i.second > maxFreq)
        {
            maxFreq = i.second;
            p.first = i.first;
            p.second = i.second;
        }
        else if (i.second == maxFreq)
        {
            if(p.first > i.first)
            {
                p.first = i.first;
                p.second = i.second;
            }
        }
    }
    return p.first;
}

// driver function
int main (){
	int t;
	cout << "Enter the number of test cases : ";
	cin >> t;
	while (t--)
	{
		int n;
		cout << "Enter the number of elements : ";
		cin >> n;
		vector <int> vec;
		cout << "Enter the elements : ";
		for (int i=0; i<n; i++){
			int num;
			cin >> num;
			vec.push_back(num);
		}
		
		int ans = migratoryBirds(vec);
		
		cout << ans << endl;
	}
	return 0;
}
