/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:13 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSString, CLSBusinessCacheEntry;

@interface CLSManagedBusinessItem : NSManagedObject

@property (nonatomic,retain) NSNumber * venueCapacityAsNumber; 
@property (assign,nonatomic) unsigned long long muid; 
@property (nonatomic,copy) NSString * name; 
@property (assign,nonatomic) double latitude; 
@property (assign,nonatomic) double longitude; 
@property (assign,nonatomic) double radius; 
@property (assign,nonatomic) unsigned categories; 
@property (assign,nonatomic) long long venueCapacity; 
@property (nonatomic,retain) NSString * businessCategories; 
@property (nonatomic,retain) CLSBusinessCacheEntry * entry; 
@property (nonatomic,retain) NSString * geoServiceProvider; 
@property (nonatomic,retain) NSString * isoCountryCode; 
+(id)entityName;
-(long long)venueCapacity;
-(void)setVenueCapacity:(long long)arg1 ;
@end

