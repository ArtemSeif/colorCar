void paintblock(int x, int y, int z, int n, int k)
{
    for (int i=1; i<=n; i++)
    {
        for (z=1; z<=k; z++)
        {
            txSetFillColor (TX_ORANGE);
            txSetColor (TX_BLACK);
            txRectangle(x, y, x+60, y+70);
            txSetFillColor (TX_LIGHTBLUE);
            txRectangle(x+20, y+15, x+40, y+45);
            txLine(x+30, y+15, x+30, y+45);
            txLine(x+20, y+30, x+30, y+30);
            x+=60;
        }
        x=30;
        y+=70;
    }
}
void paintcar(int x, int y, int carColor)
{




    txSetColour (TX_BLACK);
    if(carColor==1)
        txSetFillColour (TX_ORANGE);
    else if(carColor==2)
        txSetFillColour (RGB(217, 20, 52));
    else if(carColor==3)
        txSetFillColour (RGB(127, 19, 235));
    else if(carColor==4)
        txSetFillColour (RGB(217, 200, 20));
    else if(carColor==5)
        txSetFillColour (RGB(7, 26, 237));

    txRectangle (x,y,x+120,y+50);

    if(carColor==1)
        txSetFillColour(RGB(235, 111, 16));
    else if(carColor==2)
        txSetFillColour (RGB(130, 21, 21));
    else if(carColor==3)
        txSetFillColour (RGB(75, 25, 125));
    else if(carColor==4)
        txSetFillColour (RGB(179, 143, 54));
    else if(carColor==5)
        txSetFillColour (RGB(41, 61, 140));


    txRectangle (x+73,y-3,x+89,y);
    txSetFillColour(TX_GRAY);
    txRectangle (x,y-5,x+120,y+1);
    txSetFillColour (RGB(16, 176, 235));
    txRectangle (x+75,y+17,x+87,y+31);
    txSetFillColour(TX_BLACK);
    txCircle (x+20, y+50, 14);
    txCircle (x+100, y+50, 14);
    txCircle (x+20, y+50, 3);
    txCircle (x+100, y+50, 3);
    txSetFillColour(TX_WHITE);
    txCircle (x+20, y+50, 8);
    txCircle (x+100, y+50, 8);
    txSetFillColour(TX_BLACK);
    txCircle (x+20, y+50, 4);
    txCircle (x+100, y+50, 4);
    txSetFillColour (RGB(16, 176, 235));
    txRectangle (x+5,y+10,x+35,y+33);
    txRectangle (x+40,y+10,x+70,y+33);
    txRectangle (x+110,y+10,x+120,y+33);
    txSetFillColour(RGB(234, 255, 0));
    txRectangle (x+115,y+40,x+120,y+45);
    txSetColour(TX_BLACK);
    txSetFillColour(TX_WHITE);
    txCircle (x+55, y+21, 9);
    txSetFillColour(TX_BLACK);
    txCircle (x+58, y+19, 2);
    txCircle (x+52, y+19, 2);
    txRectangle (x+50,y+24,x+60,y+26);

}
void tree (int x,int y)
{
    txSetFillColor (TX_LIGHTGREEN);
    txSetColor (RGB (0, 0, 0), 5);
    txLine (x,y,x,y+80);
    txSetColor (RGB ( 0, 255, 128), 5);
    txCircle (x,y-10,25);
    txCircle (x-25,y,25);
    txCircle (x+20,y-10,25);
    txSetColor (RGB (0, 0, 0), 5);
    txLine (x,y+60,x+20,y+40);
}
void paintTrees(int x, int y, int siz)
{
    int randomc;
    randomc = rand() % 3;
    switch(randomc)
    {
    case 0:
        txSetColor (TX_LIGHTGREEN);
        txSetFillColor (TX_LIGHTGREEN);
        break;
    case 1:
        txSetColor (TX_RED);
        txSetFillColor (TX_RED);
        break;
    case 2:
        txSetColor (TX_YELLOW);
        txSetFillColor (TX_YELLOW);
        break;

    }
    txCircle (x, y, 15*siz);
    randomc = rand() % 3;
    switch(randomc)
    {
    case 0:
        txSetColor (TX_LIGHTGREEN);
        txSetFillColor (TX_LIGHTGREEN);
        break;
    case 1:
        txSetColor (TX_RED);
        txSetFillColor (TX_RED);
        break;
    case 2:
        txSetColor (TX_YELLOW);
        txSetFillColor (TX_YELLOW);
        break;

    }
    txCircle (x+7, y+5, 15*siz);
    randomc = rand() % 3;
    switch(randomc)
    {
    case 0:
        txSetColor (TX_LIGHTGREEN);
        txSetFillColor (TX_LIGHTGREEN);
        break;
    case 1:
        txSetColor (TX_RED);
        txSetFillColor (TX_RED);
        break;
    case 2:
        txSetColor (TX_YELLOW);
        txSetFillColor (TX_YELLOW);
        break;

    }
    txCircle (x-7, y+10, 15*siz);
    txSetColor (TX_BROWN, 5);
    txLine(x, y, x, y+50);
    txLine(x, y+20, x+10, y+5);
    txLine(x, y+30, x-10, y+10);
}
void road (int x, int y)
{
    txSetFillColour(RGB(99, 90, 90));
    txSetColour(RGB(99, 90, 90));
    txRectangle(0, 608, 1024, 1020);
    txSetFillColour(TX_WHITE);
    for (int i=1; i<=7; i++)
    {
        txRectangle (x+10, y+10, x+120, y+20);
        txRectangle (x+10, y+108, x+120, y+118);
        txRectangle (x+10, y+206, x+120, y+216);
        x+=145;
    }
}
void Oblake(int x, int y)
{
    txSetFillColour(TX_WHITE);
    txSetColor(TX_WHITE);
    txCircle (x+35, y+15, 22);
    txCircle (x-5, y+12.5, 17);
    txCircle (x-40, y+13.5, 15);
    txCircle (x+15, y, 30);
}
