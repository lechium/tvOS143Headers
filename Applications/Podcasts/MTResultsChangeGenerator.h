//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MTResultsChangeGeneratorDelegate;

@interface MTResultsChangeGenerator : NSObject
{
    id <MTResultsChangeGeneratorDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100150328
@property(nonatomic) __weak id <MTResultsChangeGeneratorDelegate> delegate; // @synthesize delegate=_delegate;
- (id)unbox:(id)arg1;	// IMP=0x00000001001502f4
- (id)box:(id)arg1;	// IMP=0x00000001001502a0
- (id)closestIndexPathToRow:(unsigned long long)arg1 forIndexPaths:(id)arg2;	// IMP=0x000000010015013c
- (void)removeIndexPath:(id)arg1 forObject:(id)arg2 fromMap:(id)arg3;	// IMP=0x000000010015005c
- (id)bestIndexPathForObject:(id)arg1 atIndex:(unsigned long long)arg2 fromMap:(id)arg3 autoremove:(_Bool)arg4;	// IMP=0x000000010014fef0
- (id)bestIndexPathForObject:(id)arg1 atIndex:(unsigned long long)arg2 fromMap:(id)arg3;	// IMP=0x000000010014fe80
- (id)objectsToIndexPathDictionary:(id)arg1 inSection:(unsigned long long)arg2;	// IMP=0x000000010014fcac
- (void)generateChangesForExistingObjects:(id)arg1 newObjects:(id)arg2 inSection:(unsigned long long)arg3;	// IMP=0x000000010014f6fc
- (id)initWithDelegate:(id)arg1;	// IMP=0x000000010014f688

@end

