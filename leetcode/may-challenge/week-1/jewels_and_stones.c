int numJewelsInStones(char * J, char * S){
    int ans = 0;
    for (int i = 0; i < strlen(S); ++i) {
        for (int j = 0; j < strlen(J); ++j) {
            if (S[i] == J[j]) {
                ++ans;
            }
        }
    }
    return ans;
}
