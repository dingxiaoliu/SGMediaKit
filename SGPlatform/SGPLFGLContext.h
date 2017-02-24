//
//  SGPLFGLContext.h
//  SGMediaKit
//
//  Created by Single on 2017/2/23.
//  Copyright © 2017年 single. All rights reserved.
//

#import <GLKit/GLKit.h>
#import "SGPLFMacro.h"

#if SGPLATFORM_OS_MOBILE

typedef EAGLContext SGPLFGLContext;

#elif SGPLATFORM_OS_MAC

@interface SGPLFGLContext : NSObject

+ (void)setCurrentContext:(SGPLFGLContext *)context;

@end

#endif

SGPLFGLContext * SGPLFGLContext_Alloc_Init();
