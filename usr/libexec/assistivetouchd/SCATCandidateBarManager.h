//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCATSimpleElementManager.h"

@class NSArray;
@protocol SCATCandidateBarManagerDelegate;

@interface SCATCandidateBarManager : SCATSimpleElementManager
{
    id <SCATCandidateBarManagerDelegate> _delegate;	// 8 = 0x8
    NSArray *_typingCandidates;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000499e4
@property(retain, nonatomic) NSArray *typingCandidates; // @synthesize typingCandidates=_typingCandidates;
@property(nonatomic) __weak id <SCATCandidateBarManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didFetchElements:(id)arg1 foundNewElements:(_Bool)arg2 currentFocusContext:(id)arg3 didChangeActiveElementManager:(_Bool)arg4;	// IMP=0x0000000100049898
- (_Bool)handleInputAction:(long long)arg1 withElement:(id)arg2;	// IMP=0x0000000100049804
- (void)driver:(id)arg1 willFocusOnContext:(id)arg2;	// IMP=0x00000001000496ac
- (id)allElements;	// IMP=0x00000001000496a0
- (_Bool)canBeActiveElementManager;	// IMP=0x0000000100049664

@end
