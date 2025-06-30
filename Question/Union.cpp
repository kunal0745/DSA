#include<iostream>
#include<vector>
#include<set>

using namespace std;

set <int> UnionArray(vector<int> a, vector<int> b){
    int s1 = a.size();
    int s2 = b.size();
    set <int> st;
    for(int i = 0; i<s1; i++){
        st.insert(a[i]);
    }

    for(int i = 0; i<s2; i++){
        st.insert(b[i]);
    }
    return st;
}

vector <int> UnionArray1(vector<int> a, vector<int> b){
    int s1 = a.size();
    int s2 = b.size();
    vector <int> temp;

    int i = 0;
    int j = 0;

    while(i < s1 && j < s2){
        if(a[i] <= b[j]){
            if(temp.size() == 0 || temp.back()!= a[i]){
                temp.push_back(a[i]);
            }
            i++;
        }
        else{
            if(temp.size() == 0 || temp.back()!= b[j]){
                    temp.push_back(b[j]);
            }     
            j++;
        }
    }

    while(i < s1){
        if(temp.size() == 0 || temp.back()!= a[i]){
            temp.push_back(a[i]);
        }
        i++;

    }

    while(j < s2){
        if(temp.size() == 0 || temp.back()!= b[j]){
            temp.push_back(b[j]);
        }
        j++;

    }
    return temp;
}
int main(){
    vector <int> n1 = {1,2,3,4,5};
    vector <int> n2 ={7,8,9};

    // set < int > Union = UnionArray(n1,n2);
    // cout << "Union of n1 and n2 is  " << endl;
    // for (auto & val: Union)
    // cout << val << " ";

    vector <int> union1 = UnionArray1(n1,n2);
    cout << "Union of n1 and n2 is  " << endl;
    for(auto &val : union1){
        cout << val << " ";
    }
}