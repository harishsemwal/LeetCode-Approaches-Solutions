class Solution {
public:
    string minRemoveToMakeValid(string s) {
        // Bahut Sunder Approch hai
        // sabse pehli ( ke liyee dekhuga
        // pehli ek stack maintain kerna hai
        stack<int> st;
        for(int i = 0; i < s.size(); i++){
            //ab ye check karunga ki ( kaha per hai pehli
            // kyunki ager suru mai he ) hua to remove kerna hai usko
            if(s[i] == '('){
                st.push(i);
                //dhiyan rakhna hai i he dalna baad mai access bhi kerna hai
            }
            
            if(s[i] == ')'){
                //kahi stack khali to nahi hai 
                if(!st.empty() && s[st.top()] == '('){ // Dekh yaha per acess kiya usko
                    st.pop();
                }
                //ager ) mil gya or us se pehli ( mil gaya tha to hata dena hai
                else {
                    st.push(i);
                }
            }
        }
        //ab mai check karunga jo bhi bacha hua hai na usko string se remove ker deta hu
        while(!st.empty()){
            s.erase(st.top(), 1);
            st.pop();
        }
        return s;
    }
};