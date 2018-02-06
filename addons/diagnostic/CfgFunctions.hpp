// -----------------------------------------------------------------------------
// Automatically generated by 'functions_config.rb'
// DO NOT MANUALLY EDIT THIS FILE!
// -----------------------------------------------------------------------------

class CfgFunctions
{
    class CBA
    {
        class Diagnostic
        {
            // CBA_fnc_debug
            class debug
            {
                description = "General Purpose Debug Message Writer";
                file = "\x\cba\addons\diagnostic\fnc_debug.sqf";
            };
            // CBA_fnc_error
            class error
            {
                description = "Logs an error message to the RPT log.";
                file = "\x\cba\addons\diagnostic\fnc_error.sqf";
            };
            // CBA_fnc_log
            class log
            {
                description = "Logs a message to the RPT log.";
                file = "\x\cba\addons\diagnostic\fnc_log.sqf";
            };
            // CBA_fnc_test
            class test
            {
                description = "Runs unit tests for an addon or component.";
                file = "\x\cba\addons\diagnostic\fnc_test.sqf";
            };
        };
        class ProjectileTracking
        {
            // CBA_fnc_addUnitTrackProjectiles
            class addUnitTrackProjectiles
            {
                description = "Adds projectile tracking to a given unit or vehicle.";
                file = "\x\cba\addons\diagnostic\fnc_addUnitTrackProjectiles.sqf";
            };
            // CBA_fnc_removeUnitTrackProjectiles
            class removeUnitTrackProjectiles
            {
                description = "Removes projectile tracking from a given unit or vehicle.";
                file = "\x\cba\addons\diagnostic\fnc_removeUnitTrackProjectiles.sqf";
            };
        };
    };
    class A3 {
        class Debug {
            class isDebugConsoleAllowed {
                file = PATHTOF(fnc_isDebugConsoleAllowed.sqf);
            };
        };
    };
};
