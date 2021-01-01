/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:00 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, GEORelatedCollectionSection, NSArray;

@interface GEORelatedEntitySection : NSObject {

	unsigned _index;
	NSString* _name;
	long long _sectionType;
	GEORelatedCollectionSection* _relatedCollectionSection;
	NSArray* _relatedPlaceCollections;

}

@property (nonatomic,readonly) NSString * name;                                                     //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned index;                                                      //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) long long sectionType;                                               //@synthesize sectionType=_sectionType - In the implementation block
@property (nonatomic,readonly) GEORelatedCollectionSection * relatedCollectionSection;              //@synthesize relatedCollectionSection=_relatedCollectionSection - In the implementation block
@property (nonatomic,readonly) NSArray * relatedPlaceCollections;                                   //@synthesize relatedPlaceCollections=_relatedPlaceCollections - In the implementation block
-(NSString *)name;
-(id)init;
-(unsigned)index;
-(long long)sectionType;
-(GEORelatedCollectionSection *)relatedCollectionSection;
-(id)initWithRelatedEntitySection:(id)arg1 mapsResults:(id)arg2 ;
-(id)placeCollectionsWithCollectionSection:(id)arg1 ;
-(NSArray *)relatedPlaceCollections;
@end
