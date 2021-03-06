/****************************************************************************
Copyright (c) 2013 cocos2d-x.org

http://www.cocos2d-x.org

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/

#ifndef __CCDECORATIVEDISPLAY_H__
#define __CCDECORATIVEDISPLAY_H__

#include "cocostudio/CCArmatureDefine.h"
#include "cocostudio/CCDisplayFactory.h"
#include "cocostudio/CCDatas.h"


#if ENABLE_PHYSICS_BOX2D_DETECT || ENABLE_PHYSICS_CHIPMUNK_DETECT
#include "cocostudio/CCColliderDetector.h"
#endif

namespace cocostudio {

class  DecorativeDisplay: public cocos2d::Object
{
public:
    static DecorativeDisplay *create();
public:
	/**
     * @js ctor
     */
    DecorativeDisplay(void);
    /**
     * @js NA
     * @lua NA
     */
    ~DecorativeDisplay(void);

    virtual bool init();

protected:

    CC_SYNTHESIZE_RETAIN(cocos2d::Node *, _display, Display);
    CC_SYNTHESIZE_RETAIN(DisplayData *, _displayData, DisplayData);

#if ENABLE_PHYSICS_BOX2D_DETECT || ENABLE_PHYSICS_CHIPMUNK_DETECT
    CC_SYNTHESIZE_RETAIN(ColliderDetector *, _colliderDetector, ColliderDetector);
#endif
};

}

#endif /*__CCDECORATIVEDISPLAY_H__*/
