//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIImage, UIView;

@protocol MPVideoPushAnimatedTransitioningDelegate <NSObject>
- (void)onPushAnimatedTransitionBegin;
- (void)onPushAnimatedTransitionFinish;
- (UIView *)pushAnimatedTransitionContentViewForFading;
- (struct CGRect)pushAnimatedTransitionOriginRect;
- (struct CGRect)pushAnimatedTransitionTargetRect;
- (UIImage *)pushAnimatedTransitionThumbImage;
- (double)pushAnimatedTransitionVideoAspectRatio;
@end
