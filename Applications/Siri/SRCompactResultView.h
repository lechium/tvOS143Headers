//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SRSiriStackableContent-Protocol.h"
#import "SiriUIContentPlatterViewDelegate-Protocol.h"
#import "SiriUIDarkening-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSArray, NSString, SRSiriViewStackConstraints, SiriUIContentPlatterView, SiriUIPanDismissalGestureRecognizer, UIButton;
@protocol SRCompactResultViewDelegate, SRSiriStackableContentDelegate;

@interface SRCompactResultView : UIView <SiriUIContentPlatterViewDelegate, UIScrollViewDelegate, SRSiriStackableContent, SiriUIDarkening>
{
    _Bool _snippetNeedsSizing;	// 8 = 0x8
    long long attachmentType;	// 16 = 0x10
    double attachmentYOffset;	// 24 = 0x18
    id <SRSiriStackableContentDelegate> stackContainerDelegate;	// 32 = 0x20
    SRSiriViewStackConstraints *stackConstraints;	// 40 = 0x28
    NSArray *customAttachmentConstraints;	// 48 = 0x30
    double _darkenIntensity;	// 56 = 0x38
    id <SRCompactResultViewDelegate> _delegate;	// 64 = 0x40
    SiriUIContentPlatterView *_snippetView;	// 72 = 0x48
    SiriUIPanDismissalGestureRecognizer *_dismissalGestureRecognizer;	// 80 = 0x50
    UIButton *_overlayButton;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000010009e628
@property(retain, nonatomic, getter=_overlayButton) UIButton *overlayButton; // @synthesize overlayButton=_overlayButton;
@property(nonatomic) _Bool snippetNeedsSizing; // @synthesize snippetNeedsSizing=_snippetNeedsSizing;
@property(retain, nonatomic) SiriUIPanDismissalGestureRecognizer *dismissalGestureRecognizer; // @synthesize dismissalGestureRecognizer=_dismissalGestureRecognizer;
@property(readonly, nonatomic) SiriUIContentPlatterView *snippetView; // @synthesize snippetView=_snippetView;
@property(nonatomic) __weak id <SRCompactResultViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double darkenIntensity; // @synthesize darkenIntensity=_darkenIntensity;
@property(retain, nonatomic) NSArray *customAttachmentConstraints; // @synthesize customAttachmentConstraints;
@property(retain, nonatomic) SRSiriViewStackConstraints *stackConstraints; // @synthesize stackConstraints;
@property(nonatomic) __weak id <SRSiriStackableContentDelegate> stackContainerDelegate; // @synthesize stackContainerDelegate;
@property(nonatomic) double attachmentYOffset; // @synthesize attachmentYOffset;
@property(nonatomic) long long attachmentType; // @synthesize attachmentType;
- (id)_snippetRemovalAnimation;	// IMP=0x000000010009e140
- (id)_snippetInsertAnimation;	// IMP=0x000000010009dd50
- (void)contentPlatterViewScrolledToContentOffset:(struct CGPoint)arg1;	// IMP=0x000000010009dcf0
- (void)contentPlatterView:(id)arg1 didScrollWithContentOffset:(struct CGPoint)arg2;	// IMP=0x000000010009dc9c
- (void)_overlayButtonWasTouchedUpInside:(id)arg1;	// IMP=0x000000010009dc54
- (struct CGSize)_maxSizeForSnippet;	// IMP=0x000000010009db9c
- (_Bool)_snippetViewIsLoading;	// IMP=0x000000010009d9ec
- (void)relayout;	// IMP=0x000000010009d744
- (void)layoutSubviews;	// IMP=0x000000010009d58c
- (void)setNeedsLayout;	// IMP=0x000000010009d51c
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000010009d4c4
@property(readonly, nonatomic) struct CGSize portraitContentSize;
- (void)snippetContentDidUpdate;	// IMP=0x000000010009d47c
- (void)setDarkenIntensity:(double)arg1 animated:(_Bool)arg2;	// IMP=0x000000010009d28c
- (void)setShowDimmingView:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000010009d1bc
- (void)setShowSnippetView:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000010009cf30
- (void)setSnippetView:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010009cbc0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010009cb00

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool useLowerPriorityHeightConstraint;

@end

