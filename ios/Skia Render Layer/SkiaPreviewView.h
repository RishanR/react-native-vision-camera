//
//  SkiaPreviewView.h
//  VisionCamera
//
//  Created by Marc Rousavy on 17.11.22.
//  Copyright © 2022 mrousavy. All rights reserved.
//

#pragma once

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#import "PreviewView.h"
#import "SkiaFrameProcessor.h"

@interface SkiaPreviewView: PreviewView

- (instancetype _Nonnull ) initWithRenderProxy:(SkiaRenderProxy* _Nonnull)renderProxy;

@end
