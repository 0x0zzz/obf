#include <stdlib.h>

void main(int c,char**in){int     d[5];for(c=0         ;c<=4;c++)d      [c]=c+      1;for(
c=0;c<d[1]*d[d[1]];c++)d[0]*=    d[1];char*cs=(      char*)malloc(d[    0]*d[d      [d[1]]
                  ]*d[1])       ;for(c    =0;c<d   [0];c++    )cs[c]=   (char)      c<26?
                d[0]+1+         c:c<52    ?71+c:   c<d[0       ]-d[1]   ?-d[d[     d[1]]]
              +c:(int[          2]){43    ,47}[c   ==d[0       ]-d[1]   ];c=d[    d[d[1]
             ]]-d[1]            *d[1];    while(   in[1]                [c++])   ;d[d[
   d[d[1]]]]=--c;d[d[d[1]]      ]=((d[d[d[d[1]]]   ]+(d[                d[d[d[1]]]]%
   d[d[1]])+1)/d[d[1]])*d[      1]*d[1];char*o=(   char*                )malloc(d[d[d[
        1]]]*d[                 0]/(d[    1]*d[1   ]*d[1                ]));for  (c=0;c<
      d[d[d[1]                  ]];c++    )o[c]=   (char       )(d[0]   -d[d[1    ]]);c=d
    [1]=d[d                     [1]]=0    ;do{d[   3]=d[       4]<3?d   [4]:3;     d[4]-=d
  [3];d[0]                      =0;for    (c=0;c    <d[3];     c++){d   [0]<<=       8;d[0]
|=(int)in[1][d[1]++];}d[0]=d    [0]<<8    *(3-d      [3]);for(c=3;c>2   -d[3];       )o[d[2]
++]=cs[(d[0]>>(c--*6))&63];}    while(    d[4]);      puts(o);free(o    );free        (cs);}