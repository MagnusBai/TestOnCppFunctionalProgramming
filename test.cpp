#include <iostream>
#include <functional>

using namespace std;

// template <typename T>
// T changeData(T& data) {
float changeData(float& data) {
	return data+data;
}

template <typename T>
void runFunctionWithData(T& data, function<T (T&)> func) {
// void runFunctionWithData(float& data, function<float (float&)> func) {
	T res = func(data);
	cout << res << endl;
}

int main() {

	float a = 5.5f;
	// runFunctionWithData<float>(a, &changeData);
	runFunctionWithData<float>(a, changeData);

	return 0;
}

// ref1. https://www.google.com.hk/?gws_rd=ssl#q=c%2B%2B+passing+function+as+parameter
// ref2. http://www.cplusplus.com/reference/functional/
// ref3. http://en.cppreference.com/w/cpp/utility/functional/function
