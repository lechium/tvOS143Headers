//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MZKeyValueStoreTransaction;

@interface MZKeyValueStoreSerializer : NSObject
{
    MZKeyValueStoreTransaction *_transaction;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001000764fc
@property(retain, nonatomic) MZKeyValueStoreTransaction *transaction; // @synthesize transaction=_transaction;
- (struct MZKeyValueStoreDataVerionPair)objectVersionPairForKey:(id)arg1;	// IMP=0x00000001000762dc
- (id)keys;	// IMP=0x0000000100076188
- (id)dataWithNodes:(id)arg1;	// IMP=0x0000000100076060
- (id)baseDictionary;	// IMP=0x0000000100075f2c
- (_Bool)_isRemoveAllSinceDomainVersion;	// IMP=0x0000000100075eac
- (_Bool)_isGetAllSinceDomainVersionRequest;	// IMP=0x0000000100075e2c
- (id)sinceDomainVersion;	// IMP=0x0000000100075cd8
- (id)payload;	// IMP=0x0000000100075994
- (id)initWithTransaction:(id)arg1;	// IMP=0x000000010007591c

@end
