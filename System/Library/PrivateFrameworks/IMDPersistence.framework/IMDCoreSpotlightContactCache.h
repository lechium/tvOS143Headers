/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:04 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/IMDPersistence.framework/IMDPersistence
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSCache;

@interface IMDCoreSpotlightContactCache : NSObject {

	NSCache* _cache;

}

@property (nonatomic,retain) NSCache * cache;              //@synthesize cache=_cache - In the implementation block
+(id)sharedInstance;
+(id)contactsForVCardAtPath:(id)arg1 ;
+(id)vCardNameForContact:(id)arg1 ;
+(id)vCardMapURLForContact:(id)arg1 ;
+(void)vCardCoordinateForMapURL:(id)arg1 outLatitude:(float*)arg2 outLongitude:(float*)arg3 ;
+(void)updateAttributes:(id)arg1 withAddressFromContact:(id)arg2 ;
-(void)dealloc;
-(NSCache *)cache;
-(void)setCache:(NSCache *)arg1 ;
-(void)contactStoreDidChange:(id)arg1 ;
-(id)cachedContactForKey:(id)arg1 cacheHit:(BOOL*)arg2 ;
-(void)cacheContact:(id)arg1 forKey:(id)arg2 ;
@end
