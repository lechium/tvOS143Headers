//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MTResultsController.h"

@class MTPlayerItem, NSArray;

@interface MTChapterResultsController : MTResultsController
{
    MTPlayerItem *_currentItem;	// 8 = 0x8
    NSArray *_chapters;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100112eb0
@property(retain, nonatomic) NSArray *chapters; // @synthesize chapters=_chapters;
@property(retain, nonatomic) MTPlayerItem *currentItem; // @synthesize currentItem=_currentItem;
- (void)didLoadChapters;	// IMP=0x0000000100112afc
- (id)allObjects;	// IMP=0x0000000100112af0
- (unsigned long long)numberOfObjectsInSection:(unsigned long long)arg1;	// IMP=0x0000000100112aa4
- (id)indexPathForObject:(id)arg1;	// IMP=0x0000000100112a18
- (id)objectAtIndexPath:(id)arg1;	// IMP=0x0000000100112980
- (void)reloadData;	// IMP=0x000000010011276c
- (void)dealloc;	// IMP=0x00000001001126f4
- (id)init;	// IMP=0x00000001001125ec

@end

