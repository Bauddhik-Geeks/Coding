#include <bits/stdc++.h>

using namespace std;

int v, visited_vertices[20], count_ = 1;
int G[20][20], Queue[20], front = 0, rear = -1;

void bfs(int w){
     int j;
     visited_vertices[w] = count_++; // Mark vertex w as visited
     Queue[++rear] = w; // Add w to the Queue

     while(front<=rear){
         printf("%d(%d)\t", Queue[front], visited_vertices[Queue[front]]);
         for(j=1; j<=v; j++)
             if(!visited_vertices[j] && G[Queue[front]][j]==1){  // Add all adjacent vertices of Queue[front] to Queue
                 visited_vertices[j] = count_++;
                 Queue[++rear] = j;
             }
         front++;  // Remove front vertex from Queue after processing it
     }
}
void BFS(){
     int i;
     for(i=1; i<=v; i++)  // Ensures all the vertices are visited
         if(!visited_vertices[i])
            bfs(i);
}

int main(){
    int i, v1, v2, choice, e;
    cout << "Which graph do you want to work with:\n 1.Directed Graph\n 2.Undirected Graph\nEnter you Choice: ";
    cin >> choice;

    if(choice != 1 && choice != 2){
        cout << "Invalid option !!";
        return 0;
    }

    cout << "Enter the number of vertices : ";
    cin >> v;

    cout << "Enter the number of edges : ";
    cin >> e;

    cout << "Enter %d edges one by one : \n" << e;
    for(i=1; i<=e; i++){
        cout << "Edge-%d : " << i;
        cin >> v1 >> v2;
        if(choice == 1)
            G[v1][v2] = 1;  // Directed graph
        else
            G[v1][v2] = G[v2][v1]=1;  // Undirected graph
    }

    cout << "\nOrder of vertices processed:\n";
    BFS();
    cout  << "\n\n";
    return 0;
}
