//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "HNDAccessibilityManagerObserver-Protocol.h"

@class NSString;
@protocol SCATElementAutoscrolling;

@interface HNDScannerAutoscroller : NSObject <HNDAccessibilityManagerObserver>
{
    id <SCATElementAutoscrolling> _scrollElement;	// 8 = 0x8
    unsigned long long _scrollDirection;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010005f3e0
@property(nonatomic) unsigned long long scrollDirection; // @synthesize scrollDirection=_scrollDirection;
- (void)accessibilityManager:(id)arg1 didReceiveEvent:(long long)arg2 data:(id)arg3;	// IMP=0x000000010005f3a4
- (void)scrollToTop;	// IMP=0x000000010005f364
- (void)decreaseAutoscrollSpeed;	// IMP=0x000000010005f324
- (void)increaseAutoscrollSpeed;	// IMP=0x000000010005f2e4
- (_Bool)canScrollInDirection:(unsigned long long)arg1;	// IMP=0x000000010005f2dc
- (void)stop;	// IMP=0x000000010005f284
- (void)pause;	// IMP=0x000000010005f244
- (void)resume;	// IMP=0x000000010005f1e8
@property(readonly, nonatomic) _Bool isAutoscrolling;
@property(retain, nonatomic) id <SCATElementAutoscrolling> scrollElement;
- (void)dealloc;	// IMP=0x000000010005f0b0
- (id)init;	// IMP=0x000000010005f018

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

