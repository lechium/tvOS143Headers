//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "HBImageStackCollectionViewCell.h"

#import "HBIconProgressViewDelegate-Protocol.h"
#import "HBRootItemObserver-Protocol.h"

@class CALayer, HBBadgeOverlayView, HBIconProgressView, HBRootItem, NSString, PBSBadgeValue, UILongPressGestureRecognizer, UITapGestureRecognizer, UIView;
@protocol HBRootCellDelegate, UINamedLayerStack;

@interface HBRootCell : HBImageStackCollectionViewCell <HBIconProgressViewDelegate, HBRootItemObserver>
{
    _Bool _pendingProgressViewUpdate;	// 8 = 0x8
    _Bool _allowsProgressAnimation;	// 9 = 0x9
    _Bool _isIdle;	// 10 = 0xa
    struct {
        unsigned int delegateDidLongPress:1;
    } _flags;	// 12 = 0xc
    _Bool _paused;	// 16 = 0x10
    _Bool _showingSnapshot;	// 17 = 0x11
    _Bool _editing;	// 18 = 0x12
    _Bool _inDock;	// 19 = 0x13
    id <HBRootCellDelegate> _delegate;	// 24 = 0x18
    HBRootItem *_item;	// 32 = 0x20
    id <UINamedLayerStack> _icon;	// 40 = 0x28
    double _installPercentage;	// 48 = 0x30
    long long _installProgressState;	// 56 = 0x38
    PBSBadgeValue *_badgeValue;	// 64 = 0x40
    long long _dropState;	// 72 = 0x48
    UIView *_flashView;	// 80 = 0x50
    UIView *_snapshotView;	// 88 = 0x58
    HBBadgeOverlayView *_badgeOverlayView;	// 96 = 0x60
    UILongPressGestureRecognizer *_editGesture;	// 104 = 0x68
    UITapGestureRecognizer *_removeGesture;	// 112 = 0x70
    UITapGestureRecognizer *_selectGesture;	// 120 = 0x78
    HBIconProgressView *_progressView;	// 128 = 0x80
}

+ (id)_badgeNumberFormatter;	// IMP=0x0000000100058224
+ (double)_radiosityStrengthForUserInterfaceStyle:(long long)arg1;	// IMP=0x0000000100057e98
+ (id)_iconImageConfigurationForUserInterfaceStyle:(long long)arg1;	// IMP=0x0000000100057ce0
+ (id)_progressMaskImage;	// IMP=0x0000000100057508
+ (void)_setFocusDuration:(double)arg1;	// IMP=0x0000000100057378
+ (double)_focusDuration;	// IMP=0x000000010005736c
+ (_Bool)automaticallyNotifiesObserversOfInDock;	// IMP=0x0000000100056f00
- (void).cxx_destruct;	// IMP=0x0000000100058914
@property(nonatomic, getter=isInDock) _Bool inDock; // @synthesize inDock=_inDock;
@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
@property(retain, nonatomic) HBIconProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UITapGestureRecognizer *selectGesture; // @synthesize selectGesture=_selectGesture;
@property(retain, nonatomic) UITapGestureRecognizer *removeGesture; // @synthesize removeGesture=_removeGesture;
@property(retain, nonatomic) UILongPressGestureRecognizer *editGesture; // @synthesize editGesture=_editGesture;
@property(retain, nonatomic) HBBadgeOverlayView *badgeOverlayView; // @synthesize badgeOverlayView=_badgeOverlayView;
@property(nonatomic) _Bool showingSnapshot; // @synthesize showingSnapshot=_showingSnapshot;
@property(retain, nonatomic) UIView *snapshotView; // @synthesize snapshotView=_snapshotView;
@property(retain, nonatomic) UIView *flashView; // @synthesize flashView=_flashView;
@property(nonatomic) long long dropState; // @synthesize dropState=_dropState;
@property(retain, nonatomic) PBSBadgeValue *badgeValue; // @synthesize badgeValue=_badgeValue;
@property(nonatomic) long long installProgressState; // @synthesize installProgressState=_installProgressState;
@property(nonatomic) double installPercentage; // @synthesize installPercentage=_installPercentage;
@property(nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
@property(retain, nonatomic) id <UINamedLayerStack> icon; // @synthesize icon=_icon;
@property(retain, nonatomic) HBRootItem *item; // @synthesize item=_item;
@property(nonatomic) __weak id <HBRootCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000001000585cc
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000010005843c
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000001000582ac
- (void)_updateRadiosityStrength;	// IMP=0x0000000100057ff0
- (void)_updateStackedImageConfiguration;	// IMP=0x0000000100057eb0
- (void)_longPressGesture:(id)arg1;	// IMP=0x0000000100057c38
- (void)_updateBadgeValueView;	// IMP=0x0000000100057994
- (void)_updateProgressView;	// IMP=0x00000001000577b8
- (void)_updateBadgeValue;	// IMP=0x0000000100057494
- (void)_updateDisplayName;	// IMP=0x0000000100057420
- (void)_updateInstallState;	// IMP=0x0000000100057384
- (void)_updateForInDockState;	// IMP=0x00000001000572d8
- (void)_unbindInDock;	// IMP=0x00000001000572c4
- (void)_setInDock:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000001000571d0
- (double)_maxTitleWidthWithFocus:(_Bool)arg1;	// IMP=0x000000010005711c
- (void)_updateInDockBinding;	// IMP=0x0000000100057050
- (void)tvs_bindInDockBindingToObject:(id)arg1 withKeyPath:(id)arg2 options:(id)arg3;	// IMP=0x0000000100056f60
- (id)InDockBinding;	// IMP=0x0000000100056f08
- (void)progressViewCanBeRemoved:(id)arg1;	// IMP=0x0000000100056ef0
- (void)setInstallPercentage:(double)arg1 shouldNotify:(_Bool)arg2;	// IMP=0x0000000100056e24
- (_Bool)_applyKeyPathsAndRelativeValues:(id)arg1 forMotionEffect:(id)arg2;	// IMP=0x0000000100056d30
- (long long)_focusedSound;	// IMP=0x0000000100056d28
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000100056cd8
- (void)setLayeredImageView:(id)arg1;	// IMP=0x0000000100056aa8
- (void)setImageStackView:(id)arg1;	// IMP=0x0000000100056aa4
- (id)imageStackView;	// IMP=0x0000000100056a9c
- (void)applyLayoutAttributes:(id)arg1;	// IMP=0x00000001000569e0
- (void)prepareForReuse;	// IMP=0x0000000100056928
- (id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2;	// IMP=0x0000000100056890
- (void)_exitIdleMode;	// IMP=0x0000000100056754
- (void)_enterIdleMode;	// IMP=0x00000001000565bc
@property(readonly, nonatomic, getter=_layerBelowFlash) CALayer *layerBelowFlash;
- (void)cancelConfirmFlash;	// IMP=0x00000001000564b0
- (void)beginConfirmFlash;	// IMP=0x0000000100055fec
- (void)setDropState:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100055f48
- (void)setItem:(id)arg1 withIcon:(id)arg2;	// IMP=0x0000000100055cf4
- (void)dealloc;	// IMP=0x0000000100055ad4
- (id)notificationObject:(id)arg1;	// IMP=0x0000000100055ac4
- (void)badgeValueDidChangeNotification:(id)arg1;	// IMP=0x0000000100055a30
- (void)displayNameDidChangeNotification:(id)arg1;	// IMP=0x000000010005599c
- (void)installStateDidChangeNotification:(id)arg1;	// IMP=0x0000000100055908
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000555d4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

