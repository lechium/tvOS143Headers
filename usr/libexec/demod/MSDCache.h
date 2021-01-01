//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MSDTargetDevice, NSFileManager, NSMutableDictionary;

@interface MSDCache : NSObject
{
    NSMutableDictionary *_deletionList;	// 8 = 0x8
    NSFileManager *_fileManager;	// 16 = 0x10
    MSDTargetDevice *_device;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x00000001000147c8
- (void).cxx_destruct;	// IMP=0x000000010001571c
@property(retain) MSDTargetDevice *device; // @synthesize device=_device;
@property(retain) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
@property(retain) NSMutableDictionary *deletionList; // @synthesize deletionList=_deletionList;
- (_Bool)deleteDataBlob:(id)arg1;	// IMP=0x0000000100015550
- (id)retrieveDataBlob:(id)arg1;	// IMP=0x00000001000152fc
- (_Bool)storeDataBlob:(id)arg1 withContainerIdentifier:(id)arg2;	// IMP=0x0000000100015080
- (_Bool)moveFile:(id)arg1 toLocation:(id)arg2 fromContainer:(id)arg3 error:(id)arg4;	// IMP=0x0000000100014ef4
- (_Bool)checkIfFileIsInContainer:(id)arg1 container:(id)arg2;	// IMP=0x0000000100014dc8
- (_Bool)deleteContainer:(id)arg1;	// IMP=0x0000000100014c1c
- (_Bool)containerExist:(id)arg1;	// IMP=0x0000000100014b38
- (_Bool)createContainer:(id)arg1;	// IMP=0x0000000100014910
- (id)init;	// IMP=0x0000000100014834

@end
