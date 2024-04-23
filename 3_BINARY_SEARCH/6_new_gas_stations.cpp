int countStations(vector<int> arr, double m){
	int reqStations = 0;
	for(int i=1; i<arr.size(); i++){
		double dist = arr[i] - arr[i-1];
		if(dist > m){
			int newStations = ceil(dist/m) - 1;
			reqStations+= newStations;
		}
	}
	return reqStations;
}

double minimiseMaxDistance(vector<int> &arr, int k){
	double s = 0;
	double e = 0;
	for(int i=1; i<arr.size(); i++){
		e = max(e, double(arr[i] - arr[i-1])); 
	}
	long double diff = 1e-6 ;
	while(abs(e-s) > diff){
		double m = (s+e)/2.0;
		if(countStations(arr, m) > k){
			s = m;
		}
		else{
			e = m;
		}
	}
	return e;
}
