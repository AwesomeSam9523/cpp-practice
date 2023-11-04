int checkNumber(string str, bool initial) {
	// initial = first is 0
	int counter = 0;
	int times = 0;
	for (int i = 0; i < str.size(); i++) {
		char ch = str[i];
		if (initial) {
			if (counter % 2 == 0) {
				// should be 0
				if (ch != '0') {
					// cout << "t ch not 0" << endl;
					times++;
				}
			} else {
				// should be 1
				if (ch != '1') {
					// cout << "t ch not 1" << endl;
					times++;
				}
			}
		} else {
			if (counter % 2 == 0) {
				// should be 1
				if (ch != '1') {
					// cout << "f ch not 1" << endl;
					times++;
				}
			} else {
				// should be 0
				if (ch != '0') {
					// cout << "f ch not 0" << endl;
					times++;
				}
			}
		}
		counter++;
	}

	return times;
}

int makeBeautiful(string str) {
	int one = checkNumber(str, true);
	int two = checkNumber(str, false);

	// cout << one << " " << two << endl;
	if (one >= two) {
		return two;
	} else {
		return one;
	}
}