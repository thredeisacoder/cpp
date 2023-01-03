#include <bits/stdc++.h>
#include <vector>

using namespace std;

int sumOfVector(vector<int> v)
{
	int res = 0;
	for (int i = 0; i < v.size(); i++)
	{
		res += v.at(i);
	}
	return res;
}

int main(){
    vector<int> v;
    for(int i = 0; i < 5; i++){
        v.push_back(i);
    }
    return 0;
}