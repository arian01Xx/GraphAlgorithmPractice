#ifndef PRINT_HPP
#define PRINT_HPP

#include <iostream>
#include <vector>
#include <queue> 

using namespace std;


 void printVector2D(vector<vector<int>> n){
 	cout<<"print Graph: "<<endl;
 	for(int i=0; i<n.size(); i++){
 		for(int j=0; j<n[i].size(); j++){
 			cout<<n[i][j]<<" ";
 		}
 		cout<<endl;
 	}
 	cout<<endl;
 }

#endif