class LFUCache {
    int capacity, minFreq;

    unordered_map<int, pair<int,int>> keyValFreq;
    unordered_map<int, list<int>> freqList;
    unordered_map<int, list<int>::iterator> keyIter;

public:
    LFUCache(int capacity) {
        this->capacity = capacity;
        minFreq = 0;
    }

    int get(int key) {

        if(keyValFreq.find(key) == keyValFreq.end())
            return -1;

        int value = keyValFreq[key].first;
        int freq = keyValFreq[key].second;

        freqList[freq].erase(keyIter[key]);

        if(freqList[freq].empty()) {
            freqList.erase(freq);

            if(minFreq == freq)
                minFreq++;
        }

        freq++;

        keyValFreq[key].second = freq;

        freqList[freq].push_front(key);
        keyIter[key] = freqList[freq].begin();

        return value;
    }

    void put(int key, int value) {

        if(capacity == 0)
            return;

        if(keyValFreq.find(key) != keyValFreq.end()) {

            keyValFreq[key].first = value;
            get(key);
            return;
        }

        if(keyValFreq.size() == capacity) {

            int evictKey = freqList[minFreq].back();

            freqList[minFreq].pop_back();

            if(freqList[minFreq].empty())
                freqList.erase(minFreq);

            keyValFreq.erase(evictKey);
            keyIter.erase(evictKey);
        }

        keyValFreq[key] = {value, 1};

        freqList[1].push_front(key);
        keyIter[key] = freqList[1].begin();

        minFreq = 1;
    }
};