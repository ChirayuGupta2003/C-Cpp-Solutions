#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int len;
        cin >> len;
        int arr[len];

        for (int j = 0; j < len; j++) {
            cin >> arr[j];
        }

        for (int j = 0; j < len; j++) {
            cout << arr[j] << " ";
        }

        int q;
        for (int j = 0; j < q; j++) {
            int l, r, x, ans = 0;
            cin >> l >> r >> x;
            for (int k = l - 1; k < r; k++)
                if ((arr[k] ^ x) > (arr[k] & x))
                    ans++;
            cout << ans << endl;
        }

    }
    return 0;
}
