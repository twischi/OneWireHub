// 0x05  Single adress switch @@@
// work

#ifndef ONEWIRE_DS2405_H
#define ONEWIRE_DS2405_H

class DS2405 : public OneWireItem
{
private:
    static constexpr bool    dbg_sensor  = 0; // give debug messages for this sensor

    bool pin_state;

    bool duty(OneWireHub *hub);

public:
    static constexpr uint8_t family_code = 0x05;

    DS2405(uint8_t ID1, uint8_t ID2, uint8_t ID3, uint8_t ID4, uint8_t ID5, uint8_t ID6, uint8_t ID7);

    bool readState(void)
    {
        return pin_state;
    };
    void setState(const bool value)
    {
        pin_state = value;
    };
};

#endif