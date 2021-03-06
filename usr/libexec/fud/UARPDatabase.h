//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSUserDefaults;
@protocol OS_os_log;

__attribute__((visibility("hidden")))
@interface UARPDatabase : NSObject
{
    NSUserDefaults *_database;	// 8 = 0x8
    NSObject<OS_os_log> *_log;	// 16 = 0x10
}

+ (id)sharedDatabase;	// IMP=0x0000000100010b38
- (void)dumpToFile:(id)arg1;	// IMP=0x00000001000112b4
- (void)dumpActiveAccessories:(id)arg1;	// IMP=0x0000000100011114
- (id)unarchiveInternalAccessoryData:(id)arg1 forUUID:(id)arg2;	// IMP=0x0000000100011078
- (void)setActiveAccessories:(id)arg1;	// IMP=0x000000010001105c
- (id)activeAccessoryDictionary;	// IMP=0x0000000100011024
- (void)removeAllActiveAccessories;	// IMP=0x0000000100011008
- (void)removeActiveAccessoryForUUID:(id)arg1;	// IMP=0x0000000100010f88
- (void)updateActiveAccessory:(id)arg1;	// IMP=0x0000000100010f28
- (void)addActiveAccessory:(id)arg1;	// IMP=0x0000000100010e24
@property(readonly) NSArray *activeAccessories;
- (void)dealloc;	// IMP=0x0000000100010c50
- (id)init;	// IMP=0x0000000100010b9c

@end

