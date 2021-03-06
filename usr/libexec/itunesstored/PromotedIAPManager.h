//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PromotedIAPDatabase;

@interface PromotedIAPManager : NSObject
{
    PromotedIAPDatabase *_database;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00000001001bad14
- (void).cxx_destruct;	// IMP=0x00000001001bb594
- (void)removeOverridesForApp:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001bb544
- (void)getInfoInternalForApp:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001bafb8
- (void)setVisibility:(long long)arg1 forIAP:(id)arg2 app:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000001001baf3c
- (void)getVisibilityForIAPs:(id)arg1 app:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001001baed0
- (void)setOrderForIAPs:(id)arg1 app:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001001bae64
- (void)getOrderForIAPsInApp:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001bae14
- (id)init;	// IMP=0x00000001001badb0

@end

