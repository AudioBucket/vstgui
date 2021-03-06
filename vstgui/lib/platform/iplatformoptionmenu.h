// This file is part of VSTGUI. It is subject to the license terms 
// in the LICENSE file found in the top-level directory of this
// distribution and at http://github.com/steinbergmedia/vstgui/LICENSE

#ifndef __iplatformoptionmenu__
#define __iplatformoptionmenu__

/// @cond ignore

#include "../vstguifwd.h"

namespace VSTGUI {

//-----------------------------------------------------------------------------
struct PlatformOptionMenuResult
{
	COptionMenu* menu;
	int32_t index;
};

//-----------------------------------------------------------------------------
class IPlatformOptionMenu : public AtomicReferenceCounted
{
public:
	using Callback = std::function<void (COptionMenu* optionMenu, PlatformOptionMenuResult result)>;
	virtual void popup (COptionMenu* optionMenu, const Callback& callback) = 0;
};

} // namespace

/// @endcond

#endif // __iplatformtextedit__
