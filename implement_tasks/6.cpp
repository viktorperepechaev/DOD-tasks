// Как нам запретить вызов operator= от r-value?

struct BigInteger {
  BigInteger& operator=(const BigInteger&);
};