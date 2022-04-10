class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> s;
        int score = 0;
        int n = ops.size();
        
        for(int i=0;i<n;i++){
            if(ops[i]=="C"){
                s.pop();
            }
            
            else if(ops[i]=="D"){
                int temp = s.top();
                s.push(temp*2);
            }
            
            else if(ops[i]=="+"){
                int a = s.top();
                s.pop();
                int b = s.top();
                int c = a+b;
                s.push(a);
                s.push(c);
            }
            
            else{
                s.push(stoi(ops[i]));
            }
            
        }
        
        while(!s.empty()){
            cout<<s.top()<<" ";
            score+=s.top();
            s.pop();
        }
        cout<<endl;
        
        
        return score;
    }
};