//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSLayoutConstraint, NSString, UILabel, UIVisualEffectView;

@interface TVSMHomeCameraBadgeView : UIView
{
    _Bool _materialBackground;	// 8 = 0x8
    NSString *_badgeText;	// 16 = 0x10
    unsigned long long _size;	// 24 = 0x18
    UILabel *_smallLabel;	// 32 = 0x20
    UILabel *_largeLabel;	// 40 = 0x28
    UIVisualEffectView *_effectView;	// 48 = 0x30
    NSLayoutConstraint *_minimumWidthConstraint;	// 56 = 0x38
    NSLayoutConstraint *_leadingConstraint;	// 64 = 0x40
    NSLayoutConstraint *_trailingConstraint;	// 72 = 0x48
    NSArray *_platterConstraints;	// 80 = 0x50
    NSArray *_fullScreenConstraints;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000000000c560
@property(retain, nonatomic) NSArray *fullScreenConstraints; // @synthesize fullScreenConstraints=_fullScreenConstraints;
@property(retain, nonatomic) NSArray *platterConstraints; // @synthesize platterConstraints=_platterConstraints;
@property(retain, nonatomic) NSLayoutConstraint *trailingConstraint; // @synthesize trailingConstraint=_trailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *leadingConstraint; // @synthesize leadingConstraint=_leadingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *minimumWidthConstraint; // @synthesize minimumWidthConstraint=_minimumWidthConstraint;
@property(retain, nonatomic) UIVisualEffectView *effectView; // @synthesize effectView=_effectView;
@property(retain, nonatomic) UILabel *largeLabel; // @synthesize largeLabel=_largeLabel;
@property(retain, nonatomic) UILabel *smallLabel; // @synthesize smallLabel=_smallLabel;
@property(nonatomic) _Bool materialBackground; // @synthesize materialBackground=_materialBackground;
@property(nonatomic) unsigned long long size; // @synthesize size=_size;
@property(retain, nonatomic) NSString *badgeText; // @synthesize badgeText=_badgeText;
- (id)initWithMaterialBackground:(_Bool)arg1;	// IMP=0x000000000000b530

@end

