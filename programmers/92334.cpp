#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>


using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    vector<int> answer;

    unordered_map<string, int> map;

    for(auto id : id_list){
        map[id] = 0;
    }

    // for( int i=0; i < report.size(); i++){
    for( auto rep : report ){
        int space = rep.find(" ");
        // string id = rep.substr(0, space);
        string r_id = rep.substr(space+1, rep.size()+1);
        map[r_id]+=1;
        if(map[r_id] == -1)
            continue;
        if(map[r_id] >= k){// r_id 정지 먹음
            string report_id = r_id;
            for(auto item : report){
                int space2 = item.find(" ");
                // stirng bingo = item.substr(space2+1, item.size()+1);
                // if(bingo==r_id){
                //     answer;
                // }

            }
        }
        // cout << id << "::" << r_id << ";" << endl;
    }



    return answer;
}


vector<int> solution2(vector<string> id_list, vector<string> report, int k) {
    vector<int> answer;

    unordered_map<string, int> map;

    for(auto id : id_list)
        map[id]=0;

    for(auto id: id_list){
        vector<string> send;// 보내야하는 리스트
        for(auto r_id: report){
            int space = r_id.find(" ");
            string name = r_id.substr(space+1, r_id.size()+1);
            if(id==name){
                map[id] += 1;
                if(map[id] >=k ){
                    map[id] = -1;
                }
            }
        }
    }

    return answer;
}


vector<int> solution3(vector<string> id_list, vector<string> report, int k) {
    vector<int> answer;
    vector<string> answer_string;

    unordered_map<string, vector<string>> map; // <id, <정지 대상리스트>>;
    unordered_map<string, int> map2; // 정지를 위한 맵

    // for( auto id : id_list ){
    //     map2[id]=0;
    // }

    for( auto rep : report ){
        int space = rep.find(" ");
        string rep1 = rep.substr(0, space);
        string rep2 = rep.substr(space+1, rep.size()+1);

        if(find(map[rep2].begin(), map[rep2].end(), rep1) == map[rep2].end()){
            map[rep2].push_back(rep1);// 나중에 중복값 제거해주기
        }else{
            continue;
        }
    }
    // s.erase(unique(s.begin(),s.end()),s.end());


    // for(auto m : map){
    //     if(m.second.size() >= k){
    //         answer.push_back(m.second.size());
    //     }else{
    //         answer.push_back(0);
    //     }
    // }

    for(auto m : map){
        if(m.second.size()>=k){
            for( auto k:m.second ){
                map2[k]+=1;
            }
        }
    }

    // for(auto m: map2){
    //     cout << m.first << "::" << m.second<<endl;
    //     // answer.push_back(m.second);
    // }

    for( auto id : id_list){
        answer.push_back(map2[id]);
    }

    return answer;
}

int main(void) {

    vector<string> id_list = {"muzi", "frodo", "apeach", "neo"};
    vector<string> report = {"muzi frodo","apeach frodo","frodo neo","muzi neo","apeach muzi"};
    int k = 2;

    vector<int> result = solution3(id_list, report, k);
    for(auto item : result){
        cout << item << endl;
    }

    vector<string> id_list2 = {"con", "ryan"};
    vector<string> report2 = {"ryan con", "ryan con", "ryan con", "ryan con"};
    int k2 = 2;

    vector<int> result2 = solution3(id_list2, report2, k2);
    for(auto item : result2){
        cout << item << endl;
    }


    return 0;
}
