class Point{
    private:
        double x,y;
    public:
        void setCoordinates(double x,double y);
        double distanceFrom(const Point &anotherPoint) const;
};