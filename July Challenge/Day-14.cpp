double angleClock(int hour, int minutes) {
        float h=(hour*30)+minutes*0.5;
        //float h=((hourminutes%360)*0.5);
        int m=minutes*6;
        float angle=abs(h-m);
        if(angle>180)
            angle=360-angle;
        return angle;
    }
};
