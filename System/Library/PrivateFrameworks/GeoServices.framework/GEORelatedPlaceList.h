/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:54 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class GEOPDRelatedPlace, NSArray;

@interface GEORelatedPlaceList : NSObject {

	GEOPDRelatedPlace* _relatedPlace;

}

@property (nonatomic,readonly) NSArray * mapIdentifiers; 
@property (nonatomic,readonly) int type; 
-(int)type;
-(id)initWithRelatedPlace:(id)arg1 ;
-(NSArray *)mapIdentifiers;
@end

