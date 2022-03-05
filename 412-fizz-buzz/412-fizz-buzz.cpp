class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> game = {};
        for(int i=1;i<=n;i++){
            if(i%5==0 && i%3==0)
                    game.push_back("FizzBuzz");
            else if(i%3==0){
                    game.push_back("Fizz");
            }
            else if(i%5==0){
                game.push_back("Buzz");
            }
            else{
                string ch = to_string(i);
                game.push_back(ch);
            }
        }
        return game;
    }
};