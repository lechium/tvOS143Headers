//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BSDescriptionProviding-Protocol.h"

@class NSString;

@interface HBTopShelfObject : NSObject <BSDescriptionProviding>
{
    NSString *_identifier;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100063d40
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000100063cc4
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000100063bf4
- (id)succinctDescriptionBuilder;	// IMP=0x0000000100063b18
- (id)succinctDescription;	// IMP=0x0000000100063ac4
@property(readonly, copy) NSString *description;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2;	// IMP=0x00000001000639f4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

