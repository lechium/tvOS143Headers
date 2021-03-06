//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSManagedObjectContext, NSMutableArray, NSMutableSet, NSPredicate, NSString;

@interface MTEntityUpdaterCache : NSObject
{
    NSArray *_properties;	// 8 = 0x8
    NSMutableArray *_objectsByProperty;	// 16 = 0x10
    NSArray *_propertiesToFetch;	// 24 = 0x18
    NSManagedObjectContext *_ctx;	// 32 = 0x20
    NSPredicate *_predicate;	// 40 = 0x28
    NSMutableSet *_unvisited;	// 48 = 0x30
    NSString *_entityName;	// 56 = 0x38
    CDUnknownBlockType _allowKeyForValue;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000010008e9cc
@property(copy, nonatomic) CDUnknownBlockType allowKeyForValue; // @synthesize allowKeyForValue=_allowKeyForValue;
- (void)enumerateUnvisitedItemUuids:(CDUnknownBlockType)arg1;	// IMP=0x000000010008e86c
- (void)_addDictionary:(id)arg1;	// IMP=0x000000010008e754
- (void)addEntityToCache:(id)arg1;	// IMP=0x000000010008e704
- (void)_buildMap;	// IMP=0x000000010008e46c
- (id)propertyDictionaryForSearchItem:(id)arg1;	// IMP=0x000000010008e2c0
- (id)initWithPredicate:(id)arg1 entityName:(id)arg2 ctx:(id)arg3 properties:(id)arg4 fetchProperties:(id)arg5;	// IMP=0x000000010008e190

@end

