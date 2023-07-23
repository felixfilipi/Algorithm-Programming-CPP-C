#include<iostream>
#include<algorithm>
#include<vector>
#include<sstream>
#include<list>
#include<string>

int deretHuruf(std::vector<std::string> deret) {
    // Write your code here
    std::vector<std::vector<std::string>>input_query;
    for(auto d : deret){
        std::string word;
        std::vector<std::string> tmp_str;
        std::stringstream ss(d);
        while(!ss.eof()){
            getline(ss, word, ' ');
            tmp_str.push_back(word);
        }
        input_query.push_back(tmp_str);
    }

    
    std::vector<std::vector<std::string>> str_res;
    for(auto query : input_query){

    //         init insert vector of str 
        if(str_res.empty() && query[0] == "+"){
            std::vector<std::string>tmp;
            for(int i = 0; i < std::stoi(query[2]); i++){
                tmp.push_back(query[1]);
            }
            str_res.push_back(tmp);
            continue;
        }
//         if add
        if(query[0] == "+" && !str_res.empty()){

//             find missing id
            int missing_idx = -1;
            for(int i = 0; i < str_res.size(); i++){
                
                // calculate missing_size;
                int missing_size = 0;
                for(auto str : str_res[i]){
                    if(str == "-"){
                        missing_size++;
                    }
                }
//                 check missing query
                if((missing_size != 0) && (missing_size >= std::stoi(query[2]))){
                    missing_idx = i;
                    break;
                }
            }
            
//             when missing idx founded
            if(missing_idx != -1){

                int empty_idx;
                // change value of - to query input;
                for(int x = 0; x < str_res[missing_idx].size(); x++){
                  if(str_res[missing_idx][x] == "-"){
                      empty_idx = x;
                      break;
                  }
                }

                for(int y = 0; y < std::stoi(query[2]); y++){
                  if(str_res[missing_idx][empty_idx + y] == "-"){
                      str_res[missing_idx][empty_idx + y] = query[1];
                  }
                }

//             when no missing idx
            }else{
//                 input new vector
                std::vector<std::string>tmp;
                for(int d = 0; d < std::stoi(query[2]); d++){
                    tmp.push_back(query[1]);
                }
                str_res.push_back(tmp);                    
            }

//             if substraction
        }else if(query[0] == "-"){
//             Find the idx of same char with the query
            int idx = 0;
            for(int x = 0; x < str_res.size(); x++){
                if(str_res[x][0] == query[1]){
                    idx = x;
                    break;
                }
            }

//             swap the value to empty
            int size_idx = 0;
            for(int t = 0; t < str_res[idx].size(); t++){
              if(str_res[idx][t] != "-"){
                size_idx++;
              }
            }

            // if size more than 0, minus 1, because vector start from index 0
            if(size_idx > 0){
              size_idx--;
            }

            for(int i = 0; i < std::stoi(query[2]); i++){
                str_res[idx][size_idx] = "-";
                size_idx--;
            };
        }

        for(int t = 0; t < str_res.size(); t++){
            for(auto ts : str_res[t]){
                std::cout << ts;
            }
        }
        std::cout << std::endl;
    }

    
  int size = 0;
  for(int i = 0; i < str_res.size(); i++){
      size += str_res[i].size();
  }

  return size;
}

int main(){
  std::vector<std::string> inp{
    "+ A 6", 
    "+ B 8", 
    "+ C 4", 
    "- B 8", 
    "+ D 6", 
    "+ E 4", 
    "- A 6", 
    "+ F 5", 
    "+ G 4", 
    "- F 5", 
    "+ H 4", 
    "+ I 4", 
    "+ J 2"};
  int res = deretHuruf(inp);
  std::cout << "Result = " << res << std::endl;
  return 0;
}
