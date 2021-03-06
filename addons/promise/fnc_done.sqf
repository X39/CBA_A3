/* ----------------------------------------------------------------------------
Function: CBA_fnc_promise_done

Description:
    Checks if a given promise was processed yet.

Parameters:
    _promiseHandle - Handle returned by CBA_fnc_promise_create <ARRAY>

Returns:
    Boolean, true if it is done yet, false if it is not. <BOOL>

Example:
    (begin example)
        _promiseHandle call CBA_fnc_promise_done;
    (end)

Author:
    X39
---------------------------------------------------------------------------- */
#include "script_component.hpp"
params ["_index", "_stamp"];
private _promise = GVAR(requests) select 0;
_promise isEqualTo 0 || {_promise select 2 != _stamp}
