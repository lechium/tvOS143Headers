//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FAFetchFamilyPhotoOperationContext-Protocol.h"

@class NSString;

@interface FAFetchFamilyPhotoOperationContext : NSObject <FAFetchFamilyPhotoOperationContext>
{
}

- (id)monogrammerWithStyle:(long long)arg1 diameter:(double)arg2;	// IMP=0x000000010000d0b0
- (void)runFetchFamilyCircleOperation:(id)arg1;	// IMP=0x000000010000d0a0
- (void)runAAFamilyMemberPhotoRequest:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010000d064

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
