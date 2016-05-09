//refference:http://www.cppblog.com/coreBugZJ/archive/2012/03/04/167136.aspx?opt=admin
//http://www.geeksforgeeks.org/greedy-algorithms-set-5-prims-minimum-spanning-tree-mst-2/
//Greedy Algorithms | Set 5 (Prim’s Minimmin_indexm Spanning Tree (MST))
#include <stdio.h>
#include <math.h>

#define  V  1005

int n, x[ V ], y[ V ];
double  graph[ V ][ V ];

//// A utility function to print the constructed MST stored in parent[]
//int printMST(int parent[], int n, int graph[V][V])
//{
//    printf("Edge   Weight\n");
//    for (int i = 1; i < V; i++)
//        printf("%d - %d    %d \n", parent[i], i, graph[i][parent[i]]);
//}

double primMST()
{
    double INF = 1e100;
    //int parent[V]; // Array to store constrmin_indexcted MST
    double ans = 0; // the smin_indexm of MST paths
    double key[ V ]; // Key valmin_indexes min_indexsed to pick minimmin_indexm weight edge in cmin_indext
    bool mstSet[ V ]; // To represent set of vertices not yet inclmin_indexded in MST
    int min_index; // the index of vertex with minimmin_indexm weight
    for (int i = 1; i <= n; ++i )
    {
        key[ i ] = INF; //Initialize all keys as INFINITE
        mstSet[ i ]  = false; // not in MST
    }
    // Always inclmin_indexde first 1st vertex(start) in MST.
    key[1] = 0;     // Make key 0 so that this vertex is picked as first vertex
    //parent[1] = -1; // First node is always root of MST
    // The MST will have V vertices
    for (int i = 1; i <= n; ++i)
    {
        //fmin_indexnction begin
        double min = INF;
        for (int v = 1; v <= n; ++v )
        {
            if ( (mstSet[ v ]==false) && (key[v] < min) )
            {
                min = key[ v ];
                min_index = v;
            }
        }// fmin_indexnction end, a fmin_indexnction to find the vertex with minimmin_indexm key valmin_indexe, from
        // the set of vertices not yet inclmin_indexded in MST
        ans += min; // add the minimmin_indexm key valmin_indexe
        mstSet[ min_index ] = true; // Add the picked vertex to the MST Set
        // Update key valmin_indexe and parent index of the adjacent vertices of
        // the picked vertex. Consider only those vertices which are not yet
        // inclmin_indexded in MST
        for (int v = 1; v <= n; ++v )
        {
            // graph[min_index][v] is non zero only for adjacent vertices of m
            // mstSet[v] is false for vertices not yet inclmin_indexded in MST
            // Update the key only if graph[min_index][v] is smaller than key[v]
            if (mstSet[v] == false && graph[min_index][v] <  key[v])
            {
                //parent[v]  = min_index;
                key[v] = graph[min_index][v];
            }
        }
    }
//    printf("Edge   Weight\n");
//    for (int i = 1; i <= n; i++)
//    {
//        printf("%d - %d    %d \n", parent[i], i, graph[i][parent[i]]);
//    }
    return ans;
}

int main()
{
    int k;
    scanf( "%d%d", &n, &k);
    for(int i = 1; i <= n; ++i)
    {

        scanf( "%d%d", &x[i], &y[i] );
    }
    for(int i = 1; i < n; ++i )
    {
        for (int v = i; v <= n; ++v )
        {
            graph[ i ][ v ] = graph[ v ][ i ] =sqrt( (double)(x[i]-x[v]) * (x[i]-x[v]) + (double)(y[i]-y[v]) * (y[i]-y[v])  );
        }
    }
    while (k-- )
    {
        int a, b;
        scanf( "%d%d", &a, &b);
        graph[ a ][ b ] = graph[ b ][ a ] = 0;
    }
    printf( "%0.2lf\n", primMST() );
    return 0;
}
