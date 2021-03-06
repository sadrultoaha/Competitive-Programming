#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <vector>
using namespace std;

const int MAXN = 50000 + 10;
const double EPS = 1e-9;
const double PI = acos(-1.0);

int n;
double l, r;
double x[MAXN], y[MAXN], theta[MAXN];

bool check(double ans) {
    vector< pair<double, double> > itv;
    for (int i = 0; i < n; ++i) {
        if (ans <= y[i] - EPS) {
            itv.push_back(make_pair(
                x[i] - tan(theta[i]) * (y[i] - ans),
                x[i] + tan(theta[i]) * (y[i] - ans)
            ));// get the intervals
        }
    }
    sort(itv.begin(), itv.end());
    if (itv.empty()) return 0;
    double cur_l = itv[0].first, cur_r = itv[0].second; // get the union
    for (int i = 1; i < (int)itv.size(); ++i) {
        if (itv[i].first < cur_r + EPS) {
            cur_r = max(cur_r, itv[i].second);
        } else {
            if (l > cur_l - EPS && r < cur_r + EPS) {
                return 1;
            }
            cur_l = itv[i].first;
            cur_r = itv[i].second;
        }
    }
    return l > cur_l - EPS && r < cur_r + EPS;
}

int main() {
    scanf("%d%lf%lf", &n, &l, &r);
    for (int i = 0; i < n; ++i) {
        scanf("%lf%lf%lf", &x[i], &y[i], &theta[i]);
        theta[i] = theta[i] / 180.0 * PI;
    }

    double low = -1.0, high = 1000.0;	//Binary Search for the answer
    for (int iter = 0; iter < 64; ++iter) {
        double mid = (low + high) / 2.0;
        if (check(mid)) {
            low = mid;
        } else {
            high = mid;
        }
    }
    if (low < -EPS) {
        printf("No Solution\n");	//Just check whether there is a solution. The test data avoid this output
    } else {
        printf("%.10f\n", (low + high) / 2.0);
    }
    return 0;
}
