class Solution
{
    public:
        static bool cmp(vector<int>&v1, vector<int>&v2)
        {
            if(v1[0] != v2[0])
                return v1[0] < v2[0];
            return v1[1] > v2[1];
        }
        int numberOfWeakCharacters(vector<vector < int>> &properties)
        {
            sort(properties.begin(), properties.end(),cmp);
            int n = properties.size();
            int count = 0, maxi = INT_MIN;
            for (int i = n-1; i >= 0; i--)
            {
                if (properties[i][1] < maxi)
                    count++;
                maxi = max(maxi , properties[i][1] );
            }
            return count;
        }
     

};