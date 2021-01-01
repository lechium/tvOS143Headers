/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:21 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSCacheDelegate.h>

@class NSCache, NSString;

@interface TVCKStoreContentMetadataCache : NSObject <NSCacheDelegate> {

	NSCache* _entriesByAdamID;

}

@property (nonatomic,retain) NSCache * entriesByAdamID;              //@synthesize entriesByAdamID=_entriesByAdamID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)cache:(id)arg1 willEvictObject:(id)arg2 ;
-(NSCache *)entriesByAdamID;
-(id)itemForAdamID:(id)arg1 ;
-(void)setItem:(id)arg1 forAdamID:(id)arg2 withExpirationDate:(id)arg3 ;
-(void)setEntriesByAdamID:(NSCache *)arg1 ;
@end

