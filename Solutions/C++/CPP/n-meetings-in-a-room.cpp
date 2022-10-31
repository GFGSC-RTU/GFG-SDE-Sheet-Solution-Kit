#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
     int maxMeetings(int start[], int end[], int n)

    {

        vector<pair<int,int>>vec;

        for(int i=0; i<n; i++)

        {

            vec.push_back({end[i],start[i]});

        }

        sort(vec.begin(),vec.end());

        

        int ans=1;

        int flag=0;

        for(int i=1; i<n; i++)

        {

            if(vec[i].second>vec[flag].first)

            {

                ans++;

                flag=i;

            }

        }return ans;

    }
};