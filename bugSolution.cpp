std::deque<int> deque; 
for (int i = 0; i < 10; ++i) {
 deque.push_back(i);
 deque.pop_front();
}
//or
std::vector<int> vec;
for (int i = 0; i < 10; ++i) {
 vec.push_back(i);
}
vec.erase(vec.begin(), vec.begin() + (vec.size() - 1));