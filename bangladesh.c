// Developer: Minhas Kamal (https://minhaskamal.github.io/)
// Intro- Prints Map of Bangladesh.
// Inspired- http://stackoverflow.com/questions/3533348/how-does-this-code-generate-the-map-of-india

b;char* map="PA@@@@@@@@x#C@@@@@@@x/GF@@@@@@<??N@@@@@@>???@@@@@@<???@@@@@@\
@???@@@@@@@>??A@@@@@@????????AP????????C>????????A?????????@\
>???????O@P???????C@@<??????A@@>?????A@@@?????O@N@@?????O@?@\
@>?????@?A@<?????Q?A@8?????W?C@P???????C@P???????G@P?????]?G\
@P?????>?O@P?????<?O@@????>P?O@@?O>C<P?O@@F@@@@@?O@@@@@@@@?O\
@@@@@@@@<<@@@@@@@@<@@@@@@@@@8A@@@@@@@@@C";

main(a){for(;a=map[b++];b%10?:printf("\n"))for(;a>2;a/=2)printf(a%2?"+":"-");}
