#include <iostream>
#include <vector>
using namespace std;

bool checkch(vector<int> ch, int n, int k)
{
  for (int i = 0; i < n; i++)
  {
    if (ch[i] == k)
    {
      return true;
    }
  }
  return false;
}

void outputv(vector<int> a, int n)
{
  cout << "vec output" << endl;
  for (int i = 0; i < n; i++)
  {
    cout << a[i] << endl;
  }
}

int main()
{
  while (1)
  {
    int n, m;
    cin >> n >> m;
    if (n == 0 && m == 0)
    {
      break;
    }
    int a[n], w[m];
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
      cin >> w[i];
    }
    vector<int> ch;
    ch.push_back(w[0]);
    int chnum = 1;
    for (int i = 1; i < m; i++)
    {
      if (checkch(ch, chnum, w[i]))
      {
        continue;
      }
      int tmp = chnum;
      for (int j = 0; j < tmp; j++)
      {
        if (!checkch(ch, tmp, w[i] + ch[j]))
        {
          ch.push_back(w[i] + ch[j]);
          chnum++;
        }
        if (!checkch(ch, tmp, abs(w[i] - ch[j])))
        {
          ch.push_back(abs(w[i] - ch[j]));
          chnum++;
        }
      }
      ch.push_back(w[i]);
      chnum++;
    }
    //outputv(ch, chnum);
    vector<int> noc;
    int nocnum = 0;
    for (int i = 0; i < n; i++)
    {
      if (!checkch(ch, chnum, a[i]))
      {
        noc.push_back(a[i]);
        nocnum++;
      }
    }
    //outputv(noc, nocnum);
    if (nocnum == 0)
    {
      cout << 0 << endl;
      continue;
    }
    int ans = -1;
    for (int i = 1; i <= 1e9; i++)
    {
      if (checkch(ch, chnum, i))
      {
        continue;
      }
      vector<int> tv;
      tv.push_back(i);
      int tvnum = 1;
      for (int j = 0; j < chnum; j++)
      {
        if (!checkch(ch, chnum, i + ch[j]))
        {
          tv.push_back(i + ch[j]);
          tvnum++;
        }
        if (!checkch(ch, chnum, abs(i - ch[j])))
        {
          tv.push_back(abs(i - ch[j]));
          tvnum++;
        }
      }
      bool flag = true;
      for (int j = 0; j < nocnum; j++)
      {
        if (!checkch(tv, tvnum, noc[j]))
        {
          flag = false;
          break;
        }
      }
      if (flag)
      {
        ans = i;
        //outputv(tv, tvnum);
        break;
      }
    }
    cout << ans << endl;
  }

  return 0;
}