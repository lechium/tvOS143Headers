/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:51 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PXPlacesGeotaggable;
@class NSString;

@interface _PXPlacesImageCacheKey : NSObject {

	id<PXPlacesGeotaggable> _geotaggable;
	NSString* _key;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)key;
-(id)initWithGeotaggable:(id)arg1 andKey:(id)arg2 ;
-(id)geotaggable;
@end

