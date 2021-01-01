/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:04 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class GEOPDAllCollectionsViewResult, NSArray;

@interface GEOAllCollectionsViewResult : NSObject {

	GEOPDAllCollectionsViewResult* _allCollectionsViewResult;
	NSArray* _places;

}

@property (nonatomic,readonly) NSArray * collectionIdentifiers; 
@property (nonatomic,readonly) NSArray * resultFilters; 
-(NSArray *)resultFilters;
-(id)initWithAllCollectionsViewResult:(id)arg1 withPlaces:(id)arg2 ;
-(id)initWithAllCollectionsViewResult:(id)arg1 ;
-(NSArray *)collectionIdentifiers;
@end
