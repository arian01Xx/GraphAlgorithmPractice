#ifndef SOLUTION_HPP
#define SOLUTION_HPP

#include <iostream>
#include <vector>
#include <queue> 

using namespace std;

 class Solutiontwenty{
 public:
 	int minScore(int n, vector<vector<int>> roads){
 		vector<vector<pair<int,int>>> adj(n+1);
 		//crear lista de adyacencia
 		for(const auto& road: roads){
 			int u=road[0], v=road[1], dist=road[2]; //una forma mas simplificada
 			adj[u].emplace_back(v, dist);
 			adj[v].emplace_back(u, dist);
 		}
 		//inicializar el resultado con el valor grande
 		int result=INT_MAX; //INT_MAX=2147483647 en un sistema de 32 bits

 		//utilizamos BFS o DFS para explorar los caminos
 		vector<bool> visited(n+1, false);
 		queue<int> q;
 		q.push(1);
 		visited[1]=true;

 		while(!q.empty()){
 			int city=q.front();
 			q.pop();
 			//explorar todas las rutas desde la ciudad actual
 			for(const auto& [neighbor, dist]: adj[city]){
 				result=min(result, dist);
 				if(!visited[neighbor]){
 					visited[neighbor]=true;
 					q.push(neighbor);
 				}
 			}
 		}
 		return result;
 	}
 };

 #endif