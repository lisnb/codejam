#include <iostream>
using namespace std;


int main()
{
    int r(0), c(0), w(0);
    cin >> r >> c >> w;
    int ans = (c / w)*(r - 1);
    if (c%w == 0)
        ans += c / w + w - 1;
    else
        ans += c / w + w;
    cout << ans << endl;
    //system("pause");
    return 0;
}