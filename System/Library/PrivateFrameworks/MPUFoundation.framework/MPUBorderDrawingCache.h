/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:25 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class MPUBorderView, NSCache;

@interface MPUBorderDrawingCache : NSObject {

	MPUBorderView* _borderView;
	NSCache* _images;
	double _displayScale;

}

@property (assign,nonatomic) double displayScale;              //@synthesize displayScale=_displayScale - In the implementation block
-(id)init;
-(void)dealloc;
-(void)_invalidate;
-(double)displayScale;
-(id)_borderView;
-(void)setDisplayScale:(double)arg1 ;
-(id)imageForBorderConfiguration:(id)arg1 ;
-(void)_applicationDidReceiveMemoryWarning:(id)arg1 ;
@end

