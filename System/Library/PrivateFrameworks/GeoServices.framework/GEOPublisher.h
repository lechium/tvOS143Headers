/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:54 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class GEOPDPublisher, GEOCollectionPublisherAttribution, GEOMapItemIdentifier, NSString, NSURL;

@interface GEOPublisher : NSObject {

	GEOPDPublisher* _publisher;
	GEOCollectionPublisherAttribution* _publisherAttribution;

}

@property (nonatomic,readonly) long long totalCollectionCount; 
@property (nonatomic,readonly) GEOMapItemIdentifier * identifier; 
@property (nonatomic,readonly) NSString * publisherDescription; 
@property (nonatomic,readonly) NSURL * publisherURL; 
@property (getter=isSuppressed,nonatomic,readonly) BOOL suppressed; 
@property (getter=isBlocked,nonatomic,readonly) BOOL blocked; 
@property (nonatomic,readonly) GEOCollectionPublisherAttribution * publisherAttribution;              //@synthesize publisherAttribution=_publisherAttribution - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(GEOMapItemIdentifier *)identifier;
-(BOOL)isBlocked;
-(id)initWithPublisher:(id)arg1 usingAttribution:(id)arg2 ;
-(BOOL)isSuppressed;
-(GEOCollectionPublisherAttribution *)publisherAttribution;
-(NSString *)publisherDescription;
-(long long)totalCollectionCount;
-(NSURL *)publisherURL;
@end

