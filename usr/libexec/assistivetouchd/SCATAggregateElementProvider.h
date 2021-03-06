//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCATElementProvider-Protocol.h"

@class NSMutableOrderedSet, NSOrderedSet, NSString;

@interface SCATAggregateElementProvider : NSObject <SCATElementProvider>
{
    NSMutableOrderedSet *_providers;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001000ad53c
@property(retain, nonatomic) NSMutableOrderedSet *providers; // @synthesize providers=_providers;
@property(readonly, nonatomic) NSOrderedSet *elementProviders;
- (_Bool)containsElement:(id)arg1;	// IMP=0x00000001000ad3c4
- (void)didFinishProvidingElements;	// IMP=0x00000001000ad3c0
- (void)willBeginProvidingElements;	// IMP=0x00000001000ad3bc
- (id)elementAfter:(id)arg1 didWrap:(_Bool *)arg2 options:(int *)arg3;	// IMP=0x00000001000ad1f8
- (id)elementBefore:(id)arg1 didWrap:(_Bool *)arg2 options:(int *)arg3;	// IMP=0x00000001000ad034
- (id)lastElementWithOptions:(int *)arg1;	// IMP=0x00000001000acf60
- (id)firstElementWithOptions:(int *)arg1;	// IMP=0x00000001000ace88
@property(readonly, nonatomic) _Bool providesElements;
- (unsigned long long)_indexOfProviderContainingElement:(id)arg1;	// IMP=0x00000001000acd58
- (unsigned long long)_indexOfProviderBeforeProviderWithIndex:(unsigned long long)arg1 didWrap:(_Bool *)arg2;	// IMP=0x00000001000accd8
- (unsigned long long)_indexOfProviderAfterProviderWithIndex:(unsigned long long)arg1 didWrap:(_Bool *)arg2;	// IMP=0x00000001000acc40
- (void)removeAllProviders;	// IMP=0x00000001000acc00
- (void)removeProvider:(id)arg1;	// IMP=0x00000001000acb94
- (id)addProviderWithElements:(id)arg1 passingTest:(CDUnknownBlockType)arg2;	// IMP=0x00000001000ac980
- (void)addProvider:(id)arg1;	// IMP=0x00000001000ac914
@property(readonly, copy) NSString *description;
- (id)init;	// IMP=0x00000001000ac700

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

