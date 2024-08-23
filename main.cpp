#include "solution.hpp"
#include "print.hpp"

 int main(){

 	Solutiontwenty solution20;
 	int n=4;
 	vector<vector<int>> roads={{1,2,9},{2,3,6},{2,4,5},{1,4,7}};
 	int output=solution20.minScore(n, roads);
 	printVector2D(roads);
 	cout<<"answer: "<<endl;
 	cout<<output<<endl;

 	return 0;
 }