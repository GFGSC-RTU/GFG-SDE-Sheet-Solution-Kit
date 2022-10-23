class Solution

{

    public:

    //Function to calculate the span of stockâ€™s price for all n days.

    vector <int> calculateSpan(int p[], int n)

    {

       // Your code here

       stack<pair<int,int>>st;

       vector<int>vec;

       //int count=1;

       int i=0;

       while(i<n){

           if(st.size()==0)

           {

           vec.push_back(-1);

           }

           else if(st.size()>0 && st.top().first>p[i])

           {

               vec.push_back(st.top().second);

           }

           else if(st.size()>0 && st.top().first<=p[i]){

              while(st.size()>0 && st.top().first<=p[i]){

              st.pop();

              }

              if(st.size()==0){

                  vec.push_back(-1);

              }

              else{

                  vec.push_back(st.top().second);

              }

           }

           st.push({p[i],i});

           i++;

       }

       for(int i=0;i<vec.size();i++){

           vec[i]=i-vec[i];

       }

       return vec;

    }

};