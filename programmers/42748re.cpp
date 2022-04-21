#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {

    vector<int> result;

    for(int i=0; i<commands.size(); i++){
        vector<int> temp = array;
        sort(temp.begin()+commands[i][0]-1, temp.begin()+commands[i][1]);
        result.push_back(temp[commands[i][0]+commands[i][2]-2]);
    }
    
    return result;
}

int main(void)
{
    vector<int> array = {1, 5, 2, 6, 3, 7, 4};
    vector<vector<int>> commands = {{2, 5, 3}, {4,4,1}, {1,7,3}};

    vector<int> result = solution(array, commands);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    

    return 0;
}
