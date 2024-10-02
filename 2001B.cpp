#include <bits/stdc++.h>  
using namespace std;
 
#define f(i,n) for(ll i = 0; i < n; i++)
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int qry(int a, int b){
    cout << "? "<< a<<" " << b << endl;
    cout.flush();
    int ans;
    cin >> ans;
    return ans;
}



void findEdges(int a, int b, vector<int>& vis, vector<pair<int, int>>& edges){
    int x = qry(a, b);
    //base case
    if(x==a||x==b){
        edges.emplace_back(a, b);  
        vis[x]= 1;
        vis[b]= 1;
        return;
    }
    if(vis[a]==1 && vis[x] == 1){
        findEdges(x, b, vis, edges);
    }
    else
    {
        findEdges(a, x, vis, edges);
        findEdges(x, b, vis, edges);
    }
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    fast_cin();
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n==2){
            cout<< "! 1 2" << endl;
            cout.flush();
            continue;
        }
        vector<int> vis(n + 1, 0);
        vector<pair<int, int>> edges;

        for(int i = 1; i <n; i++){
            for(int j = i + 1; j<= n; j++){
                if(vis[j] == 1) continue;
                findEdges(i, j, vis, edges);
            }
        }

        cout << "!";
        for(auto edge : edges){
            cout<<" "<<edge.first<<" "<<edge.second;
        }
        cout<<endl;
        cout.flush();
    }
    return 0;
}

