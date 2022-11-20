//#include <iostream>
//#include <unordered_map>
//#include <vector>
//#include <list>
//
//namespace cache
//{
//    template <typename key_t, typename value_t>
//    class lru_cache{
//    public:
//        typedef typename std::pair<key_t, value_t> key_value_pair_t;
//        typedef typename std::list<key_value_pair_t>::iterator list_iterator_t;
//        explicit lru_cache(size_t size): max_size(size){}
//        void put(const key_t& key, const value_t& val)
//        {
//            auto it = cache_hast_t.find(key);
//            cache_list_t.push_front(key_value_pair_t(key, val));
//            if (it != cache_hast_t.end())
//            {
//                cache_hast_t.erase(key);
//                cache_list_t.erase(it);
//            }
//            cache_hast_t[key] = cache_list_t.begin();
//            if (cache_hast_t.size() > max_size)
//            {
//                auto last = cache_list_t.end();
//                last--;
//                cache_hast_t.erase(last->first);
//                cache_list_t.pop_back();
//            }
//        }
//        const value_t& get(const key_t& key)
//        {
//            auto it = cache_hast_t.find(key);
//            if (it == cache_hast_t.end())
//            {
//                throw std::range_error("Not key in hash");
//            }
//            else{
//                 cache_list_t.splice(cache_list_t.begin(), cache_list_t, it->second);
//                 return it->second.second;
//            }
//
//        }
//
//    private:
//        std::list <key_value_pair_t> cache_list_t;
//        std::unordered_map<key_t, key_value_pair_t> cache_hast_t;
//        size_t max_size;
//    };
//
//}
// CPP program to illustrate the
// list::splice() function

/**
 *    author:  tourist
 *    created: 20.11.2022 19:36:59
**/
#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif
void function()
{
    long long  a = 4;
}
void function_lef()
{
    std::cout << "geteer";
}
template <typename T>
T inverse(T a, T m) {
    T u = 0, v = 1;
    std::cout << "hell" << std::endl;
    while (a != 0) {
        T t = m / a;
        std::cout <<"help" << std::endl;
        m -= t * a; swap(a, m);
        u -= t * v; swap(u, v);
    }
    assert(m == 1);
    return u;
}

int main() {
    std::cout << inverse(213,1233) << std::endl;
    return 0;
}