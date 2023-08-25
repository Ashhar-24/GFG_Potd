class Solution {
public:


	int isPalindrome(string S)
	{
		// Your code goes here
		bool check = 0;
		for (int i = 0 ; i < S.size() / 2; i++) {
			if (S[i] != S[S.size() - i - 1]) {check = 1; break;}
		}

		// (check==1) ? return 0 : return 1;
		if (check == 1) return 0;
		else return 1;
	}

};