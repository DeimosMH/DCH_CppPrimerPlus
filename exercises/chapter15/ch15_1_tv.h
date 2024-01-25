// tv.h -- Tv and Remote classes
#ifndef TV_H_
#define TV_H_

class Remote; // a. Make them mutual friends. -----------------
class Tv
{
public:
    friend class Remote; // Remote can access Tv private parts
    enum
    {
        Off,
        On
    };
    enum
    {
        MinVal,
        MaxVal = 20
    };
    enum
    {
        Antenna,
        Cable
    };
    enum
    {
        TV,
        DVD
    };
    Tv(int s = Off, int mc = 125) : state(s), volume(5),
                                    maxchannel(mc), channel(2), mode(Cable), input(TV) {}
    void onoff() { state = (state == On) ? Off : On; }
    bool ison() const { return state == On; }
    bool volup();
    bool voldown();
    void chanup();
    void chandown();
    void set_mode() { mode = (mode == Antenna) ? Cable : Antenna; }
    void set_input() { input = (input == TV) ? DVD : TV; }
    void settings() const;              // display all settings
    void all_settings(Remote &r) const; // display all settings, including remote // b.

    // d. Provide the Tv class with a method for toggling the new Remote member.
    // This method should work only if the TV is in the on state.

    void change_mode(Remote &r);

private:
    int state;      // on or off
    int volume;     // assumed to be digitized
    int maxchannel; // maximum number of channels
    int channel;    // current channel setting
    int mode;       // broadcast or cable
    int input;      // TV or DVD
};

class Remote
{
    friend class Tv; // a. Make them mutual friends. -----------------
private:
    int mode; // controls TV or DVD
    bool state_mode;

    enum
    {
        NORMAL_MODE,
        INTERACTIVE_MODE
    };

public:
    Remote(int m = Tv::TV, bool s = NORMAL_MODE) : mode(m), state_mode(s) {}
    bool volup(Tv &t) { return t.volup(); }
    bool voldown(Tv &t) { return t.voldown(); }
    void onoff(Tv &t) { t.onoff(); }
    void chanup(Tv &t) { t.chanup(); }
    void chandown(Tv &t) { t.chandown(); }
    void set_chan(Tv &t, int c) { t.channel = c; }
    void set_mode(Tv &t) { t.set_mode(); }
    void set_input(Tv &t) { t.set_input(); }

    // b. Add a state variable member to the Remote class that describes whether the
    // remote control is in normal or interactive mode
    // void change_mode() { state_mode = (state_mode == NORMAL_MODE) ? INTERACTIVE_MODE : NORMAL_MODE; }
    void change_mode() { state_mode ^= 1; } // the same but XOR

    // c. Add a Remote method that displays the mode.
    void display_mode()
    {
        std::cout << "\n"
                  << (state_mode == NORMAL_MODE ? "Normal mode" : "Interactive mode");
    }
};
#endif