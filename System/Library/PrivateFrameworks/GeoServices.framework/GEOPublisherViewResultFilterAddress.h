/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:54 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class GEOPDPublisherViewResultFilterAddress, GEOPDEntity, GEOMapItemIdentifier, NSString;

@interface GEOPublisherViewResultFilterAddress : NSObject {

	GEOPDPublisherViewResultFilterAddress* _filterAddressIdentifier;
	GEOPDEntity* _placeEntity;

}

@property (nonatomic,readonly) GEOMapItemIdentifier * filterAddressIdentifier; 
@property (nonatomic,readonly) NSString * displayString; 
@property (nonatomic,readonly) GEOPDPublisherViewResultFilterAddress * addressIdentifier; 
-(NSString *)displayString;
-(id)initWithFilterAddressIdentifier:(id)arg1 withPlaces:(id)arg2 ;
-(GEOMapItemIdentifier *)filterAddressIdentifier;
-(GEOPDPublisherViewResultFilterAddress *)addressIdentifier;
@end
