/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:45 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXGGeneratedSublayoutComposition.h>

@class PXYearsLayoutGenerator, PXYearsLayoutMetrics;

@interface PXYearsSublayoutComposition : PXGGeneratedSublayoutComposition {

	PXYearsLayoutGenerator* _layoutGenerator;
	PXYearsLayoutMetrics* _metrics;

}

@property (nonatomic,copy) PXYearsLayoutMetrics * metrics;                      //@synthesize metrics=_metrics - In the implementation block
@property (nonatomic,readonly) long long presentedNumberOfColumns; 
-(void)setMetrics:(PXYearsLayoutMetrics *)arg1 ;
-(PXYearsLayoutMetrics *)metrics;
-(id)configuredLayoutGenerator;
-(long long)presentedNumberOfColumns;
-(UIEdgeInsets)sublayoutInsetsForStylableType:(long long)arg1 ;
@end

