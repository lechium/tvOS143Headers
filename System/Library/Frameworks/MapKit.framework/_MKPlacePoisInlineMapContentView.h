/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:40 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapKit/MapKit-Structs.h>
#import <MapKit/_MKPlaceInlineMapContentView.h>

@class _MKUILabel;

@interface _MKPlacePoisInlineMapContentView : _MKPlaceInlineMapContentView {

	_MKUILabel* _storesLabel;
	_MKUILabel* _seeMoreLabel;
	BOOL _visible;

}

@property (assign,nonatomic) BOOL visible;              //@synthesize visible=_visible - In the implementation block
-(BOOL)visible;
-(void)setVisible:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)hasTitle;
-(CGSize)intrinsicContentSize;
-(double)mapViewHeight;
-(BOOL)useImageView;
-(void)setLocationsNumber:(unsigned long long)arg1 ;
@end

