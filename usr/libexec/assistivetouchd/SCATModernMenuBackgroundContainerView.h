//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSLayoutConstraint, SCATModernMenuContentViewContainer, SCATModernMenuFooterView;

@interface SCATModernMenuBackgroundContainerView : UIView
{
    _Bool _showingFooterView;	// 8 = 0x8
    _Bool _shouldUseDockContentPadding;	// 9 = 0x9
    NSLayoutConstraint *_footerViewHiddenConstraint;	// 16 = 0x10
    SCATModernMenuContentViewContainer *_contentViewContainer;	// 24 = 0x18
    SCATModernMenuFooterView *_footerView;	// 32 = 0x20
    long long _dockPosition;	// 40 = 0x28
    NSLayoutConstraint *_viewTopConstraint;	// 48 = 0x30
    NSLayoutConstraint *_viewBottomConstraint;	// 56 = 0x38
    NSLayoutConstraint *_viewLeadingConstraint;	// 64 = 0x40
    NSLayoutConstraint *_viewTrailingConstraint;	// 72 = 0x48
    NSLayoutConstraint *_footerToContainerVerticalConstraint;	// 80 = 0x50
    NSArray *_verticalConstraints;	// 88 = 0x58
    NSArray *_dockVerticalConstraints;	// 96 = 0x60
    NSArray *_dockVerticalPortraitConstraints;	// 104 = 0x68
    NSLayoutConstraint *_dockTopConstraint;	// 112 = 0x70
    NSLayoutConstraint *_dockBottomConstraint;	// 120 = 0x78
    NSLayoutConstraint *_dockTopSafeConstraint;	// 128 = 0x80
    NSLayoutConstraint *_dockBottomSafeConstraint;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x0000000100011dc0
@property(retain, nonatomic) NSLayoutConstraint *dockBottomSafeConstraint; // @synthesize dockBottomSafeConstraint=_dockBottomSafeConstraint;
@property(retain, nonatomic) NSLayoutConstraint *dockTopSafeConstraint; // @synthesize dockTopSafeConstraint=_dockTopSafeConstraint;
@property(retain, nonatomic) NSLayoutConstraint *dockBottomConstraint; // @synthesize dockBottomConstraint=_dockBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *dockTopConstraint; // @synthesize dockTopConstraint=_dockTopConstraint;
@property(retain, nonatomic) NSArray *dockVerticalPortraitConstraints; // @synthesize dockVerticalPortraitConstraints=_dockVerticalPortraitConstraints;
@property(retain, nonatomic) NSArray *dockVerticalConstraints; // @synthesize dockVerticalConstraints=_dockVerticalConstraints;
@property(retain, nonatomic) NSArray *verticalConstraints; // @synthesize verticalConstraints=_verticalConstraints;
@property(retain, nonatomic) NSLayoutConstraint *footerToContainerVerticalConstraint; // @synthesize footerToContainerVerticalConstraint=_footerToContainerVerticalConstraint;
@property(retain, nonatomic) NSLayoutConstraint *viewTrailingConstraint; // @synthesize viewTrailingConstraint=_viewTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *viewLeadingConstraint; // @synthesize viewLeadingConstraint=_viewLeadingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *viewBottomConstraint; // @synthesize viewBottomConstraint=_viewBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *viewTopConstraint; // @synthesize viewTopConstraint=_viewTopConstraint;
@property(nonatomic) long long dockPosition; // @synthesize dockPosition=_dockPosition;
@property(nonatomic) _Bool shouldUseDockContentPadding; // @synthesize shouldUseDockContentPadding=_shouldUseDockContentPadding;
@property(nonatomic, getter=isShowingFooterView) _Bool showingFooterView; // @synthesize showingFooterView=_showingFooterView;
@property(retain, nonatomic) SCATModernMenuFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) SCATModernMenuContentViewContainer *contentViewContainer; // @synthesize contentViewContainer=_contentViewContainer;
@property(readonly, nonatomic) struct UIEdgeInsets contentPadding;
- (void)orientationDidChange;	// IMP=0x0000000100011b78
@property(readonly, nonatomic) NSLayoutConstraint *footerViewHiddenConstraint; // @synthesize footerViewHiddenConstraint=_footerViewHiddenConstraint;
- (void)updateConstraints;	// IMP=0x0000000100011694
- (void)_setupSubviewConstraints;	// IMP=0x0000000100010c90
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100010b20

@end
