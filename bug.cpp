std::vector<int> vec; 
for (int i = 0; i < 10; ++i) {
 vec.push_back(i); 
 vec.erase(vec.begin());
}
