/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:10 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOPhotoInfoProvider.h>

@class AMSMediaArtwork, GEOPDPhotoContent, NSString;

@interface GEOAMPPhotoInfoProvider : NSObject <GEOPhotoInfoProvider> {

	AMSMediaArtwork* _artwork;
	GEOPDPhotoContent* _templatePhotoContent;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPhotoContent:(id)arg1 ;
-(id)largestPhoto;
-(id)bestPhotoForSize:(CGSize)arg1 options:(id)arg2 ;
-(double)sizeRatio;
-(int)designatedURLType;
@end

