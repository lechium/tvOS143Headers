//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface PBScenePresenter : NSObject
{
    NSMutableDictionary *_scenePresenters;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010018c7d0
@property(readonly, nonatomic, getter=_scenePresenters) NSMutableDictionary *scenePresenters; // @synthesize scenePresenters=_scenePresenters;
- (void)invalidatePresentationForElement:(id)arg1;	// IMP=0x000000010018c178
- (id)snapshotPresentationViewForElement:(id)arg1;	// IMP=0x000000010018bd54
- (id)presentationViewForElement:(id)arg1;	// IMP=0x000000010018b458
- (id)init;	// IMP=0x000000010018b384

@end

