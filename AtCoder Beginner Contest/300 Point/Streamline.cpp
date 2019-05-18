#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> x(m);

    for (int i = 0; i < m; i++) {
        cin >> x.at(i);
    }

    sort(x.begin(),x.end());

    vector<int> div(m-1);

    for (int i = 0; i < m-1; i++) {
        div.at(i) = abs(x.at(i) - x.at(i + 1));
    }

    sort(div.begin(),div.end());

    int sum = 0;
    for (int i = 0; i < (m - n); i++) {
        sum += div.at(i);
    }

    cout << sum << endl;
}
