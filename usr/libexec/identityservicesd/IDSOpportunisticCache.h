//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDSFrequentURISuggester, IDSKeychainWrapper, NSMutableDictionary;

@interface IDSOpportunisticCache : NSObject
{
    NSMutableDictionary *_keychainCache;	// 8 = 0x8
    long long _accessCount;	// 16 = 0x10
    IDSKeychainWrapper *_keychainWrapper;	// 24 = 0x18
    IDSFrequentURISuggester *_uriSuggester;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010000c234
@property(retain, nonatomic) IDSFrequentURISuggester *uriSuggester; // @synthesize uriSuggester=_uriSuggester;
@property(retain, nonatomic) IDSKeychainWrapper *keychainWrapper; // @synthesize keychainWrapper=_keychainWrapper;
@property(nonatomic) long long accessCount; // @synthesize accessCount=_accessCount;
@property(retain, nonatomic) NSMutableDictionary *keychainCache; // @synthesize keychainCache=_keychainCache;
- (id)description;	// IMP=0x000000010000c01c
- (id)dataForService:(id)arg1 identifier:(id)arg2;	// IMP=0x000000010000bd84
- (id)selectDataForDestination:(id)arg1;	// IMP=0x000000010000b318
- (void)selectServicesForKeychainCacheFromDictionary:(id)arg1;	// IMP=0x000000010000b16c
- (void)limitDataInDictionary:(id)arg1 forService:(id)arg2;	// IMP=0x000000010000ac8c
- (void)mergeKeychainCacheDataIntoDictionary:(id)arg1 forService:(id)arg2;	// IMP=0x000000010000a8d0
- (void)mergeKeychainCacheIntoDictionary:(id)arg1;	// IMP=0x000000010000a70c
- (void)syncCacheWithKeychain;	// IMP=0x000000010000a63c
- (_Bool)removeDataWithIdentifier:(id)arg1 serviceName:(id)arg2 withError:(id *)arg3;	// IMP=0x000000010000a450
- (_Bool)addData:(id)arg1 withError:(id *)arg2;	// IMP=0x0000000100009cc4
- (_Bool)clearKeychainWithError:(id *)arg1;	// IMP=0x0000000100009b54
- (void)copyCacheWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100009704
- (_Bool)saveOpportunisticCache:(id)arg1 withError:(id *)arg2;	// IMP=0x000000010000945c
- (id)fetchOpportunisticCacheWithError:(id *)arg1;	// IMP=0x0000000100008ffc
- (id)initWithKeychainWrapper:(id)arg1 uriSuggester:(id)arg2;	// IMP=0x0000000100008eb0
- (id)init;	// IMP=0x0000000100008df0

@end

