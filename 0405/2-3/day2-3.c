#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(char* name_list[], int name_list_len) {
    int answer = 0;
    for(int i = 0; i < name_list_len; ++i)
        for(int j = 0; name_list[i][j] != 0; ++j)
            if(name_list[i][j] == 'j' || name_list[i][j] == 'k'){
                answer++;
                break;
            }
    return answer;
}

int main(){
	
	char* n_list[]={"james","luke","oliver","jack"};
	int n_listsize=4;
	printf("이름에 j 또는 k가 들어가는 사람 %d 명\n", solution(n_list, n_listsize));
	return 0;
}