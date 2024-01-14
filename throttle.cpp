//This is a throttle class as examined in the textbook.
class throttle
{
public:
    void shut_off();
    void shift(int amount);
    double flow() const;
    bool is_on() const;
private:
    int position;
};