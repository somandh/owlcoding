#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int>ve{100};
	ve.push_back(10);
	ve.push_back(20);
	ve.pop_back();

	ve.emplace_back(40);//it will push faster then push_box
	//auto it=ve.begin();
	//auto it=ve.end();
	//auto it=ve.rbegin();
	//auto it=ve.rend();
	//ve.erase(it+1);
	cout<<"it";
}
