//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexSet;

@interface HBCollectionChange : NSObject
{
    unsigned long long _changeKind;	// 8 = 0x8
    NSIndexSet *_sourceIndexes;	// 16 = 0x10
    NSIndexSet *_destinationIndexes;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000772a8
@property(readonly, copy, nonatomic) NSIndexSet *destinationIndexes; // @synthesize destinationIndexes=_destinationIndexes;
@property(readonly, copy, nonatomic) NSIndexSet *sourceIndexes; // @synthesize sourceIndexes=_sourceIndexes;
@property(readonly, nonatomic) unsigned long long changeKind; // @synthesize changeKind=_changeKind;
- (id)description;	// IMP=0x0000000100077138
- (id)init;	// IMP=0x0000000100077120
- (id)initWithChangeKind:(unsigned long long)arg1 sourceIndexes:(id)arg2 destinationIndexes:(id)arg3;	// IMP=0x0000000100077058

@end

