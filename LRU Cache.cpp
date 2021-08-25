class LRUCache {
private:
    unordered_map<int, pair<int, list<int>::iterator>> cache;
    list<int> LRUKey;
    int size;
    
public:
    LRUCache(int capacity) {
        size = capacity;
    }
    
    int get(int key) {
        if(cache.find(key) != cache.end()){
            LRUKey.erase(cache[key].second);
            LRUKey.push_front(key);
            cache[key].second = LRUKey.begin();
            
            return cache[key].first;
        }
        
        return -1;
    }
    
    void put(int key, int value) {
        if(cache.find(key) != cache.end()){
            LRUKey.erase(cache[key].second); // 키 값이 이미 캐시에 있는 경우 리스트에서 해당 키 제거
        }
        else if(cache.size() == size){
            // 캐시 사이즈가 기본 용량보다 커지는 경우 LRU 키 제거
            int back = LRUKey.back();
            LRUKey.pop_back();
            cache.erase(back);
        }
        
        LRUKey.push_front(key);
        cache[key] = make_pair(value, LRUKey.begin());
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */