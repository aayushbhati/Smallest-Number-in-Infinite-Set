class SmallestInfiniteSet {
public:
set<int>mp;
int curr=1;
    SmallestInfiniteSet() {
        
    }
    
    int popSmallest() {
        int mini;
        if(!mp.empty()){
        mini=*mp.begin();
        mp.erase(mini);
        }
        else{
            mini=curr;
            curr++;
        }
        return mini;
    }
    
    void addBack(int num) {
        if(num<curr && mp.find(num)==mp.end()){
        mp.insert(num);
        }
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */
