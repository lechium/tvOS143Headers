//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "DMDTaskOperation.h"

@interface DMDFetchAppsOperation : DMDTaskOperation
{
}

+ (void)_fetchAppsForBundleIdentifier:(id)arg1 type:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100048dec
+ (void)fetchAppsForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100048114
+ (id)requiredEntitlements;	// IMP=0x0000000100047ff0
+ (id)whitelistedClassesForRequest;	// IMP=0x0000000100047fb4
- (void)runWithRequest:(id)arg1;	// IMP=0x0000000100047ffc

@end
