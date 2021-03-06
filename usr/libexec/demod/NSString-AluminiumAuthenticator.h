//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (AluminiumAuthenticator)
+ (id)restoreSystemContainerUUIDPathsInDict:(id)arg1;	// IMP=0x0000000100023108
- (id)_dataUsingHexEncoding;	// IMP=0x0000000100019c0c
- (id)_stringForHMAC;	// IMP=0x0000000100019ba0
- (id)lookupSystemContainerPathUUID;	// IMP=0x0000000100023748
- (id)getSystemContainerRootPath;	// IMP=0x00000001000236c0
- (_Bool)isSystemContainerShared;	// IMP=0x0000000100023644
- (_Bool)isSystemContainerPath;	// IMP=0x0000000100023584
@property(readonly, getter=getSystemContainerKeyword) NSString *sysContainerID;
- (_Bool)higherVersionThan:(id)arg1;	// IMP=0x000000010002a2b8
- (_Bool)lowerVersionThan:(id)arg1;	// IMP=0x000000010002a290

// Remaining properties
@property(readonly, getter=getSystemContainerKeyword) NSString *sysContainerUUID;
@end

