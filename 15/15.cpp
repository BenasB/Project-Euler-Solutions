#include <iostream>
#include <queue>

using namespace std;

typedef pair<int, int> pii;
typedef queue<pii> qii;

// NOT FAST ENOUGH

long long lattice(int n)
{
    long long c = 0;
    qii q;
    pii s(0,0);
    pii g(n,n);

    q.push(s);
    while(q.size() != 0)
    {
        pii f = q.front();
        q.pop();

        if (f == g)
        {
            c++;
            continue;
        }

        if (f.first+1 <= n)
        {
            pii t = f;
            t.first++;
            q.push(t);
        }
        if (f.second+1 <= n)
        {
            pii t = f;
            t.second++;
            q.push(t);
        }
    }

    return c;
}

int main()
{
    cout << lattice(20) << endl;
}
