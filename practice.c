#include <stdio.h>
 struct Man {
    int x,y;
};

int function(struct Man man){
    man.x = 1000;
    printf("%d",man.x);

}
int main(int argc, char const *argv[])
{   int typedef fuck;
    fuck you=  10;
    printf("%d\n",you);
    struct Man man;
    man.x = 50;
    function(man);
    printf("\n%d",man.x);
    return 0;
}
