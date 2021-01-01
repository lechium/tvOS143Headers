/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:40 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXGLayout.h>
#import <libobjc.A.dylib/PXGDataSourceDrivenLayout.h>

@protocol PXGSublayoutFaultingDelegate;
@class NSString;

@interface PXGStackLayout : PXGLayout <PXGDataSourceDrivenLayout> {

	struct {
		unsigned long long needsUpdate;
		unsigned long long updated;
		BOOL isPerformingUpdate;
	}  _updateFlags;
	BOOL _isUpdatingSublayouts;
	CGPoint* _sublayoutOriginsBeforeUpdate;
	BOOL _alignsLastSublayoutToVisibleBottomEdge;
	long long _axis;
	double _interlayoutSpacing;
	id<PXGSublayoutFaultingDelegate> _sublayoutFaultingDelegate;
	UIEdgeInsets _flexibleRegionInsets;
	UIEdgeInsets _padding;
	UIEdgeInsets _faultInOutsets;
	UIEdgeInsets _faultOutOutsets;

}

@property (assign,nonatomic) UIEdgeInsets faultInOutsets;                                                    //@synthesize faultInOutsets=_faultInOutsets - In the implementation block
@property (assign,nonatomic) UIEdgeInsets faultOutOutsets;                                                   //@synthesize faultOutOutsets=_faultOutOutsets - In the implementation block
@property (assign,nonatomic) long long axis;                                                                 //@synthesize axis=_axis - In the implementation block
@property (assign,nonatomic) double interlayoutSpacing;                                                      //@synthesize interlayoutSpacing=_interlayoutSpacing - In the implementation block
@property (assign,nonatomic) UIEdgeInsets padding;                                                           //@synthesize padding=_padding - In the implementation block
@property (assign,nonatomic) BOOL alignsLastSublayoutToVisibleBottomEdge;                                    //@synthesize alignsLastSublayoutToVisibleBottomEdge=_alignsLastSublayoutToVisibleBottomEdge - In the implementation block
@property (assign,nonatomic,__weak) id<PXGSublayoutFaultingDelegate> sublayoutFaultingDelegate;              //@synthesize sublayoutFaultingDelegate=_sublayoutFaultingDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)update;
-(UIEdgeInsets)padding;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(long long)axis;
-(void)setAxis:(long long)arg1 ;
-(void)visibleRectDidChange;
-(void)referenceSizeDidChange;
-(void)screenScaleDidChange;
-(void)viewEnvironmentDidChange;
-(void)scrollSpeedRegimeDidChange;
-(void)sublayoutNeedsUpdate:(id)arg1 ;
-(void)sublayoutDidChangeContentSize:(id)arg1 ;
-(void)sublayoutDidChangeLastBaseline:(id)arg1 ;
-(void)didAddSublayout:(id)arg1 atIndex:(long long)arg2 flags:(unsigned long long)arg3 ;
-(void)willRemoveSublayout:(id)arg1 atIndex:(long long)arg2 flags:(unsigned long long)arg3 ;
-(double)interlayoutSpacing;
-(void)setInterlayoutSpacing:(double)arg1 ;
-(UIEdgeInsets)flexibleRegionInsets;
-(void)insertSublayoutProvider:(id)arg1 inRange:(NSRange)arg2 ;
-(void)_updateSublayouts;
-(UIEdgeInsets)additionalSafeAreaInsetsForSublayout:(id)arg1 ;
-(void)invalidateAdditionalSafeAreaInsets;
-(void)_invalidateEstimatedSublayoutContentSizes;
-(void)_updateInterlayoutSpacing;
-(void)setFaultInOutsets:(UIEdgeInsets)arg1 ;
-(void)setAlignsLastSublayoutToVisibleBottomEdge:(BOOL)arg1 ;
-(BOOL)alignsLastSublayoutToVisibleBottomEdge;
-(id<PXGSublayoutFaultingDelegate>)sublayoutFaultingDelegate;
-(void)setSublayoutFaultingDelegate:(id<PXGSublayoutFaultingDelegate>)arg1 ;
-(UIEdgeInsets)faultInOutsets;
-(UIEdgeInsets)faultOutOutsets;
-(void)setFaultOutOutsets:(UIEdgeInsets)arg1 ;
@end

