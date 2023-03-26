/*#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    // create a map that maps an ip address to its corresponding server name
    map<string, string> serverMap;
    for (int i = 0; i < n; i++)
    {
        string name, ip;
        cin >> name >> ip;
        serverMap[ip] = name;
    }
    for (int i = 0; i < n; i++)
    {
        cout << serverMap[ip];
    }
    // iterate through each command in the configuration file and append the corresponding server name
    /*for (int i = 0; i < m; i++)
    {
        string command, ip;
        cin >> command >> ip;
        cout << "server map : ";
        cout << serverMap[ip] << endl;
        string name = serverMap[ip];
        cout << command << " " << ip << " #" << name << endl;
    }

return 0;
}
*/
/*
#include <iostream>
#include <string>
#include <unordered_map>

int main()
{
  int n, m;
  std::cin >> n >> m;

  // Read the server information and store it in a map
  std::unordered_map<std::string, std::string> servers;
  for (int i = 0; i < n; i++)
  {
      std::string name, ip;
      std::cin >> name >> ip;
      servers[ip] = name;
  }

  // Process the commands and replace the ip with the corresponding name
  for (int i = 0; i < m; i++)
  {
      std::string line;
      std::cin >> line;
      std::string command = line.substr(0, line.find_first_of(' '));
      std::string ip = line.substr(line.find_first_of(' ') + 1);
      std::string name = servers[ip];
      std::cout << command << ' ' << ip << "; #" << name << '\n';
  }

  return 0;
}*/
#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    map<string, string> mpair, npair;
    string f, s;
    int m, n;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> f >> s;
        npair.insert({s, f});
    }
    for (int j = 0; j < m; j++)
    {
        cin >> f >> s;
        int x = s.size() - 1;
        s.erase(s.begin() + x); // erased the ;(Semicolon) from the end of the string
        mpair.insert({f, s});   // find the key value from the map
        auto it = npair.find(s);
        cout << f << " " << s << ";"
             << " #" << it->second << "\n";
    }
    return 0;
}
