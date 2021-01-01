//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AMSHashable-Protocol.h"

@class AMSDRefreshMultiUserOptions, NSArray, NSString;

@interface AMSDRefreshMultiUserResult : NSObject <AMSHashable>
{
    _Bool _enabledThrottling;	// 8 = 0x8
    _Bool _scheduled;	// 9 = 0x9
    NSArray *_errors;	// 16 = 0x10
    NSArray *_homes;	// 24 = 0x18
    AMSDRefreshMultiUserOptions *_options;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010002a0d8
@property(nonatomic, getter=isScheduled) _Bool scheduled; // @synthesize scheduled=_scheduled;
@property(retain, nonatomic) AMSDRefreshMultiUserOptions *options; // @synthesize options=_options;
@property(retain, nonatomic) NSArray *homes; // @synthesize homes=_homes;
@property(retain, nonatomic) NSArray *errors; // @synthesize errors=_errors;
@property(readonly, nonatomic) NSString *hashedDescription;
@property(nonatomic) _Bool enabledThrottling; // @synthesize enabledThrottling=_enabledThrottling;
- (id)initWithHomes:(id)arg1 options:(id)arg2;	// IMP=0x0000000100029d50

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

