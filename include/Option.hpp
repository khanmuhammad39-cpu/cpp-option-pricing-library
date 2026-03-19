// header file is used for declarations only

#pragma once
// dont incluse this header more than once, useful for large projects

enum class OptionType{
  Call,
  Put,
};

class Option{
public:
  Option (double strike, double maturity, OptionType type);
  double getStrike() const; // const because the function promises not to change/modify the object
  double getMaturity() const;
  OptionType getType() const;
private: // encapsulation the class protects these variables to be modified outside the class
  double strike_;
  double maturity_; // underscore is just a naming convention telling us these are private members
  OptionType type_;
};

