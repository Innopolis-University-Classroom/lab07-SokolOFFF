

template <typename T>
public class Calculator {
private:
    T num1, num2;

public:
    Calculator(T n1, T n2) {
        num1 = n1;
        num2 = n2;
    }

	int add() { return n1 + n2;  }
	int subtract() { return n1 - n2; }
	int multiply() { return n1 * n2; }
	int divide() { return n1 / n2; }
};















