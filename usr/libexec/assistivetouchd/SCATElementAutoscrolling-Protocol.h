//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCATElement-Protocol.h"

@protocol SCATElementAutoscrolling;

@protocol SCATElementAutoscrolling <SCATElement>
@property(readonly, nonatomic) _Bool scatIsAutoscrolling;
@property(retain, nonatomic) id <SCATElementAutoscrolling> scatAutoscrollTarget;
- (void)scatScrollToTop;
- (void)scatDecreaseAutoscrollSpeed;
- (void)scatIncreaseAutoscrollSpeed;
- (void)scatPauseAutoscrolling;
- (void)scatAutoscrollInDirection:(unsigned long long)arg1;
@end
