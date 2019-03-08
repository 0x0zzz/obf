#include <stdlib.h>
void main(int c,char**in) {int za,ck,ko,bm,an;
ck=1;for(c=0;c<6;c++)ck*=2;char*cs; cs=(char*)
malloc(ck*sizeof(char));for(c=0;c<ck;c++)cs[c]
=(char)c<26?ck+1+c:c<52?71+c:c<ck-2?-4+c:c==ck
-2?47:43;c=0;while(in[1][c++]);an=--c;za=((an+
(an%3)+1)/3)*4; char*o=(char*)malloc(za*sizeof
(char));for(c=0;c<za;)o[c++]=(char)(ck-3);c=0;
za=ck=0;do{ko=an<3?an:3;an-=ko;bm=0;for(c=0;c<
ko;c++){bm<<=8;bm|=(int)in[1][za++];}bm<<=8*(3
-ko);for(c=3;c>=3-ko;){o[ck++]=cs[(bm>>(c--*6)
)&63];}}while(an); puts(o);free(o);free(cs); }
