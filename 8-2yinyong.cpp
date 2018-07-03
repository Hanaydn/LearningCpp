using namespace std;
// M1 
const string& max(const string& a_, const string& b_){
	return a_ > b_ ? a_ : b_;
}

// M2
// copy construct the parameter a_ and b_
string max(string a_, string b_){ 
	return a_ > b_ ? a_ : b_;	
}

// M3
string max(string* a_, string* b_){
	return *a_ > *b_ ? *a_ : *b_;	
}

string a, b;
//M1
max(a, b)
//M2
max(a, b)
//M3
max(&a, &b)

1. Performance, 性能
  M1 > M3 > M2
2. Readability，可读性 
  M1 = M2 > M3
