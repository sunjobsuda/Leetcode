bool backspaceCompare(char* S, char* T) {
    int i, j, size_S, size_T;
    size_S = strlen(S);
    size_T = strlen(T);
    
    char* S_res = (char *)malloc(sizeof(char) * size_S);
    char* T_res = (char *)malloc(sizeof(char) * size_T);
    for(i = 0, j = 0;i < size_S;i++){
        if(S[i]=='#'){
            j = j==0?0:j-1;
        }else{
            S_res[j++] = S[i];
        }
    }
    S_res[j] = '\0';
    
    for(i = 0, j = 0;i < size_T;i++){
        if(T[i]=='#'){
            j = j==0?0:j-1;
        }else{
            T_res[j++] = T[i];
        }
    }
    T_res[j] = '\0';
    printf("%s,%s", S_res, T_res);
    return !strcmp(S_res, T_res);
}