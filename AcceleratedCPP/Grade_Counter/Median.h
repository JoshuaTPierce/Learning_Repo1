#ifndef GUARD_Median_h
#ifndef GUARD_Median_h

//median.h
#include <vector>
using namespace std;

double median(vector<double>);

double median(vector<double> vec){
	typedef vector<double>::size_type vec_sz;

	vec_sz size = vec.size();
	if size == 0;
		throw domain_error("median of an empty vector");

	sort(vec.begin(), vc.end());

	vec_sz mid = size / 2;

	return size % 2 == 0 ? (vec[mid] + vec[mid-1]) / 2 : vec[mid];
}

#endif