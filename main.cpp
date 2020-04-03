#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n,m, times;

int main() {
    scanf("%d",&times );
    for (int i = 0; i <= times; ++i) {
        int ziff;
        scanf("%d", &ziff);

        vector<int> zifs;
        int mehtods = 0;
        for (int j = 0; j <= ziff; ++j) {
            int a;
            scanf("%d", &a);
            zifs.push_back(a);
        }
        sort(zifs.begin(), zifs.end());
        int last = 0;
        for (auto b = zifs.begin();b != zifs.end()  ; b++) {
            if(*b = last+1){
                zifs.erase(b)
                ;
            }else{
                printf("0");
            }
        }

        for (auto b = zifs.begin();b != zifs.end()  ; b++) {
            if(*b = last+1){
                zifs.erase(b)
                ;
            }else{
                printf("0");
            }
        }

        }


    return 0;
}


// 3 3 1 2 2



