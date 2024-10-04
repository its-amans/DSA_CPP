  #include <iostream>
    using namespace std;
    int main() {
        // Write C++ code here
        int n;
        int i = 1;
        int sum = 0;
        cout << "Enter the no till which sum is to be find: ";
        cin >> n;
        while (i <= n) {
            if (i % 2 == 0) {
                sum = sum + i;
            }
            i = i + 1;
        }
        cout << "Sum of the even numbers is: " << sum << endl;
        return 0;
    }