#include <fenv.h>
#pragma STDC FENV_ACCESS ON
//store original rounding mode
const int original = fegetaround();
//establish new mode
fesetround(FE_TOWARDZERO
// experiment here and restore after
fesetround(original);

/* Now on MSVC you can use _controlfp
rounding mode    C name         MSVC name
-----------------------------------------
to nearest       FE_TONEAREST   _RC_NEAR
toward zero      FE_TOWARDZERO  _RC_CHOP
to +infinity     FE_UPWARD      _RC_UP
to -infinity     FE_DOWNWARD    _RC_DOWN
*/

*/
unisigned int original = _controlfp(0,0);
_controlfp(_RC_CHOP, _MCW_RC);
_controlfp(originalRounding, _MCW_RC):
*/
