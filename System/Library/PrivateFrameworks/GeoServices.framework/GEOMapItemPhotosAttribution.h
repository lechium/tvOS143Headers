/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:09 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GEOMapItemAttribution.h>

@class NSArray;

@interface GEOMapItemPhotosAttribution : GEOMapItemAttribution

@property (nonatomic,readonly) NSArray * addPhotoURLs; 
@property (nonatomic,readonly) BOOL canAddPhotosLocally; 
@property (nonatomic,readonly) BOOL canShowPhotosLocally; 
@property (nonatomic,readonly) BOOL shouldSuppressPhotoAttribution; 
@property (nonatomic,readonly) BOOL supportsReportingIssue; 
-(id)initWithSearchAttributionInfo:(id)arg1 attributionURLs:(id)arg2 poiID:(id)arg3 ;
-(id)initWithSearchAttributionInfo:(id)arg1 attributionURLs:(id)arg2 yelpID:(id)arg3 ;
-(NSArray *)addPhotoURLs;
-(id)urlsForPhotoWithIdentifier:(id)arg1 ;
-(BOOL)canAddPhotosLocally;
-(BOOL)canShowPhotosLocally;
-(BOOL)shouldSuppressPhotoAttribution;
-(BOOL)supportsReportingIssue;
@end

