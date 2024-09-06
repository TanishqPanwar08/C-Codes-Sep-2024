#include<bits/stdc++.h>
using namespace std;

vector<int> findOrder(vector<int> &height, vector<int> &infront) {
    int n = height.size();
    vector<pair<int, int>> people;
    for (int i = 0; i < n; ++i) {
        people.push_back({height[i], infront[i]});
    }

    sort(people.begin(), people.end());

    vector<int> result(n, -1); 

    for (const auto& p : people) {
        int height = p.first;
        int pos = p.second;

        for (int i = 0; i < n; ++i) {
            if (result[i] == -1) {
                if (pos == 0) {
                    result[i] = height; 
                    break;
                }
                --pos;
            }
        }
    }

    return result;
}



int main()
{
    vector<int> heights = {5, 3, 2, 6, 1, 4};
    vector<int> infront = {0, 1, 2, 0, 3, 2};

    vector<int> ans = findOrder(heights, infront);

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    
}
