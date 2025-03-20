#include<iostream>
#include<string>
#include<stack>
using namespace std;


int main() {
	string str;


	while (true) {
		stack<char>Stack; //대괄호, 소괄호 스택
		
		getline(cin, str, '.');

		if (str == "\n") {
			return 0;
		}
		
		bool is_balanced = true;
		for (int i = 0; i < str.size(); i++) {
			//괄호가 아니면 continue
			if (str[i] != '(' && str[i] != '[' && str[i] != ']' && str[i] != ')')
				continue;

			//여는 괄호일 때 각 스택에 넣기
			if (str[i] == '(' || str[i]=='[') Stack.push(str[i]);

			//스택이 비었는데 닫힌 괄호가 나오면 break;
			else if (str[i] == ')') {
				if (Stack.empty() || Stack.top()!='(') {
					is_balanced = false;
					break;
					}
				Stack.pop();
			}

			else if (str[i] == ']') {
				if (Stack.empty() || Stack.top()!='[') {
					is_balanced = false;
					break;
				}
				Stack.pop();
			}


			
		}
		if (Stack.empty() && is_balanced)
			cout << "yes"<<endl;
		else
			cout << "no" << endl;
	}
	
	return 0;
}