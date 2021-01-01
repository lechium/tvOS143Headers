//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKService.h"

#import "GKUtilityService-Protocol.h"

@class NSString;

@interface GKUtilityService : GKService <GKUtilityService>
{
}

+ (unsigned long long)requiredEntitlements;	// IMP=0x000000010015bbd0
+ (Class)interfaceClass;	// IMP=0x000000010015bbc4
- (oneway void)openGameCenterSettings;	// IMP=0x000000010015d1ec
- (oneway void)deleteCachedImageDataFromSubdirectory:(id)arg1 withFileName:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010015cdac
- (oneway void)loadCachedImageDataFromSubdirectory:(id)arg1 withFileName:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010015ca18
- (oneway void)cacheImageData:(id)arg1 inSubdirectory:(id)arg2 withFileName:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x000000010015c6ec
- (oneway void)requestImageDataForURL:(id)arg1 subdirectory:(id)arg2 fileName:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x000000010015c5ec
- (oneway void)getStoreBagValuesForKeys:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010015be54
- (id)validateEnvironment;	// IMP=0x000000010015bbe0
- (_Bool)requiresAuthentication;	// IMP=0x000000010015bbd8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

