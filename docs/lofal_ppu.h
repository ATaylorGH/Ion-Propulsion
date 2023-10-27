#ifndef PPU_H
#define PPU_H

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <assert.h>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class PPU {
public:
    PPU(int max_power, int power_supply_voltage, int power_supply_current, int thrust_voltage, int thrust_current) :
        max_power_(max_power),
        power_supply_voltage_(power_supply_voltage),
        power_supply_current_(power_supply_current),
        thrust_voltage_(thrust_voltage),
        thrust_current_(thrust_current) {
            // Initialize the PPU
        }

    void SetPowerSupplyVoltage(int voltage) {
        power_supply_voltage_ = voltage;
    }

    void SetPowerSupplyCurrent(int current) {
        power_supply_current_ = current;
    }

    void SetThrustVoltage(int voltage) {
        thrust_voltage_ = voltage;
    }

    void SetThrustCurrent(int current) {
        thrust_current_ = current;
    }

    int GetPowerSupplyVoltage() const {
        return power_supply_voltage_;
    }

    int GetPowerSupplyCurrent() const {
        return power_supply_current_;
    }

    int GetThrustVoltage() const {
        return thrust_voltage_;
    }

    int GetThrustCurrent() const {
        return thrust_current_;
    }

    void Update(int power_supply_voltage, int power_supply_current, int thrust_voltage, int thrust_current) {
        power_supply_voltage_ = power_supply_voltage;
        power_supply_current_ = power_supply_current;
        thrust_voltage_ = thrust_voltage;
        thrust_current_ = thrust_current;
    }

    int GetMaxPower() const {
        return max_power_;
    }

    void SetMaxPower(int max_power) {
        max_power_ = max_power;
    }

private:
    int max_power_;
    int power_supply_voltage_;
    int power_supply_current_;
    int thrust_voltage_;
    int thrust_current_;
};

#endif /* PPU_H */
