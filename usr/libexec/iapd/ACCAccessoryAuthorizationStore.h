//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUserDefaults;

@interface ACCAccessoryAuthorizationStore : NSObject
{
    NSUserDefaults *_userDefaults;	// 8 = 0x8
}

+ (id)authorizationEntryForCertSerial:(id)arg1 withAccessoryDict:(id)arg2;	// IMP=0x00000001000eaa4c
+ (id)authorizationEntryForCertSerial:(id)arg1;	// IMP=0x00000001000ea92c
+ (_Bool)removeAccessory:(id)arg1;	// IMP=0x00000001000ea714
+ (_Bool)storeAccessory:(id)arg1;	// IMP=0x00000001000ea3b4
+ (id)storedCertSerialStrings;	// IMP=0x00000001000ea19c
+ (id)storedAccessories;	// IMP=0x00000001000e9ec8
+ (id)sharedStore;	// IMP=0x00000001000e9e2c
- (void).cxx_destruct;	// IMP=0x00000001000eab98
@property(retain, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
- (void)knownAccessoriesDidChange:(id)arg1;	// IMP=0x00000001000e9e28
- (void)dealloc;	// IMP=0x00000001000e9db0
- (id)init;	// IMP=0x00000001000e9c60

@end

