class ParkingSystem {
public:
    ParkingSystem(int big, int medium, int small) {
        vol[1] = big;
        vol[2] = medium;
        vol[3] = small;
        cur[1] = 0;
        cur[2] = 0;
        cur[3] = 0;
    }
    
    bool addCar(int carType) {
        if (cur[carType] < vol[carType]) {
            ++cur[carType];
            return true;
        }
        return false;
    }
private:
    map<int,int> vol;
    map<int,int> cur;
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */