//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol NSObject;

@interface ASCDescriber : NSObject
{
    id <NSObject> _object;	// 8 = 0x8
    NSMutableArray *_properties;	// 16 = 0x10
}

+ (id)nilObject;	// IMP=0x000000010000babc
- (void).cxx_destruct;	// IMP=0x000000010000c73c
@property(readonly, nonatomic) NSMutableArray *properties; // @synthesize properties=_properties;
@property(readonly, nonatomic) id <NSObject> object; // @synthesize object=_object;
- (id)description;	// IMP=0x000000010000c610
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010000c480
- (unsigned long long)hash;	// IMP=0x000000010000c3bc
- (id)finalizeDescription;	// IMP=0x000000010000c2fc
- (id)describeProperties;	// IMP=0x000000010000c0d0
- (id)describeObject;	// IMP=0x000000010000c004
- (void)addObject:(id)arg1 withName:(id)arg2;	// IMP=0x000000010000bf04
- (void)addSensitiveObject:(id)arg1 withName:(id)arg2;	// IMP=0x000000010000be84
- (void)addDouble:(double)arg1 withName:(id)arg2;	// IMP=0x000000010000bdf8
- (void)addUInt64:(unsigned long long)arg1 withName:(id)arg2;	// IMP=0x000000010000bd6c
- (void)addInt64:(long long)arg1 withName:(id)arg2;	// IMP=0x000000010000bce0
- (void)addUnsignedInteger:(unsigned long long)arg1 withName:(id)arg2;	// IMP=0x000000010000bc54
- (void)addInteger:(long long)arg1 withName:(id)arg2;	// IMP=0x000000010000bbc8
- (void)addBool:(_Bool)arg1 withName:(id)arg2;	// IMP=0x000000010000bb5c
- (id)initWithObject:(id)arg1;	// IMP=0x000000010000bac8

@end

