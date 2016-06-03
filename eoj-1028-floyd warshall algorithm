//reference: http://blog.csdn.net/kld1412/article/details/51509780
//http://www.acm.cs.ecnu.edu.cn/problem.php?problemid=1028
// 目标地址和源地址两者之间的最短通信时间以及对应的最短路径
// using char* in map
// 当路由器收到一个终端或者其它路由器发过来的报文时，它必须选项择最快的一条通信线路通向报文所指向的目标机器（目标机器可能是一个终端，也可能是另一个路由器）。众所周知，在两个路由器之间可能有多条通信线路，你的任务就是给出两个路由器之间最短通信时间。
// 每一个路由器都有一个IP来标识它自己，这个标识是唯一的。任意两点之间的通信时间单位是毫秒。每条通信线路都是全双工的(双向的)。

// Input 

// 第一行为两个整数n和m，n表示有多少个路由器，m表示有多少条通信线路。(2<=n<=100,1<=m<=1000)
// 接下去的m行用来描述路由器之间的线路。每行包括三个元素，两个路由器的IP地址和它们之间通信所花费的时间。
// 然后一行是一个整数t，表示有多少个报文。(1<=t<=1000)
// 接下去的t行是报文。每个报文占一行，为了简化问题，我们在每行中给出两个IP地址，分别是目标地址和源地址。你要做的就是求出两者之间的最短时间。

// Output 

// 对于每个报文，输出一行。每行只包含一个整数，表示报文给的两个IP地址之间的最短通信时间。如果不存在这样的通路，或者IP地址并不存在，则输出-1。

// Sample Input 

// 4 5
// 168.120.1.1 168.120.1.2 15
// 168.120.1.1 168.120.1.4 47
// 168.120.1.1 168.120.1.3 10
// 168.120.1.2 168.120.1.4 15
// 168.120.1.3 168.120.1.4 25
// 3
// 168.120.1.1 168.120.1.4
// 168.120.1.3 168.120.1.4
// 168.120.1.3 202.12.12.12

// Sample Output 

// 30
// 25
// -1



#include <iostream>
#include <stdio.h>
#include <map>
#include <string.h>
#include <limits.h>
#include <math.h>

using namespace std;
#define MAXN 105
#define INF 1e5

int dis[MAXN][MAXN];
int path[MAXN][MAXN];
map<string, int> mp;

void Folyd(int n)
{
    for(int k = 0; k < n; k++)
    {
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(dis[i][j] > dis[i][k] + dis[k][j])
                {
                    dis[i][j] = dis[i][k] + dis[k][j];
                    path[i][j] = path[k][j];
                }
            }
        }
    }
}

void print_path(int u, int v)
{
    while(u != v)
    {
        for(map<string, int>::iterator it = mp.begin(); it != mp.end(); ++it)
            if(it->second == v)//在map中找到value为v的key输出
            {
                cout<<it->first<<" <-- ";
                break;
            }
        v = path[u][v];//依次向前索引一个顶点
    }
    for(map<string, int>::iterator it = mp.begin(); it != mp.end(); ++it)
        if(it->second == u)//在map中找到value为u的key输出
            cout<<it->first<<endl;
}

void init(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            path[i][j] = i;
            dis[i][j] = ( i != j )? INF : 0;
        }
    }
}


int main()
{
    int n, m;
    while(scanf("%d%d", &n, &m) != EOF)
    {
        init(n);
        mp.clear();
        for(int i = 0, j = 0; i < m; i++)
        {
            char ip1[MAXN], ip2[MAXN];
            int cost;
            scanf("%s%s%d",ip1, ip2, &cost);
            if(mp.find(ip1) == mp.end() )
            {
                mp[ip1]=j++;
            }
            if(mp.find(ip2) == mp.end() )
            {
                mp[ip2]=j++;
            }

            int idx1 = mp[ip1];
            int idx2 = mp[ip2];
            dis[idx1] [idx2] = cost;
            dis[idx2] [idx1] = cost;
        }
        Folyd(n);
        int t;
        scanf("%d", &t);
        while(t--)
        {
            char ip1[MAXN], ip2[MAXN];
            scanf("%s%s",ip1,ip2);
            if(mp.find(ip1) == mp.end() || mp.find(ip2) == mp.end() || dis[ mp[ip1] ] [ mp[ip2] ] >= INF)
            {
                printf("-1\n");
                continue;
            }
            printf("%d\n", dis[ mp[ip1] ] [ mp[ip2] ]);
            print_path( mp[ip1], mp[ip2]);
        }

    }
    return 0;
}
