/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:46 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIVisualEffectViewSubviewMonitoring.h>

@protocol _UIVisualEffectViewParticipating;
@class NSMutableArray, UIView, _UIVisualEffectViewBackdropCaptureGroup, _UIVisualEffectBackdropView, _UIVisualEffectDescriptor, NSArray, NSString;

@interface _UIVisualEffectHost : NSObject <_UIVisualEffectViewSubviewMonitoring> {

	NSMutableArray* _views;
	BOOL _autosetSubviewLabelTintColor;
	BOOL _contentViewRequired;
	UIView*<_UIVisualEffectViewParticipating> _contentView;
	_UIVisualEffectViewBackdropCaptureGroup* _primaryCaptureGroup;
	_UIVisualEffectBackdropView* _captureView;
	_UIVisualEffectDescriptor* _currentEffectDescriptor;
	_UIVisualEffectDescriptor* _transitionEffectDescriptor;

}

@property (nonatomic,readonly) UIView*<_UIVisualEffectViewParticipating> contentView;                    //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) BOOL contentViewRequired;                                                   //@synthesize contentViewRequired=_contentViewRequired - In the implementation block
@property (nonatomic,readonly) NSArray * views;                                                          //@synthesize views=_views - In the implementation block
@property (nonatomic,retain) _UIVisualEffectViewBackdropCaptureGroup * primaryCaptureGroup;              //@synthesize primaryCaptureGroup=_primaryCaptureGroup - In the implementation block
@property (assign,nonatomic,__weak) _UIVisualEffectBackdropView * captureView;                           //@synthesize captureView=_captureView - In the implementation block
@property (nonatomic,retain) _UIVisualEffectDescriptor * currentEffectDescriptor;                        //@synthesize currentEffectDescriptor=_currentEffectDescriptor - In the implementation block
@property (nonatomic,readonly) _UIVisualEffectDescriptor * transitionEffectDescriptor;                   //@synthesize transitionEffectDescriptor=_transitionEffectDescriptor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(UIView*<_UIVisualEffectViewParticipating>)contentView;
-(id)initWithContentView:(id)arg1 ;
-(NSArray *)views;
-(void)beginTransition;
-(void)endTransition;
-(void)setPrimaryCaptureGroup:(_UIVisualEffectViewBackdropCaptureGroup *)arg1 ;
-(void)_iterateViews:(/*^block*/id)arg1 ;
-(id)_cloneFilters:(id)arg1 ;
-(void)_updateView:(id)arg1 shouldDrawWithTintColor:(BOOL)arg2 ;
-(void)_updateAdjustTintColors;
-(void)_configureEffectDescriptor:(id)arg1 ;
-(void)_applyRequestedDescriptorEffectInvertingView:(id)arg1 ;
-(void)_applyIdentityDescriptorEffectInvertingView:(id)arg1 ;
-(id)_viewForEntry:(id)arg1 fromCapturePool:(id)arg2 imagePool:(id)arg3 otherPool:(id)arg4 ;
-(void)_evaluateInPlaceFiltering;
-(void)_view:(id)arg1 willMoveToWindow:(id)arg2 ;
-(void)_view:(id)arg1 willGainDescendent:(id)arg2 ;
-(void)_view:(id)arg1 willLoseDescendent:(id)arg2 ;
-(void)setContentViewRequired:(BOOL)arg1 ;
-(void)setCaptureView:(_UIVisualEffectBackdropView *)arg1 ;
-(void)monitorSubviewsOf:(id)arg1 ;
-(void)setCurrentEffectDescriptor:(_UIVisualEffectDescriptor *)arg1 ;
-(void)prepareToTransitionToEffectDescriptor:(id)arg1 ;
-(void)_applyEffectDescriptor:(id)arg1 ;
-(BOOL)contentViewRequired;
-(_UIVisualEffectViewBackdropCaptureGroup *)primaryCaptureGroup;
-(_UIVisualEffectBackdropView *)captureView;
-(_UIVisualEffectDescriptor *)currentEffectDescriptor;
-(_UIVisualEffectDescriptor *)transitionEffectDescriptor;
@end

