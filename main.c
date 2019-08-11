#include <stdio.h>
#include <windows.h>

#define speed 1000

typedef struct a{
    int frequency;
}note;

note l[8],m[8],h[8];

void sound(note n, float length){
    Beep(n.frequency,length*speed);
}

int main() {

    printf("Please listen....\n");

    l[0].frequency=0;
    l[1].frequency=262;
    l[2].frequency=294;
    l[3].frequency=330;
    l[4].frequency=349;
    l[5].frequency=392;
    l[6].frequency=440;
    l[7].frequency=494;

    m[0].frequency=0;
    m[1].frequency=523;
    m[2].frequency=587;
    m[3].frequency=659;
    m[4].frequency=698;
    m[5].frequency=784;
    m[6].frequency=880;
    m[7].frequency=988;

    h[0].frequency=0;
    h[1].frequency=1046;
    h[2].frequency=1175;
    h[3].frequency=1318;
    h[4].frequency=1397;
    h[5].frequency=1568;
    h[6].frequency=1760;
    h[7].frequency=1967;

    /*
     *
     * */

    sound(h[3],1);
    sound(m[7],0.5);
    sound(h[1],0.5);
    sound(h[2],0.5);
    sound(h[3],0.25);
    sound(h[2],0.25);
    sound(h[1],0.5);
    sound(m[7],0.5);

    sound(m[6],1);
    sound(m[6],0.5);
    sound(h[1],0.5);
    sound(h[3],1);

    sound(h[2],0.5);
    sound(h[1],0.5);

    sound(m[7],1);
    sound(m[7],0.25);
    sound(m[7],0.25);
    sound(h[1],0.5);
    sound(h[2],1);
    sound(h[3],1);

    sound(h[1],1);
    sound(m[6],1);
    sound(m[6],2);
    sound(m[0],0.5);
    sound(h[2],1);;
    sound(h[2],0.5);
    sound(h[4],0.5);
    sound(h[6],1);
    sound(h[5],0.5);
    sound(h[4],0.5);

    sound(h[3],1);;
    sound(h[3],0.5);
    sound(h[1],0.5);
    sound(h[3],1);
    sound(h[2],0.5);
    sound(h[1],0.5);

    sound(m[7],1);
    sound(m[7],0.25);
    sound(m[7],0.25);
    sound(h[1],0.5);
    sound(h[2],1);
    sound(h[3],1);

    sound(h[1],1);
    sound(m[6],1);
    sound(m[6],2);

    return 0;
}