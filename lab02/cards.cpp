//utilizado compilador online: https://www.onlinegdb.com/online_c++_compiler

#include <cstdio>
#include <set>
#include <algorithm>
using namespace std;
int main(){
 int alice;
 int beatriz;
 while(scanf("%d %d",&alice,&beatriz) && (alice||beatriz)){ 
  int aux1=0,aux2=0;
  set<int> alice1, beatriz1;
  for(int i=0;i<alice;i++){
   int qtd;
   scanf("%d",&qtd);
   alice1.insert(qtd);
  }
  for(int i=0;i<beatriz;i++){
   int qtd;
   scanf("%d",&qtd);
   beatriz1.insert(qtd);
  }
  set<int>::iterator it;
  for(it=alice1.begin();it!=alice1.end();it++) if (!beatriz1.count(*it)) aux1++;
  for(it=beatriz1.begin();it!=beatriz1.end();it++) if (!alice1.count(*it)) aux2++;
  printf("%d\n",min(aux1,aux2));
 }
 return 0;
}