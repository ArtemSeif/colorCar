#include "TXLib.h"
#include <stdlib.h>
#include "PepegaLib.h"

int main()
{
    int x, y, i, z, a,siz,random, floors, flats, Speed, PartyMod,carColor;
    bool GO;
    cout <<"Enter number of flats on floor (less than 8), after press ENTER: ";
    cin >> flats;
    cout <<"Enter number of floors (more than 1, less than 7), after press ENTER: ";
    cin >> floors;
    //cout <<"Write number - 1 to start program (else program will not start), after press ENTER: ";
    //cin >>GO;

    GO=true;

    if(flats >= 8) flats=7;
    if(flats <= 0) flats=1;

    if(floors >= 7) floors=6;
    if(floors <= 1) floors=2;

    if(GO & flats<8 & floors<7)
    {
        txCreateWindow (1280,1010);
        txSetFillColor (TX_LIGHTBLUE);
        txSetColor (TX_LIGHTBLUE);
        txRectangle(0, 0, 1024, 200);
        txSetFillColor (TX_GREEN);
        txSetColor (TX_GREEN);
        RECT areaStop = { 1044, 20,1260,100};
        RECT areaRideRight = { 1044, 120,1260,200};
        RECT areaRideLeft = { 1044, 220,1260,300};
        RECT areaRideUp = { 1044, 320,1260,400};
        RECT areaRideDown = { 1044, 420,1260,500};
        RECT areaStart = { 1044, 620,1260,700};

        RECT areaOrange = { 1144, 770,1260,800};
        RECT areaRed = { 1144, 820,1260,850};
        RECT areaPurple = { 1144, 870,1260,900};
        RECT areaYellow = { 1144, 920,1260,950};
        RECT areaBlue = { 1144, 970,1260,1000};

        RECT areaPartyOn = { 1044, 920,1130,1000};
        RECT areaPartyOff = { 1044, 870,1130,900};

        RECT areaStopProgram = { 1044, 770,1130,850};

        PartyMod=0;

        carColor=1;

        txRectangle(0, 200, 1024, 768);
        txSetFillColor (TX_YELLOW);
        txCircle(905, 100, 70);

        y=200;
        x=525;

        for (a=1; a<=6; a++)
        {
            for (i=1; i<=6; i++)
            {
                random = rand() % 2 +1;
                siz

                    =random;
                paintTrees(x,y,siz);
                x=x+65;
            }
            y+=60;
            x=525;
        }
        x=20;
        y=40;
        for (i=1; i<=7; i++)
        {
            Oblake(x,y);
            x=x+160;
            y+=10;
        }
        x=0;
        y=688;
        road(x, y);
        x=30;
        y=120;
        paintblock(x, y, z, floors, flats);//paint home
        x=0;
        y=620;
        paintcar (x,y,carColor);//paint car with choosen color
        Speed=0;
        for (i=1; 1==1; x +=Speed)
        {
            txBegin();
            txSetFillColour(RGB(99, 90, 90));


            paintcar (x,y,carColor);
            txSetFillColor (TX_BLACK);
            txRectangle(1024, 0,1280,1020);



            txSetColour(TX_BLACK);
            txSetFillColour (TX_ORANGE);//Orange mod
            txRectangle(1144, 770,1260,800);

            txSetFillColour (RGB(217, 20, 52));//Red mod
            txRectangle(1144, 820,1260,850);

            txSetFillColour (RGB(127, 19, 235));//Purple mod
            txRectangle(1144, 870,1260,900);

            txSetFillColour (RGB(217, 200, 20));//Yellow mod
            txRectangle( 1144, 920,1260,950);

            txSetFillColour (RGB(7, 26, 237));//Blue mod
            txRectangle( 1144, 970,1260,1000);

            txSetFillColour(TX_GRAY);

            txSelectFont ("Comic Sans MS", 29);

            txRectangle(1044, 20,1260,100);
            txTextOut (1045, 50, "Bus stop");

            txRectangle(1044, 420,1260,500);
            txTextOut (1045, 450, "Bus rides down");

            txRectangle(1044, 320,1260,400);
            txTextOut (1045, 350, "Bus rides up");


            txRectangle(1044, 120,1260,200);
            txTextOut (1045, 150, "Bus rides right");

            txRectangle(1044, 220,1260,300);
            txTextOut (1045, 250, "Bus rides left");

            txSetFillColour(RGB(85, 222, 31));
            txRectangle(1044, 620,1260,700);
            txTextOut (1045, 650, "START");

            txSetFillColour(TX_GRAY);

            txRectangle( 1044, 920,1130,1000);
            txTextOut (1060, 950, "Party!");

            txRectangle(1044, 870,1130,900);
            txTextOut (1060,872, "OFF!");

            txSetFillColour(RGB(232, 23, 23));
            txRectangle(1044, 770,1130,850);
            txTextOut (1047,782, "Stop");
            txTextOut (1047,810, "Program");

            if (x>=1024+1*120)//work with edges
            {
                x=-120*(1+1);
            }
            if (x <= -120-1*120-20*1)
            {
                x = 1024;
            }
            
            txSleep(0);
            if (Speed >=5)
            {
                Speed=5;
            }
            if (Speed <=-3)
            {
                Speed=-3;
            }
            if(GetAsyncKeyState('1'))//stop
            {
                Speed=0;
            }
            if(GetAsyncKeyState(VK_ESCAPE))//stop program
            {
                break;
                return 0;
            }
            if(GetAsyncKeyState('3'))
            {
                y+=1;
            }
            if(GetAsyncKeyState('4'))
            {
                y=y-1;
            }

            if(y==558)
            {
                y=y+1;
            }
            if(y==937)
            {
                y=y-1;
            }
            road(0,685);
            txSetFillColor (TX_GREEN);
            txSetColor (TX_GREEN);
            txRectangle(0, 553, 1024, 608);


            if(txMouseButtons() & 1)
            {
                if (In (txMousePos(), areaStop))
                {
                    Speed=0;
                }
            }

            txRectangle(1044, 120,1260,200);

            if(txMouseButtons() & 1)//start driving
            {
                if (In (txMousePos(), areaRideRight))
                {
                    Speed-=1;
                    Speed+=3;


                }
            }

            if(txMouseButtons() & 1)////driving left
            {
                if (In (txMousePos(), areaRideLeft))
                {
                    Speed-=1;
                }
            }

            if(txMouseButtons() & 1)//driving up
            {
                if (In (txMousePos(), areaRideUp))
                {
                    y-=1;
                }
            }

            if(txMouseButtons() & 1)//driving down
            {
                if (In (txMousePos(), areaRideDown))
                {
                    y+=1;
                }
            }

            if(txMouseButtons() & 1)//start driving
            {
                if (In (txMousePos(), areaStart))
                {
                    Speed-=1;
                    Speed+=3;
                }
            }





            if(txMouseButtons() & 1)//orange mod
            {
                if (In (txMousePos(), areaOrange))
                {
                    carColor=1;
                }
            }

            if(txMouseButtons() & 1)//red mod
            {
                if (In (txMousePos(), areaRed))
                {
                    carColor=2;
                }
            }

            if(txMouseButtons() & 1)//purple mod
            {
                if (In (txMousePos(), areaPurple))
                {
                    carColor=3;
                }
            }

            if(txMouseButtons() & 1)//yellow mod
            {
                if (In (txMousePos(), areaYellow))
                {
                    carColor=4;
                }
            }

            if(txMouseButtons() & 1)//blue mod
            {
                if (In (txMousePos(), areaBlue))
                {
                    carColor=5;
                }
            }

            if(txMouseButtons() & 1)//party mod on
            {
                if (In (txMousePos(), areaPartyOn))
                {
                    PartyMod=1;
                }
            }

            if(txMouseButtons() & 1)//party mod off
            {
                if (In (txMousePos(), areaPartyOff))
                {
                    PartyMod=0;
                }
            }

            if(txMouseButtons() & 1)//stop prograam
            {
                if (In (txMousePos(), areaStopProgram))
                {
                    return 0;
                }
            }

            if(PartyMod==1)//Option of PartyMod
            {
                if (x>=0)
                    carColor=1;
                if (x>=204)
                    carColor=2;
                if (x>=408)
                    carColor=3;
                if (x>=612)
                    carColor=4;
                if (x>=816)
                    carColor=5;
            }




        }


    }

    else
    {
        return 0;
    }

}

