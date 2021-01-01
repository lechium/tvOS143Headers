/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:48 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXFeatureSpec.h>

@interface PXZoomableInlineHeadersLayoutSpec : PXFeatureSpec {

	UIEdgeInsets _headerFloatMargins;
	UIEdgeInsets _headerFloatMarginsWithTallSafeAreaInsets;
	unsigned long long _style;
	double _headerOffsetY;

}

@property (nonatomic,readonly) unsigned long long style;              //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) double headerOffsetY;                  //@synthesize headerOffsetY=_headerOffsetY - In the implementation block
-(unsigned long long)style;
-(id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 ;
-(UIEdgeInsets)headerFloatMarginsForSafeAreaInsets:(UIEdgeInsets)arg1 ;
-(double)headerOffsetY;
@end

