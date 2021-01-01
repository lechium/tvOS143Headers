//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (sysContainerPath)
+ (id)restoreSystemContainerUUIDPathsInDict:(id)arg1;	// IMP=0x00000001000139b8
- (id)lookupSystemContainerPathUUID;	// IMP=0x0000000100013ff8
- (id)getSystemContainerRootPath;	// IMP=0x0000000100013f70
- (_Bool)isSystemContainerShared;	// IMP=0x0000000100013ef4
- (_Bool)isSystemContainerPath;	// IMP=0x0000000100013e34
@property(readonly, getter=getSystemContainerKeyword) NSString *sysContainerID;

// Remaining properties
@property(readonly, getter=getSystemContainerKeyword) NSString *sysContainerUUID;
@end

