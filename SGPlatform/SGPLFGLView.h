//
//  SGPLFGLView.h
//  SGMediaKit
//
//  Created by Single on 2017/2/23.
//  Copyright © 2017年 single. All rights reserved.
//

#import <GLKit/GLKit.h>
#import "SGPLFMacro.h"
#import "SGPLFGLContext.h"

#if SGPLATFORM_OS_MOBILE

typedef GLKView SGPLFGLView;

@protocol SGPLFGLViewDelegate <GLKViewDelegate>

@end

#elif SGPLATFORM_OS_MAC

@protocol SGPLFGLViewDelegate <NSObject>

- (void)glkView:(SGPLFGLView *)view drawInRect:(CGRect)rect;

@end

@interface SGPLFGLView : NSView

@property (nonatomic, strong) SGPLFGLContext * context;

@end

#endif
